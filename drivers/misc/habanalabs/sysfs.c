// SPDX-License-Identifier: GPL-2.0

/*
 * Copyright 2016-2018 HabanaLabs, Ltd.
 * All Rights Reserved.
 */

#include "habanalabs.h"
#include "include/habanalabs_device_if.h"

#include <linux/hwmon-sysfs.h>
#include <linux/hwmon.h>

#define SET_CLK_PKT_TIMEOUT	200000	/* 200ms */
#define SET_PWR_PKT_TIMEOUT	400000	/* 400ms */

long hl_get_frequency(struct hl_device *hdev, u32 pll_index, bool curr)
{
	struct armcp_packet pkt;
	long result;
	int rc;

	memset(&pkt, 0, sizeof(pkt));

	if (curr)
		pkt.opcode = ARMCP_PACKET_FREQUENCY_CURR_GET;
	else
		pkt.opcode = ARMCP_PACKET_FREQUENCY_GET;
	pkt.pll_index = pll_index;

	rc = hdev->asic_funcs->send_cpu_message(hdev, (u32 *) &pkt, sizeof(pkt),
						SET_CLK_PKT_TIMEOUT, &result);

	if (rc) {
		dev_err(hdev->dev,
			"Failed to get frequency of PLL %d, error %d\n",
			pll_index, rc);
		result = rc;
	}

	return result;
}

void hl_set_frequency(struct hl_device *hdev, u32 pll_index, u64 freq)
{
	struct armcp_packet pkt;
	int rc;

	memset(&pkt, 0, sizeof(pkt));

	pkt.opcode = ARMCP_PACKET_FREQUENCY_SET;
	pkt.pll_index = pll_index;
	pkt.value = freq;

	rc = hdev->asic_funcs->send_cpu_message(hdev, (u32 *) &pkt, sizeof(pkt),
					SET_CLK_PKT_TIMEOUT, NULL);

	if (rc)
		dev_err(hdev->dev,
			"Failed to set frequency to PLL %d, error %d\n",
			pll_index, rc);
}

u64 hl_get_max_power(struct hl_device *hdev)
{
	struct armcp_packet pkt;
	long result;
	int rc;

	memset(&pkt, 0, sizeof(pkt));

	pkt.opcode = ARMCP_PACKET_MAX_POWER_GET;

	rc = hdev->asic_funcs->send_cpu_message(hdev, (u32 *) &pkt, sizeof(pkt),
						SET_PWR_PKT_TIMEOUT, &result);

	if (rc) {
		dev_err(hdev->dev, "Failed to get max power, error %d\n", rc);
		result = rc;
	}

	return result;
}

void hl_set_max_power(struct hl_device *hdev, u64 value)
{
	struct armcp_packet pkt;
	int rc;

	memset(&pkt, 0, sizeof(pkt));

	pkt.opcode = ARMCP_PACKET_MAX_POWER_SET;
	pkt.value = value;

	rc = hdev->asic_funcs->send_cpu_message(hdev, (u32 *) &pkt, sizeof(pkt),
					SET_PWR_PKT_TIMEOUT, NULL);

	if (rc)
		dev_err(hdev->dev, "Failed to set max power, error %d\n", rc);
}

static ssize_t pm_mng_profile_show(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);

	if (hdev->disabled)
		return -ENODEV;

	return snprintf(buf, PAGE_SIZE, "%s\n",
			(hdev->pm_mng_profile == PM_AUTO) ? "auto" :
			(hdev->pm_mng_profile == PM_MANUAL) ? "manual" :
			"unknown");
}

static ssize_t pm_mng_profile_store(struct device *dev,
		struct device_attribute *attr, const char *buf, size_t count)
{
	struct hl_device *hdev = dev_get_drvdata(dev);

	if (hdev->disabled) {
		count = -ENODEV;
		goto out;
	}

	mutex_lock(&hdev->device_open);

	if (atomic_read(&hdev->fd_open_cnt) > 0) {
		dev_err(hdev->dev,
			"Can't change PM profile while user process is opened on the device\n");
		count = -EPERM;
		goto unlock_mutex;
	}

	if (strncmp("auto", buf, strlen("auto")) == 0) {
		/* Make sure we are in LOW PLL when changing modes */
		if (hdev->pm_mng_profile == PM_MANUAL) {
			atomic_set(&hdev->curr_pll_profile, PLL_HIGH);
			hl_device_set_frequency(hdev, PLL_LOW);
			hdev->pm_mng_profile = PM_AUTO;
		}
	} else if (strncmp("manual", buf, strlen("manual")) == 0) {
		/* Make sure we are in LOW PLL when changing modes */
		if (hdev->pm_mng_profile == PM_AUTO) {
			flush_delayed_work(&hdev->work_freq);
			hdev->pm_mng_profile = PM_MANUAL;
		}
	} else {
		dev_err(hdev->dev, "value should be auto or manual\n");
		count = -EINVAL;
		goto unlock_mutex;
	}

unlock_mutex:
	mutex_unlock(&hdev->device_open);
out:
	return count;
}

static ssize_t high_pll_show(struct device *dev, struct device_attribute *attr,
				char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);

	if (hdev->disabled)
		return -ENODEV;

	return snprintf(buf, PAGE_SIZE, "%u\n", hdev->high_pll);
}

static ssize_t high_pll_store(struct device *dev, struct device_attribute *attr,
				const char *buf, size_t count)
{
	struct hl_device *hdev = dev_get_drvdata(dev);
	long value;
	int rc;

	if (hdev->disabled) {
		count = -ENODEV;
		goto out;
	}

	rc = kstrtoul(buf, 0, &value);

	if (rc) {
		count = -EINVAL;
		goto out;
	}

	hdev->high_pll = value;

out:
	return count;
}

static ssize_t uboot_ver_show(struct device *dev, struct device_attribute *attr,
				char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);

	return snprintf(buf, PAGE_SIZE, "%s\n", hdev->asic_prop.uboot_ver);
}

static ssize_t armcp_kernel_ver_show(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);

	return snprintf(buf, PAGE_SIZE, "%s",
			hdev->asic_prop.armcp_info.kernel_version);
}

static ssize_t armcp_ver_show(struct device *dev, struct device_attribute *attr,
				char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);

	return snprintf(buf, PAGE_SIZE, "%s\n",
			hdev->asic_prop.armcp_info.armcp_version);
}

static ssize_t cpld_ver_show(struct device *dev, struct device_attribute *attr,
				char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);

	return snprintf(buf, PAGE_SIZE, "0x%08x\n",
			hdev->asic_prop.armcp_info.cpld_version);
}

static ssize_t infineon_ver_show(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);

	return snprintf(buf, PAGE_SIZE, "0x%04x\n",
			hdev->asic_prop.armcp_info.infineon_version);
}

static ssize_t fuse_ver_show(struct device *dev, struct device_attribute *attr,
				char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);

	return snprintf(buf, PAGE_SIZE, "%s\n",
			hdev->asic_prop.armcp_info.fuse_version);
}

static ssize_t thermal_ver_show(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);

	return snprintf(buf, PAGE_SIZE, "%s",
			hdev->asic_prop.armcp_info.thermal_version);
}

static ssize_t preboot_btl_ver_show(struct device *dev,
				struct device_attribute *attr, char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);

	return snprintf(buf, PAGE_SIZE, "%s\n", hdev->asic_prop.preboot_ver);
}

static ssize_t device_type_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);
	char *str;

	switch (hdev->asic_type) {
	case ASIC_GOYA:
		str = "GOYA";
		break;
	default:
		dev_err(hdev->dev, "Unrecognized ASIC type %d\n",
				hdev->asic_type);
		return -EINVAL;
	}

	return snprintf(buf, PAGE_SIZE, "%s\n", str);
}

static ssize_t pci_addr_show(struct device *dev, struct device_attribute *attr,
				char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);

	/* Use dummy, fixed address for simulator */
	if (!hdev->pdev)
		return snprintf(buf, PAGE_SIZE, "0000:%02d:00.0\n", hdev->id);

	return snprintf(buf, PAGE_SIZE, "%04x:%02x:%02x.%x\n",
			pci_domain_nr(hdev->pdev->bus),
			hdev->pdev->bus->number,
			PCI_SLOT(hdev->pdev->devfn),
			PCI_FUNC(hdev->pdev->devfn));
}

static ssize_t status_show(struct device *dev, struct device_attribute *attr,
				char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);
	char *str;

	if (hdev->disabled)
		str = "Malfunction";
	else
		str = "Operational";

	return snprintf(buf, PAGE_SIZE, "%s\n", str);
}

static ssize_t write_open_cnt_show(struct device *dev,
		struct device_attribute *attr, char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);

	return snprintf(buf, PAGE_SIZE, "%d\n", hdev->user_ctx ? 1 : 0);
}

static ssize_t max_power_show(struct device *dev, struct device_attribute *attr,
				char *buf)
{
	struct hl_device *hdev = dev_get_drvdata(dev);
	long val;

	if (hdev->disabled)
		return -ENODEV;

	val = hl_get_max_power(hdev);

	return snprintf(buf, PAGE_SIZE, "%lu\n", val);
}

static ssize_t max_power_store(struct device *dev,
		struct device_attribute *attr, const char *buf, size_t count)
{
	struct hl_device *hdev = dev_get_drvdata(dev);
	unsigned long value;
	int rc;

	if (hdev->disabled) {
		count = -ENODEV;
		goto out;
	}

	rc = kstrtoul(buf, 0, &value);

	if (rc) {
		count = -EINVAL;
		goto out;
	}

	hdev->max_power = value;
	hl_set_max_power(hdev, value);

out:
	return count;
}

static ssize_t eeprom_read_handler(struct file *filp, struct kobject *kobj,
			struct bin_attribute *attr, char *buf, loff_t offset,
			size_t max_size)
{
	struct device *dev = container_of(kobj, struct device, kobj);
	struct hl_device *hdev = dev_get_drvdata(dev);
	char *data;
	int rc;

	if (!max_size)
		return -EINVAL;

	data = kzalloc(max_size, GFP_KERNEL);
	if (!data)
		return -ENOMEM;

	rc = hdev->asic_funcs->get_eeprom_data(hdev, data, max_size);
	if (rc)
		goto out;

	memcpy(buf, data, max_size);

out:
	kfree(data);

	return max_size;
}

static DEVICE_ATTR_RW(pm_mng_profile);
static DEVICE_ATTR_RW(high_pll);
static DEVICE_ATTR_RO(uboot_ver);
static DEVICE_ATTR_RO(armcp_kernel_ver);
static DEVICE_ATTR_RO(armcp_ver);
static DEVICE_ATTR_RO(cpld_ver);
static DEVICE_ATTR_RO(infineon_ver);
static DEVICE_ATTR_RO(fuse_ver);
static DEVICE_ATTR_RO(thermal_ver);
static DEVICE_ATTR_RO(preboot_btl_ver);
static DEVICE_ATTR_RO(device_type);
static DEVICE_ATTR_RO(pci_addr);
static DEVICE_ATTR_RO(status);
static DEVICE_ATTR_RO(write_open_cnt);
static DEVICE_ATTR_RW(max_power);

static const struct bin_attribute bin_attr_eeprom = {
	.attr = {.name = "eeprom", .mode = (0444)},
	.size = PAGE_SIZE,
	.read = eeprom_read_handler
};

int hl_sysfs_init(struct hl_device *hdev)
{
	int rc;

	rc = hdev->asic_funcs->add_device_attr(hdev);
	if (rc) {
		dev_err(hdev->dev, "failed to add device attributes\n");
		return rc;
	}

	rc = device_create_file(hdev->dev, &dev_attr_pm_mng_profile);
	if (rc) {
		dev_err(hdev->dev,
			"failed to create device file pm_mng_profile\n");
		goto remove_device_attr;
	}

	hdev->pm_mng_profile = PM_AUTO;

	rc = device_create_file(hdev->dev, &dev_attr_high_pll);
	if (rc) {
		dev_err(hdev->dev,
			"failed to create device file pll_profile\n");
		goto remove_pm_mng_profile;
	}

	rc = device_create_file(hdev->dev, &dev_attr_uboot_ver);
	if (rc) {
		dev_err(hdev->dev, "failed to create device file uboot_ver\n");
		goto remove_pll_profile;
	}

	rc = device_create_file(hdev->dev, &dev_attr_armcp_kernel_ver);
	if (rc) {
		dev_err(hdev->dev,
			"failed to create device file armcp_kernel_ver\n");
		goto remove_uboot_ver;
	}

	rc = device_create_file(hdev->dev, &dev_attr_armcp_ver);
	if (rc) {
		dev_err(hdev->dev, "failed to create device file armcp_ver\n");
		goto remove_armcp_kernel_ver;
	}

	rc = device_create_file(hdev->dev, &dev_attr_cpld_ver);
	if (rc) {
		dev_err(hdev->dev, "failed to create device file cpld_ver\n");
		goto remove_armcp_ver;
	}

	rc = device_create_file(hdev->dev, &dev_attr_infineon_ver);
	if (rc) {
		dev_err(hdev->dev,
			"failed to create device file infineon_ver\n");
		goto remove_cpld_ver;
	}

	rc = device_create_file(hdev->dev, &dev_attr_fuse_ver);
	if (rc) {
		dev_err(hdev->dev, "failed to create device file fuse_ver\n");
		goto remove_infineon_ver;
	}

	rc = device_create_file(hdev->dev, &dev_attr_thermal_ver);
	if (rc) {
		dev_err(hdev->dev, "failed to create device file thermal_ver\n");
		goto remove_fuse_ver;
	}

	rc = device_create_file(hdev->dev, &dev_attr_preboot_btl_ver);
	if (rc) {
		dev_err(hdev->dev,
			"failed to create device file preboot_btl_ver\n");
		goto remove_thermal_ver;
	}

	rc = device_create_file(hdev->dev, &dev_attr_device_type);
	if (rc) {
		dev_err(hdev->dev,
			"failed to create device file device_type\n");
		goto remove_preboot_ver;
	}

	rc = device_create_file(hdev->dev, &dev_attr_pci_addr);
	if (rc) {
		dev_err(hdev->dev, "failed to create device file pci_addr\n");
		goto remove_device_type;
	}

	rc = device_create_file(hdev->dev, &dev_attr_status);
	if (rc) {
		dev_err(hdev->dev, "failed to create device file status\n");
		goto remove_pci_addr;
	}

	rc = device_create_file(hdev->dev, &dev_attr_write_open_cnt);
	if (rc) {
		dev_err(hdev->dev,
			"failed to create device file write_open_count\n");
		goto remove_status;
	}

	hdev->max_power = hdev->asic_prop.max_power_default;

	rc = device_create_file(hdev->dev, &dev_attr_max_power);
	if (rc) {
		dev_err(hdev->dev,
			"failed to create device file max_power\n");
		goto remove_write_open_cnt;
	}

	rc = sysfs_create_bin_file(&hdev->dev->kobj, &bin_attr_eeprom);
	if (rc) {
		dev_err(hdev->dev, "failed to create EEPROM sysfs entry\n");
		goto remove_attr_max_power;
	}

	return 0;

remove_attr_max_power:
	device_remove_file(hdev->dev, &dev_attr_max_power);
remove_write_open_cnt:
	device_remove_file(hdev->dev, &dev_attr_write_open_cnt);
remove_status:
	device_remove_file(hdev->dev, &dev_attr_status);
remove_pci_addr:
	device_remove_file(hdev->dev, &dev_attr_pci_addr);
remove_device_type:
	device_remove_file(hdev->dev, &dev_attr_device_type);
remove_preboot_ver:
	device_remove_file(hdev->dev, &dev_attr_preboot_btl_ver);
remove_thermal_ver:
	device_remove_file(hdev->dev, &dev_attr_thermal_ver);
remove_fuse_ver:
	device_remove_file(hdev->dev, &dev_attr_fuse_ver);
remove_infineon_ver:
	device_remove_file(hdev->dev, &dev_attr_infineon_ver);
remove_cpld_ver:
	device_remove_file(hdev->dev, &dev_attr_cpld_ver);
remove_armcp_ver:
	device_remove_file(hdev->dev, &dev_attr_armcp_ver);
remove_armcp_kernel_ver:
	device_remove_file(hdev->dev, &dev_attr_armcp_kernel_ver);
remove_uboot_ver:
	device_remove_file(hdev->dev, &dev_attr_uboot_ver);
remove_pll_profile:
	device_remove_file(hdev->dev, &dev_attr_high_pll);
remove_pm_mng_profile:
	device_remove_file(hdev->dev, &dev_attr_pm_mng_profile);
remove_device_attr:
	hdev->asic_funcs->remove_device_attr(hdev);

	return rc;
}

void hl_sysfs_fini(struct hl_device *hdev)
{
	sysfs_remove_bin_file(&hdev->dev->kobj, &bin_attr_eeprom);
	device_remove_file(hdev->dev, &dev_attr_max_power);
	device_remove_file(hdev->dev, &dev_attr_write_open_cnt);
	device_remove_file(hdev->dev, &dev_attr_status);
	device_remove_file(hdev->dev, &dev_attr_pci_addr);
	device_remove_file(hdev->dev, &dev_attr_device_type);
	device_remove_file(hdev->dev, &dev_attr_preboot_btl_ver);
	device_remove_file(hdev->dev, &dev_attr_thermal_ver);
	device_remove_file(hdev->dev, &dev_attr_fuse_ver);
	device_remove_file(hdev->dev, &dev_attr_infineon_ver);
	device_remove_file(hdev->dev, &dev_attr_cpld_ver);
	device_remove_file(hdev->dev, &dev_attr_armcp_ver);
	device_remove_file(hdev->dev, &dev_attr_armcp_kernel_ver);
	device_remove_file(hdev->dev, &dev_attr_uboot_ver);
	device_remove_file(hdev->dev, &dev_attr_high_pll);
	device_remove_file(hdev->dev, &dev_attr_pm_mng_profile);
	hdev->asic_funcs->remove_device_attr(hdev);
}
