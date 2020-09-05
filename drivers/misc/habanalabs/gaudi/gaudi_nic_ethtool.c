// SPDX-License-Identifier: GPL-2.0

/*
 * Copyright 2018-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 */

#include "gaudi_nic.h"
#include "../include/gaudi/asic_reg/gaudi_regs.h"
#include <linux/pci.h>

#define NIC_STATS_LEN		ARRAY_SIZE(gaudi_nic_ethtool_stats)
#define NIC_SPMU0_STATS_LEN	ARRAY_SIZE(gaudi_nic0_spmu_event_type)
#define NIC_SPMU1_STATS_LEN	ARRAY_SIZE(gaudi_nic1_spmu_event_type)
#define NIC_SPMU_STATS_LEN_MAX	6
#define NIC_MAC_STATS_RX_LEN	ARRAY_SIZE(gaudi_nic_mac_stats_rx)
#define NIC_MAC_STATS_TX_LEN	ARRAY_SIZE(gaudi_nic_mac_stats_tx)
#define NIC_XPCS91_REGS_CNT_LEN	ARRAY_SIZE(gaudi_nic_xpcs91_reg_type)
#define NIC_SW_CNT_LEN		ARRAY_SIZE(gaudi_nic_sw_cnt_type)

#define NIC_MAC_STAT_BLOCK_SIZE	(mmNIC1_STAT_BASE - mmNIC0_STAT_BASE)
#define NIC_MAC_STAT_HI_PART	mmNIC0_STAT_DATA_HI_REG
#define NIC_MAC_RX_PORT0_OFFSET	mmNIC0_STAT_ETHERSTATSOCTETS
#define NIC_MAC_RX_PORT1_OFFSET	mmNIC0_STAT_ETHERSTATSOCTETS_2
#define NIC_MAC_TX_PORT0_OFFSET	mmNIC0_STAT_ETHERSTATSOCTETS_4
#define NIC_MAC_TX_PORT1_OFFSET	mmNIC0_STAT_ETHERSTATSOCTETS_6

#define NIC_MAC_STAT_BASE(port) \
			((u64) (NIC_MAC_STAT_BLOCK_SIZE * (u64) ((port) >> 1)))

#define NIC_MAC_STAT_RREG32(port, reg) \
			RREG32(NIC_MAC_STAT_BASE(port) + (reg))

#define ethtool_add_mode ethtool_link_ksettings_add_link_mode

struct gaudi_nic_ethtool_stats {
	char stat_string[ETH_GSTRING_LEN];
	int stat_offset;
};

struct gaudi_nic_spmu_event_type {
	char stat_string[ETH_GSTRING_LEN];
	int index;
};

struct gaudi_nic_xpcs91_reg_type {
	char stat_string[ETH_GSTRING_LEN];
	int lo_offset;
	int hi_offset;
};

struct gaudi_nic_sw_cnt_type {
	char stat_string[ETH_GSTRING_LEN];
};

#define NIC_STAT(m) {__stringify(m), offsetof(struct net_device, stats.m)}

static struct gaudi_nic_ethtool_stats gaudi_nic_ethtool_stats[] = {
	NIC_STAT(rx_packets),
	NIC_STAT(tx_packets),
	NIC_STAT(rx_bytes),
	NIC_STAT(tx_bytes),
	NIC_STAT(rx_errors),
	NIC_STAT(tx_errors),
	NIC_STAT(rx_dropped),
	NIC_STAT(tx_dropped),
	NIC_STAT(multicast),
	NIC_STAT(collisions),
	NIC_STAT(rx_length_errors),
	NIC_STAT(rx_over_errors),
	NIC_STAT(rx_crc_errors),
	NIC_STAT(rx_frame_errors),
	NIC_STAT(rx_fifo_errors),
	NIC_STAT(rx_missed_errors),
	NIC_STAT(tx_aborted_errors),
	NIC_STAT(tx_carrier_errors),
	NIC_STAT(tx_fifo_errors),
	NIC_STAT(tx_heartbeat_errors),
	NIC_STAT(tx_window_errors)
};

static struct gaudi_nic_ethtool_stats gaudi_nic_mac_stats_rx[] = {
	{"etherStatsOctets", 0x0},
	{"OctetsReceivedOK", 0x4},
	{"aAlignmentErrors", 0x8},
	{"aPAUSEMACCtrlFramesReceived", 0xC},
	{"aFrameTooLongErrors", 0x10},
	{"aInRangeLengthErrors", 0x14},
	{"aFramesReceivedOK", 0x18},
	{"VLANReceivedOK", 0x1C},
	{"aFrameCheckSequenceErrors", 0x20},
	{"ifInErrors", 0x24},
	{"ifInUcastPkts", 0x28},
	{"ifInMulticastPkts", 0x2C},
	{"ifInBroadcastPkts", 0x30},
	{"etherStatsDropEvents", 0x34},
	{"etherStatsUndersizePkts", 0x38},
	{"etherStatsPkts", 0x3C},
	{"etherStatsPkts64Octets", 0x40},
	{"etherStatsPkts65to127Octets", 0x44},
	{"etherStatsPkts128to255Octets", 0x48},
	{"etherStatsPkts256to511Octets", 0x4C},
	{"etherStatsPkts512to1023Octets", 0x50},
	{"etherStatsPkts1024to1518Octets", 0x54},
	{"etherStatsPkts1519toMaxOctets", 0x58},
	{"etherStatsOversizePkts", 0x5C},
	{"etherStatsJabbers", 0x60},
	{"etherStatsFragments", 0x64},
	{"aCBFCPAUSEFramesReceived_0", 0x68},
	{"aCBFCPAUSEFramesReceived_1", 0x6C},
	{"aCBFCPAUSEFramesReceived_2", 0x70},
	{"aCBFCPAUSEFramesReceived_3", 0x74},
	{"aCBFCPAUSEFramesReceived_4", 0x78},
	{"aCBFCPAUSEFramesReceived_5", 0x7C},
	{"aCBFCPAUSEFramesReceived_6", 0x80},
	{"aCBFCPAUSEFramesReceived_7", 0x84},
	{"aMACControlFramesReceived", 0x88}
};

static struct gaudi_nic_ethtool_stats gaudi_nic_mac_stats_tx[] = {
	{"etherStatsOctets", 0x0},
	{"OctetsTransmittedOK", 0x4},
	{"aPAUSEMACCtrlFramesTransmitted", 0x8},
	{"aFramesTransmittedOK", 0xC},
	{"VLANTransmittedOK", 0x10},
	{"ifOutErrors", 0x14},
	{"ifOutUcastPkts", 0x18},
	{"ifOutMulticastPkts", 0x1C},
	{"ifOutBroadcastPkts", 0x20},
	{"etherStatsPkts64Octets", 0x24},
	{"etherStatsPkts65to127Octets", 0x28},
	{"etherStatsPkts128to255Octets", 0x2C},
	{"etherStatsPkts256to511Octets", 0x30},
	{"etherStatsPkts512to1023Octets", 0x34},
	{"etherStatsPkts1024to1518Octets", 0x38},
	{"etherStatsPkts1519toMaxOctets", 0x3C},
	{"aCBFCPAUSEFramesTransmitted_0", 0x40},
	{"aCBFCPAUSEFramesTransmitted_1", 0x44},
	{"aCBFCPAUSEFramesTransmitted_2", 0x48},
	{"aCBFCPAUSEFramesTransmitted_3", 0x4C},
	{"aCBFCPAUSEFramesTransmitted_4", 0x50},
	{"aCBFCPAUSEFramesTransmitted_5", 0x54},
	{"aCBFCPAUSEFramesTransmitted_6", 0x58},
	{"aCBFCPAUSEFramesTransmitted_7", 0x5C},
	{"aMACControlFramesTransmitted", 0x60},
	{"etherStatsPkts", 0x64}
};

static struct gaudi_nic_spmu_event_type gaudi_nic0_spmu_event_type[] = {
	{"requester_psn_out_of_range", 18},
	{"responder_duplicate_psn", 21},
	{"responder_out_of_sequence_psn", 22}
};

static struct gaudi_nic_spmu_event_type gaudi_nic1_spmu_event_type[] = {
	{"requester_psn_out_of_range", 6},
	{"responder_duplicate_psn", 9},
	{"responder_out_of_sequence_psn", 10}
};

static struct gaudi_nic_xpcs91_reg_type gaudi_nic_xpcs91_reg_type[] = {
	{"correctable_errors", 0x2, 0x3},
	{"uncorrectable_errors", 0x4, 0x5}
};

static struct gaudi_nic_sw_cnt_type gaudi_nic_sw_cnt_type[] = {
	{"pcs_local_faults"},
	{"pcs_remote_faults"},
};

static void gaudi_nic_get_drvinfo(struct net_device *netdev,
					struct ethtool_drvinfo *drvinfo)
{
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct gaudi_nic_device *gaudi_nic = *ptr;
	struct hl_device *hdev = gaudi_nic->hdev;

	strlcpy(drvinfo->driver, HL_NAME, sizeof(drvinfo->driver));
	strlcpy(drvinfo->fw_version, hdev->asic_prop.cpucp_info.cpucp_version,
		sizeof(drvinfo->fw_version));
	if (hdev->pdev)
		strlcpy(drvinfo->bus_info, pci_name(hdev->pdev),
				sizeof(drvinfo->bus_info));
}

static int gaudi_nic_get_link_ksettings(struct net_device *netdev,
					struct ethtool_link_ksettings *cmd)
{
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct gaudi_nic_device *gaudi_nic = *ptr;
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port, speed;

	port = gaudi_nic->port;
	speed = gaudi_nic->speed;

	cmd->base.speed = speed;
	cmd->base.duplex = DUPLEX_FULL;

	ethtool_link_ksettings_zero_link_mode(cmd, supported);
	ethtool_link_ksettings_zero_link_mode(cmd, advertising);

	ethtool_add_mode(cmd, supported, 100000baseCR4_Full);
	ethtool_add_mode(cmd, supported, 100000baseSR4_Full);
	ethtool_add_mode(cmd, supported, 100000baseKR4_Full);
	ethtool_add_mode(cmd, supported, 100000baseLR4_ER4_Full);

	ethtool_add_mode(cmd, supported, 50000baseSR2_Full);
	ethtool_add_mode(cmd, supported, 50000baseCR2_Full);
	ethtool_add_mode(cmd, supported, 50000baseKR2_Full);

	if (speed == SPEED_100000) {
		ethtool_add_mode(cmd, advertising, 100000baseCR4_Full);
		ethtool_add_mode(cmd, advertising, 100000baseSR4_Full);
		ethtool_add_mode(cmd, advertising, 100000baseKR4_Full);
		ethtool_add_mode(cmd, advertising, 100000baseLR4_ER4_Full);

		cmd->base.port = PORT_FIBRE;

		ethtool_add_mode(cmd, supported, FIBRE);
		ethtool_add_mode(cmd, advertising, FIBRE);

		ethtool_add_mode(cmd, supported, Backplane);
		ethtool_add_mode(cmd, advertising, Backplane);
	} else if (speed == SPEED_50000) {
		ethtool_add_mode(cmd, advertising, 50000baseSR2_Full);
		ethtool_add_mode(cmd, advertising, 50000baseCR2_Full);
		ethtool_add_mode(cmd, advertising, 50000baseKR2_Full);
	} else {
		dev_err(hdev->dev, "unknown speed %d, port %d\n", speed, port);
		return -EFAULT;
	}

	ethtool_add_mode(cmd, supported, Autoneg);

	if (gaudi_nic->auto_neg_enable) {
		ethtool_add_mode(cmd, advertising, Autoneg);
		cmd->base.autoneg = AUTONEG_ENABLE;
		if (gaudi_nic->auto_neg_resolved)
			ethtool_add_mode(cmd, lp_advertising, Autoneg);
	} else {
		cmd->base.autoneg = AUTONEG_DISABLE;
	}

	ethtool_add_mode(cmd, supported, Pause);

	if (gaudi_nic->pfc_enable)
		ethtool_add_mode(cmd, advertising, Pause);

	return 0;
}

static bool check_ksettings(const struct ethtool_link_ksettings *old_cmd,
				const struct ethtool_link_ksettings *new_cmd)
{
	/* only autoneg and speed are mutable */
	return (old_cmd->base.duplex == new_cmd->base.duplex) &&
		(old_cmd->base.port == new_cmd->base.port) &&
		(old_cmd->base.phy_address == new_cmd->base.phy_address) &&
		(old_cmd->base.eth_tp_mdix_ctrl ==
				new_cmd->base.eth_tp_mdix_ctrl) &&
		bitmap_empty(new_cmd->link_modes.advertising,
				__ETHTOOL_LINK_MODE_MASK_NBITS);
}

static int gaudi_nic_set_link_ksettings(struct net_device *netdev,
				const struct ethtool_link_ksettings *cmd)
{
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct ethtool_link_ksettings curr_cmd = {0};
	struct gaudi_nic_device *gaudi_nic = *ptr;
	u32 port = gaudi_nic->port;
	struct hl_device *hdev;
	bool auto_neg;
	int rc, speed;

	hdev = gaudi_nic->hdev;

	rc = gaudi_nic_get_link_ksettings(netdev, &curr_cmd);
	if (rc)
		return rc;

	if (!check_ksettings(&curr_cmd, cmd))
		return -EOPNOTSUPP;

	speed = cmd->base.speed;
	auto_neg = cmd->base.autoneg == AUTONEG_ENABLE;

	switch (speed) {
	case SPEED_10000:
	case SPEED_25000:
	case SPEED_50000:
		if (gaudi_nic->nic_macro->num_of_lanes == NIC_LANES_4) {
			dev_err(hdev->dev,
				"NIC %d with 4 lanes should be used only with speed of 100000Mb/s\n",
				port);
			return -EFAULT;
		}
		break;
	case SPEED_100000:
		break;
	default:
		dev_err(hdev->dev, "got invalid speed %dMb/s for NIC %d",
			speed, port);
		return -EINVAL;
	}

	if ((gaudi_nic->speed == speed) &&
			(gaudi_nic->auto_neg_enable == auto_neg))
		return 0;

	if (atomic_cmpxchg(&gaudi_nic->in_reset, 0, 1)) {
		dev_err(hdev->dev, "port %d is in reset, can't change speed",
			port);
		return -EBUSY;
	}

	gaudi_nic->speed = speed;
	if (auto_neg)
		hdev->nic_auto_neg_mask |= BIT(port);
	else
		hdev->nic_auto_neg_mask &= ~BIT(port);

	if (gaudi_nic->enabled) {
		rc = gaudi_nic_port_reset(gaudi_nic);
		if (rc)
			dev_err(hdev->dev,
				"Failed to reset NIC %d for speed change, rc %d",
				port, rc);
	}

	atomic_set(&gaudi_nic->in_reset, 0);

	return rc;
}

static u32 gaudi_nic_get_link(struct net_device *netdev)
{
	return netif_carrier_ok(netdev);
}

static void gaudi_nic_get_internal_strings(struct net_device *netdev,
					u8 *data)
{
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct gaudi_nic_spmu_event_type *spmu_stats;
	struct gaudi_nic_device *gaudi_nic = *ptr;
	u32 port = gaudi_nic->port;
	u32 num_spmus;
	u32 i;

	if (port & 1) {
		num_spmus = NIC_SPMU1_STATS_LEN;
		spmu_stats = gaudi_nic1_spmu_event_type;
	} else {
		num_spmus = NIC_SPMU0_STATS_LEN;
		spmu_stats = gaudi_nic0_spmu_event_type;
	}

	for (i = 0 ; i < num_spmus ; i++)
		memcpy(data + i * ETH_GSTRING_LEN,
				spmu_stats[i].stat_string,
				ETH_GSTRING_LEN);
	data += i * ETH_GSTRING_LEN;
	for (i = 0 ; i < NIC_MAC_STATS_RX_LEN ; i++)
		memcpy(data + i * ETH_GSTRING_LEN,
				gaudi_nic_mac_stats_rx[i].stat_string,
				ETH_GSTRING_LEN);
	data += i * ETH_GSTRING_LEN;
	for (i = 0 ; i < NIC_XPCS91_REGS_CNT_LEN ; i++)
		memcpy(data + i * ETH_GSTRING_LEN,
				gaudi_nic_xpcs91_reg_type[i].stat_string,
				ETH_GSTRING_LEN);
	data += i * ETH_GSTRING_LEN;
	for (i = 0 ; i < NIC_SW_CNT_LEN ; i++)
		memcpy(data + i * ETH_GSTRING_LEN,
				gaudi_nic_sw_cnt_type[i].stat_string,
				ETH_GSTRING_LEN);
	data += i * ETH_GSTRING_LEN;
	for (i = 0 ; i < NIC_MAC_STATS_TX_LEN ; i++)
		memcpy(data + i * ETH_GSTRING_LEN,
				gaudi_nic_mac_stats_tx[i].stat_string,
				ETH_GSTRING_LEN);

}

static void gaudi_nic_get_strings(struct net_device *netdev, u32 stringset,
					u8 *data)
{
	int i;

	if (stringset == ETH_SS_STATS) {
		for (i = 0; i < NIC_STATS_LEN; i++)
			memcpy(data + i * ETH_GSTRING_LEN,
					gaudi_nic_ethtool_stats[i].stat_string,
					ETH_GSTRING_LEN);
		gaudi_nic_get_internal_strings(netdev,
					data + i * ETH_GSTRING_LEN);
	}
}

static int gaudi_nic_get_sset_count(struct net_device *netdev, int sset)
{
	int num_spmus, mac_counters, xpcs91_counters, sw_counetrs;
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct gaudi_nic_device *gaudi_nic = *ptr;
	u32 port = gaudi_nic->port;

	num_spmus = (port & 1) ? NIC_SPMU1_STATS_LEN : NIC_SPMU0_STATS_LEN;
	mac_counters = NIC_MAC_STATS_RX_LEN + NIC_MAC_STATS_TX_LEN;
	xpcs91_counters = NIC_XPCS91_REGS_CNT_LEN;
	sw_counetrs = NIC_SW_CNT_LEN;

	switch (sset) {
	case ETH_SS_STATS:
		return NIC_STATS_LEN + num_spmus + mac_counters +
			xpcs91_counters + sw_counetrs;
	default:
		return -EOPNOTSUPP;
	}
}
static u64 gaudi_nic_read_mac_counter(struct hl_device *hdev, u32 port,
						int offset, bool is_rx)
{
	u64 lo_part, hi_part;
	u64 start_reg;

	if (!hdev->supports_coresight)
		return 0;

	if (is_rx)
		if (port & 1)
			start_reg = NIC_MAC_RX_PORT1_OFFSET;
		else
			start_reg = NIC_MAC_RX_PORT0_OFFSET;
	else
		if (port & 1)
			start_reg = NIC_MAC_TX_PORT1_OFFSET;
		else
			start_reg = NIC_MAC_TX_PORT0_OFFSET;

	lo_part = NIC_MAC_STAT_RREG32(port, start_reg + offset);
	/* Volatile read: MUST read high part after low */
	hi_part = NIC_MAC_STAT_RREG32(port, NIC_MAC_STAT_HI_PART);

	return lo_part | (hi_part << 32);
}

static void gaudi_nic_read_xpcs91_regs(struct gaudi_nic_device *gaudi_nic,
					u64 *out_data)
{
	u32 lo_part, hi_part, start_lane = __ffs(gaudi_nic->fw_tuning_mask);

	lo_part = gaudi_nic_mac_read(gaudi_nic, start_lane, "xpcs91",
			gaudi_nic_xpcs91_reg_type[0].lo_offset);
	hi_part = gaudi_nic_mac_read(gaudi_nic, start_lane, "xpcs91",
			gaudi_nic_xpcs91_reg_type[0].hi_offset);
	gaudi_nic->correctable_errors_cnt +=
					(hi_part << 16) | lo_part;
	out_data[0] = gaudi_nic->correctable_errors_cnt;

	lo_part = gaudi_nic_mac_read(gaudi_nic, start_lane, "xpcs91",
			gaudi_nic_xpcs91_reg_type[1].lo_offset);
	hi_part = gaudi_nic_mac_read(gaudi_nic, start_lane, "xpcs91",
			gaudi_nic_xpcs91_reg_type[1].hi_offset);
	gaudi_nic->uncorrectable_errors_cnt +=
					(hi_part << 16) | lo_part;
	out_data[1] = gaudi_nic->uncorrectable_errors_cnt;
}

static void gaudi_nic_read_sw_counters(struct gaudi_nic_device *gaudi_nic,
					u64 *out_data)
{
	out_data[0] = gaudi_nic->pcs_local_fault_cnt;
	out_data[1] = gaudi_nic->pcs_remote_fault_cnt;
}

static void gaudi_nic_get_internal_stats(struct net_device *netdev, u64 *data)
{
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct gaudi_nic_device *gaudi_nic = *ptr;
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port = gaudi_nic->port;
	u32 num_spmus;
	int i;

	num_spmus = (port & 1) ? NIC_SPMU1_STATS_LEN : NIC_SPMU0_STATS_LEN;

	gaudi_sample_spmu_nic(hdev, port, num_spmus, data);
	data += num_spmus;

	for (i = 1 ; i < NIC_MAC_STATS_RX_LEN ; i++)
		data[i] = gaudi_nic_read_mac_counter(hdev, port,
				gaudi_nic_mac_stats_rx[i].stat_offset, true);
	data += i;

	gaudi_nic_read_xpcs91_regs(gaudi_nic, data);
	data += NIC_XPCS91_REGS_CNT_LEN;

	gaudi_nic_read_sw_counters(gaudi_nic, data);
	data += NIC_SW_CNT_LEN;

	for (i = 1 ; i < NIC_MAC_STATS_TX_LEN ; i++)
		data[i] = gaudi_nic_read_mac_counter(hdev, port,
				gaudi_nic_mac_stats_tx[i].stat_offset, false);
}

static void gaudi_nic_get_ethtool_stats(struct net_device *netdev,
					struct ethtool_stats *stats, u64 *data)
{
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct gaudi_nic_device *gaudi_nic = *ptr;
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port = gaudi_nic->port;
	char *p;
	int i;

	if (disabled_or_in_reset(gaudi_nic)) {
		dev_info_ratelimited(hdev->dev,
			"port %d is in reset, can't get ethtool stats", port);
		return;
	}

	for (i = 0; i < NIC_STATS_LEN ; i++) {
		p = (char *) netdev + gaudi_nic_ethtool_stats[i].stat_offset;
		data[i] = *(u32 *) p;
	}

	gaudi_nic_get_internal_stats(netdev, data + i);
}

static int gaudi_nic_get_module_info(struct net_device *netdev,
					struct ethtool_modinfo *modinfo)
{
	modinfo->type = ETH_MODULE_SFF_8636;
	modinfo->eeprom_len = ETH_MODULE_SFF_8636_LEN;

	return 0;
}

static int gaudi_nic_get_module_eeprom(struct net_device *netdev,
					struct ethtool_eeprom *ee, u8 *data)
{
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct gaudi_nic_device *gaudi_nic = *ptr;
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 first, last, len;

	if (ee->len == 0)
		return -EINVAL;

	first = ee->offset;
	last = ee->offset + ee->len;

	if (first < ETH_MODULE_SFF_8636_LEN) {
		len = min_t(unsigned int, last, ETH_MODULE_SFF_8079_LEN);
		len -= first;

		memcpy(data, hdev->asic_prop.cpucp_nic_info.qsfp_eeprom + first,
			len);
	}

	return 0;
}

/* enable spmus for ethtool monitoring */
void gaudi_nic_spmu_init(struct hl_device *hdev, int port)
{
	u32 spmu_events[NIC_SPMU_STATS_LEN_MAX], num_event_types;
	struct gaudi_nic_spmu_event_type *event_types;
	int rc, i;

	if (port & 1) {
		num_event_types = NIC_SPMU1_STATS_LEN;
		event_types = gaudi_nic1_spmu_event_type;
	} else {
		num_event_types = NIC_SPMU0_STATS_LEN;
		event_types = gaudi_nic0_spmu_event_type;
	}

	if (num_event_types > NIC_SPMU_STATS_LEN_MAX)
		num_event_types = NIC_SPMU_STATS_LEN_MAX;

	for (i = 0 ; i < num_event_types ; i++)
		spmu_events[i] = event_types[i].index;

	rc = gaudi_config_spmu_nic(hdev, port, num_event_types,
			spmu_events);
	if (rc)
		dev_err(hdev->dev,
			"Failed to configure spmu for NIC port %d\n",
			port);
}

u64 gaudi_nic_read_mac_stat_counter(struct hl_device *hdev, u32 port, int idx,
					bool is_rx)
{
	struct gaudi_nic_ethtool_stats *stat = is_rx ?
						&gaudi_nic_mac_stats_rx[idx] :
						&gaudi_nic_mac_stats_tx[idx];

	return gaudi_nic_read_mac_counter(hdev, port, stat->stat_offset, is_rx);
}

const struct ethtool_ops gaudi_nic_ethtool_ops = {
	.get_drvinfo = gaudi_nic_get_drvinfo,
	.get_link_ksettings = gaudi_nic_get_link_ksettings,
	.set_link_ksettings = gaudi_nic_set_link_ksettings,
	.get_link = gaudi_nic_get_link,
	.get_strings = gaudi_nic_get_strings,
	.get_sset_count = gaudi_nic_get_sset_count,
	.get_ethtool_stats = gaudi_nic_get_ethtool_stats,
	.get_module_info   = gaudi_nic_get_module_info,
	.get_module_eeprom = gaudi_nic_get_module_eeprom,
};

