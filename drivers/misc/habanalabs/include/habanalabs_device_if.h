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
