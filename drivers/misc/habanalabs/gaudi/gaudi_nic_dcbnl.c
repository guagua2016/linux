// SPDX-License-Identifier: GPL-2.0

/*
 * Copyright 2018-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 */

#include "gaudi_nic.h"

#define PFC_PRIO_NUM		4
#define PFC_PRIO_MASK_ALL	GENMASK(PFC_PRIO_NUM - 1, 0)
#define PFC_PRIO_MASK_NONE	0
#define PFC_STAT_TX_OFFSET	17
#define PFC_STAT_RX_OFFSET	27

#ifdef CONFIG_DCB
static int gaudi_nic_dcbnl_ieee_getpfc(struct net_device *netdev,
					struct ieee_pfc *pfc)
{
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct gaudi_nic_device *gaudi_nic = *ptr;
	struct hl_device *hdev = gaudi_nic->hdev;
	int rc = 0, i, tx_idx, rx_idx;
	u32 port = gaudi_nic->port;

	if (disabled_or_in_reset(gaudi_nic)) {
		dev_info_ratelimited(hdev->dev,
				"port %d is in reset, can't get PFC", port);
		return -EBUSY;
	}

	pfc->pfc_en = gaudi_nic->pfc_enable ? PFC_PRIO_MASK_ALL :
							PFC_PRIO_MASK_NONE;
	pfc->pfc_cap = PFC_PRIO_NUM;

	for (i = 0 ; i < PFC_PRIO_NUM ; i++) {
		tx_idx = PFC_STAT_TX_OFFSET + i;
		rx_idx = PFC_STAT_RX_OFFSET + i;

		pfc->requests[i] = gaudi_nic_read_mac_stat_counter(hdev, port,
								tx_idx, false);
		pfc->indications[i] = gaudi_nic_read_mac_stat_counter(hdev,
							port, rx_idx, true);
	}

	return rc;
}

static int gaudi_nic_dcbnl_ieee_setpfc(struct net_device *netdev,
					struct ieee_pfc *pfc)
{
	struct gaudi_nic_device **ptr = netdev_priv(netdev);
	struct gaudi_nic_device *gaudi_nic = *ptr;
	struct hl_device *hdev = gaudi_nic->hdev;
	u32 port = gaudi_nic->port;
	u8 curr_pfc_en;

	if (pfc->pfc_en & ~PFC_PRIO_MASK_ALL) {
		dev_info_ratelimited(hdev->dev,
					"PFC supports %d priorities only, port %d\n",
					PFC_PRIO_NUM, port);
		return -EINVAL;
	}

	if ((pfc->pfc_en != PFC_PRIO_MASK_NONE) &&
			(pfc->pfc_en != PFC_PRIO_MASK_ALL)) {
		dev_info_ratelimited(hdev->dev,
					"PFC should be enabled/disabled on all priorities, port %d\n",
					port);
		return -EINVAL;
	}

	if (disabled_or_in_reset(gaudi_nic)) {
		dev_info_ratelimited(hdev->dev,
				"port %d is in reset, can't set PFC", port);
		return -EBUSY;
	}

	curr_pfc_en = gaudi_nic->pfc_enable ? PFC_PRIO_MASK_ALL :
							PFC_PRIO_MASK_NONE;

	if (pfc->pfc_en == curr_pfc_en)
		return 0;

	gaudi_nic->pfc_enable = !gaudi_nic->pfc_enable;

	gaudi_nic_set_pfc(gaudi_nic);

	return 0;
}

static u8 gaudi_nic_dcbnl_getdcbx(struct net_device *netdev)
{
	return DCB_CAP_DCBX_HOST | DCB_CAP_DCBX_VER_IEEE;
}

static u8 gaudi_nic_dcbnl_setdcbx(struct net_device *netdev, u8 mode)
{
	return !(mode == (DCB_CAP_DCBX_HOST | DCB_CAP_DCBX_VER_IEEE));
}

const struct dcbnl_rtnl_ops gaudi_nic_dcbnl_ops = {
	.ieee_getpfc	= gaudi_nic_dcbnl_ieee_getpfc,
	.ieee_setpfc	= gaudi_nic_dcbnl_ieee_setpfc,
	.getdcbx	= gaudi_nic_dcbnl_getdcbx,
	.setdcbx	= gaudi_nic_dcbnl_setdcbx
};
#endif
