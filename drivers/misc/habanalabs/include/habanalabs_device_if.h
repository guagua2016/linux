/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2018 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

#ifndef HABANALABS_DEVICE_IF_H
#define HABANALABS_DEVICE_IF_H

#include <linux/types.h>

/*
 * PRIMARY QUEUE
 */

struct hl_bd {
	__u64	ptr;
	__u32	len;
	union {
		struct {
			__u32	repeat:16;
			__u32	res1:8;
			__u32	repeat_valid:1;
			__u32	res2:7;
		};
		__u32	ctl;
	};
};

#define HL_BD_SIZE			sizeof(struct hl_bd)

/*
 * BD_CTL_REPEAT_VALID tells the CP whether the repeat field in the BD CTL is
 * valid. 1 means the repeat field is valid, 0 means not-valid,
 * i.e. repeat == 1
 */
#define BD_CTL_REPEAT_VALID_SHIFT	24
#define BD_CTL_REPEAT_VALID_MASK	0x01000000

#define BD_CTL_SHADOW_INDEX_SHIFT	0
#define BD_CTL_SHADOW_INDEX_MASK	0x00000FFF

/*
 * COMPLETION QUEUE
 */

struct hl_cq_entry {
	__u32	data;
};

#define HL_CQ_ENTRY_SIZE		sizeof(struct hl_cq_entry)

#define CQ_ENTRY_READY_SHIFT			31
#define CQ_ENTRY_READY_MASK			0x80000000

#define CQ_ENTRY_SHADOW_INDEX_VALID_SHIFT	30
#define CQ_ENTRY_SHADOW_INDEX_VALID_MASK	0x40000000

#define CQ_ENTRY_SHADOW_INDEX_SHIFT		BD_CTL_SHADOW_INDEX_SHIFT
#define CQ_ENTRY_SHADOW_INDEX_MASK		BD_CTL_SHADOW_INDEX_MASK

/*
 * EVENT QUEUE
 */

struct hl_eq_header {
	__u32 reserved;
	union {
		struct {
			__u32 ctx_id :10;
			__u32:6;
			__u32 opcode :10;
			__u32:5;
			__u32 ready :1;
		};
		__u32 ctl;
	};
};

struct hl_eq_entry {
	struct hl_eq_header hdr;
	__u64 data[7];
};

#define HL_EQ_ENTRY_SIZE		sizeof(struct hl_eq_entry)

#define EQ_CTL_READY_SHIFT		31
#define EQ_CTL_READY_MASK		0x80000000

#define EQ_CTL_EVENT_TYPE_SHIFT		16
#define EQ_CTL_EVENT_TYPE_MASK		0x03FF0000

enum pq_init_status {
	PQ_INIT_STATUS_NA = 0,
	PQ_INIT_STATUS_READY_FOR_CP,
	PQ_INIT_STATUS_READY_FOR_HOST
};

/*
 * ArmCP Primary Queue Packets
 *
 * During normal operation, KMD needs to send various messages to ArmCP,
 * usually either to SET some value into a H/W periphery or to GET the current
 * value of some H/W periphery. For example, SET the frequency of MME/TPC and
 * GET the value of the thermal sensor.
 *
 * These messages can be initiated either by the User application or by KMD
 * itself, e.g. power management code. In either case, the communication from
 * KMD to ArmCP will *always* be in synchronous mode, meaning that KMD will
 * send a single message and poll until the message was acknowledged and the
 * results are ready (if results are needed).
 *
 * This means that only a single message can be sent at a time and KMD must
 * wait for its result before sending the next message. Having said that,
 * because these are control messages which are sent in a relatively low
 * frequency, this limitation seems acceptable. It's important to note that
 * in case of multiple devices, messages to different devices *can* be sent
 * at the same time.
 *
 * The message, inputs/outputs (if relevant) and fence object will be located
 * on the device DDR at an address that will be determined by KMD. During
 * device initialization phase, KMD will pass to ArmCP that address.  Most of
 * the message types will contain inputs/outputs inside the message itself.
 * The common part of each message will contain the opcode of the message (its
 * type) and a field representing a fence object.
 *
 * When KMD wishes to send a message to ArmCP, it will write the message
 * contents to the device DDR, clear the fence object and then write the
 * value 484 to the mmGIC_DISTRIBUTOR__5_GICD_SETSPI_NSR register to issue
 * the 484 interrupt-id to the ARM core.
 *
 * Upon receiving the 484 interrupt-id, ArmCP will read the message from the
 * DDR. In case the message is a SET operation, ArmCP will first perform the
 * operation and then write to the fence object on the device DDR. In case the
 * message is a GET operation, ArmCP will first fill the results section on the
 * device DDR and then write to the fence object. If an error occurred, ArmCP
 * will fill the rc field with the right error code.
 *
 * In the meantime, KMD will poll on the fence object. Once KMD sees that the
 * fence object is signaled, it will read the results from the device DDR
 * (if relevant) and resume the code execution in KMD.
 *
 * To use QMAN packets, the opcode must be the QMAN opcode, shifted by 8
 * so the value being put by the KMD matches the value read by ArmCP
 *
 * Non-QMAN packets should be limited to values 1 through (2^8 - 1)
 *
 * Detailed description:
 *
 * ARMCP_PACKET_DISABLE_PCI_ACCESS -
 *       After receiving this packet the embedded CPU must NOT issue PCI
 *       transactions (read/write) towards the Host CPU. This also include
 *       sending MSI-X interrupts.
 *       This packet is usually sent before the device is moved to D3Hot state.
 *
 * ARMCP_PACKET_ENABLE_PCI_ACCESS -
 *       After receiving this packet the embedded CPU is allowed to issue PCI
 *       transactions towards the Host CPU, including sending MSI-X interrupts.
 *       This packet is usually send after the device is moved to D0 state.
 *
 * ARMCP_PACKET_TEMPERATURE_GET -
 *       Fetch the current temperature / Max / Max Hyst / Critical /
 *       Critical Hyst of a specified thermal sensor. The packet's
 *       arguments specify the desired sensor and the field to get.
 *
 * ARMCP_PACKET_VOLTAGE_GET -
 *       Fetch the voltage / Max / Min of a specified sensor. The packet's
 *       arguments specify the sensor and type.
 *
 * ARMCP_PACKET_CURRENT_GET -
 *       Fetch the current / Max / Min of a specified sensor. The packet's
 *       arguments specify the sensor and type.
 *
 * ARMCP_PACKET_FAN_SPEED_GET -
 *       Fetch the speed / Max / Min of a specified fan. The packet's
 *       arguments specify the sensor and type.
 *
 * ARMCP_PACKET_PWM_GET -
 *       Fetch the pwm value / mode of a specified pwm. The packet's
 *       arguments specify the sensor and type.
 *
 * ARMCP_PACKET_PWM_SET -
 *       Set the pwm value / mode of a specified pwm. The packet's
 *       arguments specify the sensor, type and value.
 *
 * ARMCP_PACKET_FREQUENCY_SET -
 *       Set the frequency of a specified PLL. The packet's arguments specify
 *       the PLL and the desired frequency. The actual frequency in the device
 *       might differ from the requested frequency.
 *
 * ARMCP_PACKET_FREQUENCY_GET -
 *       Fetch the frequency of a specified PLL. The packet's arguments specify
 *       the PLL.
 *
 * ARMCP_PACKET_LED_SET -
 *       Set the state of a specified led. The packet's arguments
 *       specify the led and the desired state.
 *
 * ARMCP_PACKET_I2C_WR -
 *       Write 32-bit value to I2C device. The packet's arguments specify the
 *       I2C bus, address and value.
 *
 * ARMCP_PACKET_I2C_RD -
 *       Read 32-bit value from I2C device. The packet's arguments specify the
 *       I2C bus and address.
 *
 * ARMCP_PACKET_INFO_GET -
 *       Fetch information from the device as specified in the packet's
 *       structure. KMD passes the max size it allows the ArmCP to write to
 *       the structure, to prevent data corruption in case of mismatched
 *       KMD/FW versions.
 *
 * ARMCP_PACKET_FLASH_PROGRAM_REMOVED - this packet was removed
 *
 * ARMCP_PACKET_UNMASK_RAZWI_IRQ -
 *       Unmask the given IRQ. The IRQ number is specified in the value field.
 *       The packet is sent after receiving an interrupt and printing its
 *       relevant information.
 *
 * ARMCP_PACKET_UNMASK_RAZWI_IRQ_ARRAY -
 *       Unmask the given IRQs. The IRQs numbers are specified in an array right
 *       after the armcp_packet structure, where its first element is the array
 *       length. The packet is sent after a soft reset was done in order to
 *       handle any interrupts that were sent during the reset process.
 *
 * ARMCP_PACKET_TEST -
 *       Test packet for ArmCP connectivity. The CPU will put the fence value
 *       in the result field.
 *
 * ARMCP_PACKET_FREQUENCY_CURR_GET -
 *       Fetch the current frequency of a specified PLL. The packet's arguments
 *       specify the PLL.
 *
 * ARMCP_PACKET_MAX_POWER_GET -
 *       Fetch the maximal power of the device.
 *
 * ARMCP_PACKET_MAX_POWER_SET -
 *       Set the maximal power of the device. The packet's arguments specify
 *       the power.
 *
 * ARMCP_PACKET_EEPROM_DATA_GET -
 *       Get EEPROM data from the ArmCP kernel. The buffer is specified in the
 *       addr field. The CPU will put the returned data size in the result
 *       field. In addition, KMD passes the max size it allows the ArmCP to
 *       write to the structure, to prevent data corruption in case of
 *       mismatched KMD/FW versions.
 *
 */

enum armcp_packet_id {
	ARMCP_PACKET_DISABLE_PCI_ACCESS = 1,	/* internal */
	ARMCP_PACKET_ENABLE_PCI_ACCESS,		/* internal */
	ARMCP_PACKET_TEMPERATURE_GET,		/* sysfs */
	ARMCP_PACKET_VOLTAGE_GET,		/* sysfs */
	ARMCP_PACKET_CURRENT_GET,		/* sysfs */
	ARMCP_PACKET_FAN_SPEED_GET,		/* sysfs */
	ARMCP_PACKET_PWM_GET,			/* sysfs */
	ARMCP_PACKET_PWM_SET,			/* sysfs */
	ARMCP_PACKET_FREQUENCY_SET,		/* sysfs */
	ARMCP_PACKET_FREQUENCY_GET,		/* sysfs */
	ARMCP_PACKET_LED_SET,			/* debugfs */
	ARMCP_PACKET_I2C_WR,			/* debugfs */
	ARMCP_PACKET_I2C_RD,			/* debugfs */
	ARMCP_PACKET_INFO_GET,			/* IOCTL */
	ARMCP_PACKET_FLASH_PROGRAM_REMOVED,
	ARMCP_PACKET_UNMASK_RAZWI_IRQ,		/* internal */
	ARMCP_PACKET_UNMASK_RAZWI_IRQ_ARRAY,	/* internal */
	ARMCP_PACKET_TEST,			/* internal */
	ARMCP_PACKET_FREQUENCY_CURR_GET,	/* sysfs */
	ARMCP_PACKET_MAX_POWER_GET,		/* sysfs */
	ARMCP_PACKET_MAX_POWER_SET,		/* sysfs */
	ARMCP_PACKET_EEPROM_DATA_GET,		/* sysfs */
};

#define ARMCP_PACKET_FENCE_VAL	0xFE8CE7A5

struct armcp_packet {
	union {
		__u64 value;	/* For SET packets */
		__u64 result;	/* For GET packets */
		__u64 addr;	/* For PQ */
	};

	union {
		struct {
			__u32:12;
			__u32 rc :4;
			__u32 opcode :13;
			__u32 eng_barrier :1;
			__u32 reg_barrier :1;
			__u32 msg_barrier :1;
		};
		__u32 ctl;
	};

	__u32 fence;		/* Signal to KMD that message is completed */

	union {
		struct {/* For temperature/current/voltage/fan/pwm get/set */
			__u16 sensor_index;
			__u16 type;
		};

		struct {	/* For I2C read/write */
			__u8 i2c_bus;
			__u8 i2c_addr;
			__u8 i2c_reg;
			__u8 pad; /* unused */
		};

		/* For frequency get/set */
		__u32 pll_index;

		/* For led set */
		__u32 led_index;

		/* For get Armcp info/EEPROM data */
		__u32 data_max_size;
	};
};

struct armcp_unmask_irq_arr_packet {
	struct armcp_packet armcp_pkt;
	__u32 length;
	__u32 irqs[0];
};

enum armcp_packet_rc {
	armcp_packet_success,
	armcp_packet_invalid,
	armcp_packet_fault
};

enum armcp_temp_type {
	armcp_temp_input,
	armcp_temp_max = 6,
	armcp_temp_max_hyst,
	armcp_temp_crit,
	armcp_temp_crit_hyst
};

enum armcp_in_attributes {
	armcp_in_input,
	armcp_in_min,
	armcp_in_max
};

enum armcp_curr_attributes {
	armcp_curr_input,
	armcp_curr_min,
	armcp_curr_max
};

enum armcp_fan_attributes {
	armcp_fan_input,
	armcp_fan_min = 2,
	armcp_fan_max
};

enum armcp_pwm_attributes {
	armcp_pwm_input,
	armcp_pwm_enable
};

/* Event Queue Packets */

struct eq_generic_event {
	__u64 data[7];
};

/*
 * ArmCP info
 */

#define VERSION_MAX_LEN			128
#define ARMCP_MAX_SENSORS		128

struct armcp_sensor {
	__u32 type;
	__u32 flags;
};

/* must be aligned to 4 bytes */
struct armcp_info {
	struct armcp_sensor sensors[ARMCP_MAX_SENSORS];
	__u8 kernel_version[VERSION_MAX_LEN];
	__u32 reserved[3];
	__u32 cpld_version;
	__u32 infineon_version;
	__u8 fuse_version[VERSION_MAX_LEN];
	__u8 thermal_version[VERSION_MAX_LEN];
	__u8 armcp_version[VERSION_MAX_LEN];
	__u64 dram_size;
};

#endif /* HABANALABS_DEVICE_IF_H */
