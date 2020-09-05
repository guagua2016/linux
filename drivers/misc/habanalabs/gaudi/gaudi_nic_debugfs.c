// SPDX-License-Identifier: GPL-2.0

/*
 * Copyright 2018-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 */

#include "gaudi_nic.h"
#include <linux/debugfs.h>
#include <linux/nospec.h>

#ifdef CONFIG_DEBUG_FS

#define POLARITY_KBUF_SIZE	8
#define TX_TAPS_KBUF_SIZE	25

static ssize_t debugfs_pam4_tx_taps_write(struct file *f,
						const char __user *buf,
						size_t count, loff_t *ppos)
{
	struct hl_device *hdev = file_inode(f)->i_private;
	struct gaudi_device *gaudi = hdev->asic_specific;
	char kbuf[TX_TAPS_KBUF_SIZE];
	char *c1, *c2;
	ssize_t rc;
	u32 lane;
	s32 tx_pre2, tx_pre1, tx_main, tx_post1, tx_post2;
	s32 *taps;

	if (count > sizeof(kbuf) - 1)
		goto err;
	if (copy_from_user(kbuf, buf, count))
		goto err;
	kbuf[count] = '\0';

	c1 = kbuf;
	c2 = strchr(c1, ' ');
	if (!c2)
		goto err;
	*c2 = '\0';

	rc = kstrtou32(c1, 10, &lane);
	if (rc)
		goto err;

	if (lane >= NIC_MAX_NUM_OF_LANES) {
		dev_err(hdev->dev, "lane max value is %d\n",
			NIC_MAX_NUM_OF_LANES - 1);
		return -EINVAL;
	}

	/* Turn off speculation due to Spectre vulnerability */
	lane = array_index_nospec(lane, NIC_MAX_NUM_OF_LANES);

	c1 = c2 + 1;

	c2 = strchr(c1, ' ');
	if (!c2)
		goto err;
	*c2 = '\0';

	rc = kstrtos32(c1, 10, &tx_pre2);
	if (rc)
		goto err;

	c1 = c2 + 1;

	c2 = strchr(c1, ' ');
	if (!c2)
		goto err;
	*c2 = '\0';

	rc = kstrtos32(c1, 10, &tx_pre1);
	if (rc)
		goto err;

	c1 = c2 + 1;

	c2 = strchr(c1, ' ');
	if (!c2)
		goto err;
	*c2 = '\0';

	rc = kstrtos32(c1, 10, &tx_main);
	if (rc)
		goto err;

	c1 = c2 + 1;

	c2 = strchr(c1, ' ');
	if (!c2)
		goto err;
	*c2 = '\0';

	rc = kstrtos32(c1, 10, &tx_post1);
	if (rc)
		goto err;

	c1 = c2 + 1;

	rc = kstrtos32(c1, 10, &tx_post2);
	if (rc)
		goto err;

	taps = gaudi->nic_pam4_tx_taps[lane].taps;
	taps[0] = tx_pre2;
	taps[1] = tx_pre1;
	taps[2] = tx_main;
	taps[3] = tx_post1;
	taps[4] = tx_post2;

	return count;
err:
	dev_err(hdev->dev,
		"usage: echo <lane> <tx_pre2> <tx_pre1> <tx_main> <tx_post1> <tx_post2> > nic_pam4_tx_taps\n");

	return -EINVAL;
}

static const struct file_operations debugfs_pam4_tx_taps_fops = {
	.owner = THIS_MODULE,
	.write = debugfs_pam4_tx_taps_write,
};

static ssize_t debugfs_polarity_write(struct file *f, const char __user *buf,
					size_t count, loff_t *ppos)
{
	struct hl_device *hdev = file_inode(f)->i_private;
	struct gaudi_device *gaudi = hdev->asic_specific;
	struct cpucp_nic_info *nic_info = &hdev->asic_prop.cpucp_nic_info;
	char kbuf[POLARITY_KBUF_SIZE];
	char *c1, *c2;
	ssize_t rc;
	u64 val;
	u32 lane;
	u8 pol_tx, pol_rx;

	if (count > sizeof(kbuf) - 1)
		goto err;
	if (copy_from_user(kbuf, buf, count))
		goto err;
	kbuf[count] = '\0';

	c1 = kbuf;
	c2 = strchr(c1, ' ');
	if (!c2)
		goto err;
	*c2 = '\0';

	rc = kstrtou32(c1, 10, &lane);
	if (rc)
		goto err;

	if (lane >= NIC_MAX_NUM_OF_LANES) {
		dev_err(hdev->dev, "lane max value is %d\n",
			NIC_MAX_NUM_OF_LANES - 1);
		return -EINVAL;
	}

	c1 = c2 + 1;

	c2 = strchr(c1, ' ');
	if (!c2)
		goto err;
	*c2 = '\0';

	rc = kstrtou8(c1, 10, &pol_tx);
	if (rc)
		goto err;

	c1 = c2 + 1;

	rc = kstrtou8(c1, 10, &pol_rx);
	if (rc)
		goto err;

	if ((pol_tx & ~1) || (pol_rx & ~1)) {
		dev_err(hdev->dev, "pol_tx and pol_rx should be 0 or 1\n");
		goto err;
	}

	val = le64_to_cpu(nic_info->pol_tx_mask[0]);
	val &= ~BIT_ULL(lane);
	val |= ((u64) pol_tx) << lane;
	nic_info->pol_tx_mask[0] = cpu_to_le64(val);

	val = le64_to_cpu(nic_info->pol_rx_mask[0]);
	val &= ~BIT_ULL(lane);
	val |= ((u64) pol_rx) << lane;
	nic_info->pol_rx_mask[0] = cpu_to_le64(val);

	gaudi->nic_use_fw_polarity = true;

	return count;
err:
	dev_err(hdev->dev,
		"usage: echo <lane> <pol_tx> <pol_rx> > nic_polarity\n");

	return -EINVAL;
}

static const struct file_operations debugfs_polarity_fops = {
	.owner = THIS_MODULE,
	.write = debugfs_polarity_write,
};

static ssize_t debugfs_ports_status_read(struct file *f, char __user *buf,
					size_t count, loff_t *ppos)
{
	struct hl_device *hdev = file_inode(f)->i_private;
	struct gaudi_device *gaudi = hdev->asic_specific;
	char tmp_buf[512] = {0};
	ssize_t rc;
	int i, up_cnt = 0, down_cnt = 0;

	if (*ppos)
		return 0;

	for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++)
		if ((hdev->nic_ports_mask & BIT(i))) {
			if (gaudi->nic_devices[i].active)
				up_cnt++;
			else
				down_cnt++;
		}

	if (up_cnt) {
		sprintf(tmp_buf, "%d ports up (", up_cnt);

		for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++)
			if ((hdev->nic_ports_mask & BIT(i)) &&
				gaudi->nic_devices[i].active)
				sprintf(tmp_buf + strlen(tmp_buf), "%d, ", i);

		sprintf(tmp_buf + strlen(tmp_buf) - 2, ")");
	}

	if (down_cnt) {
		if (up_cnt)
			sprintf(tmp_buf + strlen(tmp_buf), "\n");

		sprintf(tmp_buf + strlen(tmp_buf), "%d ports down (", down_cnt);

		for (i = 0 ; i < NIC_NUMBER_OF_PORTS ; i++)
			if ((hdev->nic_ports_mask & BIT(i)) &&
				!gaudi->nic_devices[i].active)
				sprintf(tmp_buf + strlen(tmp_buf), "%d, ", i);

		sprintf(tmp_buf + strlen(tmp_buf) - 2, ")");
	}

	sprintf(tmp_buf + strlen(tmp_buf), "\n");

	rc = simple_read_from_buffer(buf, strlen(tmp_buf) + 1, ppos, tmp_buf,
					strlen(tmp_buf) + 1);

	return rc;
}

static const struct file_operations debugfs_ports_status_fops = {
	.owner = THIS_MODULE,
	.read = debugfs_ports_status_read,
};

#define NIC_DEBUGFS(X, fmt, do_reset) \
static ssize_t debugfs_##X##_read(struct file *f, \
					char __user *buf, \
					size_t count, \
					loff_t *ppos) \
{ \
	struct hl_device *hdev = file_inode(f)->i_private; \
	struct gaudi_device *gaudi = hdev->asic_specific; \
	char tmp_buf[32]; \
	ssize_t rc; \
\
	if (*ppos) \
		return 0; \
\
	sprintf(tmp_buf, fmt "\n", gaudi->nic_##X); \
	rc = simple_read_from_buffer(buf, strlen(tmp_buf) + 1, ppos, tmp_buf, \
			strlen(tmp_buf) + 1); \
\
	return rc; \
} \
\
static ssize_t debugfs_##X##_write(struct file *f, \
					const char __user *buf, \
					size_t count, \
					loff_t *ppos) \
{ \
	struct hl_device *hdev = file_inode(f)->i_private; \
	struct gaudi_device *gaudi = hdev->asic_specific; \
	u64 val, base; \
	ssize_t rc; \
\
	if (!strcmp(fmt, "%d")) \
		base = 10; \
	else \
		base = 16; \
\
	rc = kstrtoull_from_user(buf, count, base, &val); \
	if (rc) \
		return rc; \
\
	if (val == gaudi->nic_##X) \
		return count; \
\
	if (do_reset && gaudi->nic_debugfs_reset) { \
		gaudi->nic_##X = val; \
		hl_device_reset(hdev, true, false); \
		ssleep(HL_PENDING_RESET_PER_SEC); \
		return count; \
	} \
\
	dev_info(hdev->dev, "NIC reset for %s started\n", __stringify(X)); \
\
	rc = gaudi_nic_hard_reset_prepare(hdev); \
	if (rc) \
		return rc; \
\
	gaudi_nic_stop(hdev); \
\
	/* must do this so the ports will be reopened */ \
	gaudi->hw_cap_initialized &= ~HW_CAP_NIC_DRV; \
\
	gaudi->nic_##X = val; \
\
	gaudi_nic_ports_reopen(hdev); \
\
	dev_info(hdev->dev, "NIC reset for %s finished\n", __stringify(X)); \
\
	return count; \
} \
\
static const struct file_operations debugfs_##X##_fops = { \
	.owner = THIS_MODULE, \
	.read = debugfs_##X##_read, \
	.write = debugfs_##X##_write, \
}

NIC_DEBUGFS(mac_loopback, "0x%llx", true);
NIC_DEBUGFS(pcs_fail_time_frame, "%d", false);
NIC_DEBUGFS(pcs_fail_threshold, "%d", false);

void gaudi_nic_debugfs_init(struct hl_device *hdev)
{
	struct gaudi_device *gaudi = hdev->asic_specific;

	debugfs_create_file("nic_mac_loopback",
				0644,
				hdev->hl_debugfs.root,
				hdev,
				&debugfs_mac_loopback_fops);

	debugfs_create_file("nic_ports_status",
				0444,
				hdev->hl_debugfs.root,
				hdev,
				&debugfs_ports_status_fops);

	debugfs_create_file("nic_pcs_fail_time_frame",
				0644,
				hdev->hl_debugfs.root,
				hdev,
				&debugfs_pcs_fail_time_frame_fops);

	debugfs_create_file("nic_pcs_fail_threshold",
				0644,
				hdev->hl_debugfs.root,
				hdev,
				&debugfs_pcs_fail_threshold_fops);

	debugfs_create_file("nic_pam4_tx_taps",
				0444,
				hdev->hl_debugfs.root,
				hdev,
				&debugfs_pam4_tx_taps_fops);

	debugfs_create_file("nic_polarity",
				0444,
				hdev->hl_debugfs.root,
				hdev,
				&debugfs_polarity_fops);

	debugfs_create_u8("nic_check_link",
				0644,
				hdev->hl_debugfs.root,
				&gaudi->nic_check_link);

	debugfs_create_u8("nic_phy_auto_neg_lpbk",
				0644,
				hdev->hl_debugfs.root,
				&gaudi->nic_phy_auto_neg_lpbk);
}

#else

void gaudi_nic_debugfs_init(struct hl_device *hdev)
{
}

#endif /* CONFIG_DEBUG_FS */
