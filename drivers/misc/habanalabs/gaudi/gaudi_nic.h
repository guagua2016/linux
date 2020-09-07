/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2018-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

#ifndef GAUDI_NIC_DRV_H_
#define GAUDI_NIC_DRV_H_

#include "gaudiP.h"
#include "../include/gaudi/gaudi_fw_if.h"

/* Time in jiffies before concluding the transmitter is hung */
#define NIC_TX_TIMEOUT			(5 * HZ)

#define NIC_RX_SIZE			1024
#define NIC_NAPI_MAX_RX_BUDGET		64
#define NIC_MAX_PKT_SIZE		2048
#define NIC_ARP_PKT_SIZE		28

#if (NIC_MAX_PKT_SIZE & (NIC_MAX_PKT_SIZE - 1))
#error "Max ETH packet size is not a power of 2"
#endif

#define ETH_P_LLDP		0x88CC

#define NIC_MACRO_CFG_SIZE	(mmNIC1_QM0_GLBL_CFG0 - mmNIC0_QM0_GLBL_CFG0)
#define NIC_CFG_SIZE		(mmNIC0_QPC1_REQ_STATIC_CONFIG - \
					mmNIC0_QPC0_REQ_STATIC_CONFIG)

#define NIC_MAX_QP_NUM		(HL_NIC_MAX_CONN_ID + 1)
#define NIC_HW_MAX_QP_NUM	0x8000 /* 32K */

#if (NIC_MAX_QP_NUM > NIC_HW_MAX_QP_NUM)
#error "Number of available QPs must be smaller or equal to NIC_HW_MAX_QP_NUM"
#endif

/* The '*_SIZE' defines are per NIC port */
#define REQ_QPC_BASE_SIZE	(NIC_MAX_QP_NUM * sizeof(struct qpc_requester))
#define RES_QPC_BASE_SIZE	(NIC_MAX_QP_NUM * sizeof(struct qpc_responder))
#define SWQ_BASE_SIZE		(WQ_BUFFER_SIZE * sizeof(struct sq_wqe))
#define SB_BASE_SIZE		(WQ_BUFFER_SIZE * NIC_MAX_PKT_SIZE)

#define TMR_BASE_SIZE		(TMR_FSM_ENGINE_OFFS + TMR_FSM_SIZE)

#define TMR_FSM_ENGINE_OFFS	(1 << 22) /* H/W constraint */

#define TMR_FSM_SIZE		ALIGN(NIC_HW_MAX_QP_NUM, DEVICE_CACHE_LINE_SIZE)
#define TMR_FREE_SIZE		ALIGN(TMR_FREE_NUM_ENTRIES * 4, \
					DEVICE_CACHE_LINE_SIZE)
/* each timer serves two NICs, hence multiply by 2 */
#define TMR_FIFO_SIZE		ALIGN((NIC_MAX_QP_NUM * 2 * 4), \
					DEVICE_CACHE_LINE_SIZE)
#define TMR_FIFO_STATIC_SIZE	(DEVICE_CACHE_LINE_SIZE * TMR_GRANULARITY)

#define TMR_FSM0_OFFS		0
#define TMR_FREE_OFFS		(TMR_FSM0_OFFS + TMR_FSM_SIZE)
#define TMR_FIFO_OFFS		(TMR_FREE_OFFS + TMR_FREE_SIZE)
#define TMR_FSM1_OFFS		(TMR_FSM0_OFFS + TMR_FSM_ENGINE_OFFS)

#define TMR_FREE_NUM_ENTRIES	(TMR_FIFO_SIZE / DEVICE_CACHE_LINE_SIZE)
#define TMR_GRANULARITY		128

#define TXS_BASE_SIZE		(TXS_FREE_SIZE + TXS_FIFO_SIZE + \
					TXS_FIFO_STATIC_SIZE)


#define TXS_FREE_SIZE		ALIGN(TXS_FREE_NUM_ENTRIES * 4, \
					DEVICE_CACHE_LINE_SIZE)
/* TXS serves requester and responder QPs, hence multiply by 2 */
#define TXS_FIFO_SIZE		ALIGN((NIC_MAX_QP_NUM * 2 * 4), \
					DEVICE_CACHE_LINE_SIZE)
#define TXS_FIFO_STATIC_SIZE	(DEVICE_CACHE_LINE_SIZE * TXS_GRANULARITY)

#define TXS_FREE_OFFS		0
#define TXS_FIFO_OFFS		(TXS_FREE_OFFS + TXS_FREE_SIZE)

#define TXS_FREE_NUM_ENTRIES	(TXS_FIFO_SIZE / DEVICE_CACHE_LINE_SIZE)
#define TXS_GRANULARITY		256
#define TXS_SCHEDQ		256

#define SECTION_ALIGN_SIZE	0x100000ull
#define NIC_DRV_BASE_ADDR	ALIGN(NIC_DRV_ADDR, SECTION_ALIGN_SIZE)

#define REQ_QPC_BASE_ADDR	NIC_DRV_BASE_ADDR

#define RES_QPC_BASE_ADDR	ALIGN(REQ_QPC_BASE_ADDR + \
					NIC_NUMBER_OF_ENGINES * \
					REQ_QPC_BASE_SIZE, SECTION_ALIGN_SIZE)

#define TMR_BASE_ADDR		ALIGN(RES_QPC_BASE_ADDR + \
					NIC_NUMBER_OF_ENGINES * \
					RES_QPC_BASE_SIZE, SECTION_ALIGN_SIZE)

#define TXS_BASE_ADDR		ALIGN(TMR_BASE_ADDR + \
					NIC_NUMBER_OF_MACROS * \
					TMR_BASE_SIZE, SECTION_ALIGN_SIZE)

#define SWQ_BASE_ADDR		ALIGN(TXS_BASE_ADDR + \
					NIC_NUMBER_OF_ENGINES * \
					TXS_BASE_SIZE, SECTION_ALIGN_SIZE)

#define SB_BASE_ADDR		ALIGN(SWQ_BASE_ADDR + \
					NIC_MAX_NUMBER_OF_PORTS * \
					SWQ_BASE_SIZE, SECTION_ALIGN_SIZE)

#define NIC_DRV_END_ADDR	ALIGN(SB_BASE_ADDR + NIC_MAX_NUMBER_OF_PORTS * \
					SB_BASE_SIZE, SECTION_ALIGN_SIZE)

#define WQ_BUFFER_LOG_SIZE		8
#define WQ_BUFFER_SIZE			(1 << WQ_BUFFER_LOG_SIZE)
#define CQ_PORT_BUF_LEN			(1 << 18)
#define CQE_SIZE			sizeof(struct cqe)
#define CQ_PORT_BUF_SIZE		(CQ_PORT_BUF_LEN * CQE_SIZE)
#define CQ_USER_MAX_SIZE		(1 << 30) /* 1GB */
#define CQ_USER_MIN_ENTRIES		128
#define CQ_USER_MAX_ENTRIES		(CQ_USER_MAX_SIZE / CQE_SIZE)
#define QP_ERR_BUF_SIZE			(QP_ERR_SIZE * QP_ERR_BUF_LEN)
#define QP_ERR_SIZE			sizeof(struct qp_err)
#define QP_ERR_BUF_LEN			1024
#define RX_PKT_MAX_SIZE			2048
#define QPC_RES_LOG_BUF_SIZE_MASK	10
#define RAW_QPN				0
#define RX_MSI_IDX			(GAUDI_EVENT_QUEUE_MSI_IDX + 1)
#define RX_MSI_ADDRESS			(mmPCIE_MSI_INTR_0 + RX_MSI_IDX * 4)
#define CQ_MSI_IDX			(NUMBER_OF_CMPLT_QUEUES + \
						NUMBER_OF_CPU_HW_QUEUES + \
						NIC_NUMBER_OF_ENGINES)
#define CQ_MSI_ADDRESS			(mmPCIE_MSI_INTR_0 + CQ_MSI_IDX * 4)

#define WQE_MAX_SIZE			max(NIC_SEND_WQE_SIZE, \
						NIC_RECV_WQE_SIZE)
#define USER_WQES_MAX_NUM		(1 << 21) /* 2MB */
#define USER_WQ_ARR_MAX_SIZE		ALIGN((1ull * NIC_HW_MAX_QP_NUM * \
					USER_WQES_MAX_NUM * \
						WQE_MAX_SIZE), PAGE_SIZE_2MB)

#define CQ_VIRTUAL_ADDRESS		VA_NIC_MEM_ADDR

#define USER_SWQ_VIRTUAL_ADDRESS	ALIGN(CQ_VIRTUAL_ADDRESS + \
					NIC_NUMBER_OF_ENGINES * \
						CQ_PORT_BUF_SIZE, \
							SECTION_ALIGN_SIZE)

#define USER_RWQ_VIRTUAL_ADDRESS	ALIGN(USER_SWQ_VIRTUAL_ADDRESS + \
					NIC_NUMBER_OF_ENGINES * \
						USER_WQ_ARR_MAX_SIZE, \
							SECTION_ALIGN_SIZE)

#define REQ_QPC_ADDR(port, conn_id) \
	(REQ_QPC_BASE_ADDR + (port) * REQ_QPC_BASE_SIZE + (conn_id) * \
			sizeof(struct qpc_requester))

#define RES_QPC_ADDR(port, conn_id) \
	(RES_QPC_BASE_ADDR + (port) * RES_QPC_BASE_SIZE + (conn_id) * \
			sizeof(struct qpc_responder))

#define NIC_DR_10		1031250
#define NIC_DR_25		2578125
#define NIC_DR_26		2656250
#define NIC_DR_50		5312500

#define NIC_LANES_2		2
#define NIC_LANES_4		4

/*
 * change WQ_BUFFER_LOG_SIZE to log2(SWQ_BASE_SIZE/WQE_BB_SIZE).
 * can use WQ_BUFFER_SIZE/WQE_BB_SIZE instead.
 */

enum ts_type {
	TS_RC = 0,
	TS_RAW = 1
};

enum wqe_opcode {
	WQE_NOP = 0,
	WQE_SEND = 1,
	WQE_LINEAR = 2,
	WQE_STRIDE = 3,
	WQE_MULTI_STRIDE = 4,
	WQE_RATE_UPDATE  = 5
};

enum trust_level {
	UNSECURED = 0,
	SECURED = 1,
	PRIVILEGE = 2
};

struct qpc_requester {
	u64	data[8];
};

#define QPC_SET(qpc, idx, shift, val, len) \
		((qpc).data[idx] |= (u64) ((val) & (BIT(len) - 1)) << (shift))

#define REQ_QPC_SET_DST_QP(req, val)		QPC_SET(req, 0, 0, val, 24)
#define REQ_QPC_SET_PORT(req, val)		QPC_SET(req, 0, 24, val, 4)
#define REQ_QPC_SET_PRIORITY(req, val)		QPC_SET(req, 0, 28, val, 2)
#define REQ_QPC_SET_RKEY(req, val)		QPC_SET(req, 0, 32, val, 32)
#define REQ_QPC_SET_DST_IP(req, val)		QPC_SET(req, 1, 0, val, 32)
#define REQ_QPC_SET_SRC_IP(req, val)		QPC_SET(req, 1, 32, val, 32)
#define REQ_QPC_SET_DST_MAC_31_0(req, val)	QPC_SET(req, 2, 0, val, 32)
#define REQ_QPC_SET_DST_MAC_47_32(req, val)	QPC_SET(req, 2, 32, val, 16)
#define REQ_QPC_SET_SQ_NUM(req, val)		QPC_SET(req, 3, 24, val, 8)
#define REQ_QPC_SET_TM_GRANULARITY(req, val)	QPC_SET(req, 3, 56, val, 7)
#define REQ_QPC_SET_SOB_EN(req, val)		QPC_SET(req, 3, 63, val, 1)
#define REQ_QPC_SET_TRANSPORT_SERVICE(req, val)	QPC_SET(req, 5, 49, val, 1)
#define REQ_QPC_SET_BURST_SIZE(req, val)	QPC_SET(req, 5, 50, val, 22)
#define REQ_QPC_SET_LAST_IDX(req, val)		QPC_SET(req, 6, 8, val, 22)
#define REQ_QPC_SET_SWQ_GRANULARITY(req, val)	QPC_SET(req, 7, 58, val, 1)
#define REQ_QPC_SET_WQ_BASE_ADDR(req, val)	QPC_SET(req, 7, 32, val, 24)
#define REQ_QPC_SET_SECURED(req, val)		QPC_SET(req, 7, 59, val, 2)
#define REQ_QPC_SET_VALID(req, val)		QPC_SET(req, 7, 63, val, 1)

struct qpc_responder {
	u64	data[4];
};

#define RES_QPC_SET_DST_QP(res, val)		QPC_SET(res, 0, 0, val, 24)
#define RES_QPC_SET_PORT(res, val)		QPC_SET(res, 0, 24, val, 4)
#define RES_QPC_SET_PRIORITY(res, val)		QPC_SET(res, 0, 28, val, 2)
#define RES_QPC_SET_SQ_NUM(res, val)		QPC_SET(res, 2, 48, val, 8)
#define RES_QPC_SET_LKEY(res, val)		QPC_SET(res, 0, 32, val, 32)
#define RES_QPC_SET_DST_IP(res, val)		QPC_SET(res, 1, 0, val, 32)
#define RES_QPC_SET_SRC_IP(res, val)		QPC_SET(res, 1, 32, val, 32)
#define RES_QPC_SET_DST_MAC_31_0(res, val)	QPC_SET(res, 2, 0, val, 32)
#define RES_QPC_SET_DST_MAC_47_32(res, val)	QPC_SET(res, 2, 32, val, 16)
#define RES_QPC_SET_TRANSPORT_SERVICE(res, val)	QPC_SET(res, 2, 63, val, 1)
#define RES_QPC_SET_LOG_BUF_SIZE_MASK(res, val)	QPC_SET(res, 3, 24, val, 5)
#define RES_QPC_SET_SOB_EN(res, val)		QPC_SET(res, 3, 59, val, 1)
#define RES_QPC_SET_VALID(res, val)		QPC_SET(res, 3, 63, val, 1)
#define RES_QPC_SET_SECURED(res, val)		QPC_SET(res, 3, 60, val, 2)

/**
 * struct hl_qp - Describes a NIC Queue Pair.
 * @qpc_lock: Mutex to protect accessing the QP context.
 * @refcount: Reference counter for the QP usage.
 * @gaudi_nic: Pointer to NIC device this QP belongs to.
 * @port: The port number this QP belongs to.
 * @conn_id: The QP number within its port.
 * @local_key: Key for local access.
 * @remote_key: Key for remote access.
 * @is_req: is requester context was set for the QP.
 * @is_res: is responder context was set for the QP.
 */
struct hl_qp {
	struct mutex qpc_lock;
	struct kref refcount;
	struct gaudi_nic_device *gaudi_nic;
	u32 port;
	u32 conn_id;
	u32 local_key;
	u32 remote_key;
	u8 is_req;
	u8 is_res;
};

struct sq_wqe {
	u64	data[4];
};

#define CFG_SQ_WQE_OPCODE(swq, val) \
						((swq).data[0] |= (val) << 28)
#define CFG_SQ_WQE_LOCAL_ADDRESS_31_0(swq, val) \
						((swq).data[0] |= (val) << 32)
#define CFG_SQ_WQE_LOCAL_ADDRESS_49_32(swq, val) \
						((swq).data[1] |= (val))
#define CFG_SQ_WQE_SIZE(swq, val) \
						((swq).data[1] |= (val) << 18)

struct cqe {
	u64	data;
};

#define CQE_IS_VALID(cqe)		(((cqe)->data >> 63) & 1)
#define CQE_TYPE(cqe)			(((cqe)->data >> 23) & 1)
#define CQE_RES_NIC(cqe)		(((cqe)->data >> 10) & 1)
#define CQE_RES_IMDT_21_0(cqe)		(((cqe)->data >> 32) & 0x3FFFFF)
#define CQE_RES_IMDT_31_22(cqe)		((cqe)->data & 0x3FF)
#define CQE_REQ_WQE_IDX(cqe)		(((cqe)->data >> 32) & 0x3FFFFF)
#define CQE_REQ_QPN(cqe)		((cqe)->data & 0x7FFFFF)
#define CQE_SET_INVALID(cqe)		((cqe)->data &= ~(1ull << 63))

struct qp_err {
	u32	data;
};

#define QP_ERR_QP_NUM(qp_err)		((qp_err).data & 0xFFFFFF)
#define QP_ERR_ERR_NUM(qp_err)		(((qp_err).data >> 24) & 0x7F)
#define QP_ERR_IS_REQ(qp_err)		(((qp_err).data >> 31) & 1)

/*
 * Some registers are specific for each NIC port, and some are shared for all
 * the NIC macro (a pair of even and odd port).
 * Therefore we need different methods to handle these registers.
 */

/* read/write port specific registers */
#define NIC_CFG_BASE(port) \
			((u64) (NIC_MACRO_CFG_SIZE * (u64) ((port) >> 1) + \
					NIC_CFG_SIZE * (u64) ((port) & 1)))

#define NIC_RREG32(reg)		RREG32(NIC_CFG_BASE(gaudi_nic->port) + (reg))
#define NIC_WREG32(reg, val)	WREG32(NIC_CFG_BASE(gaudi_nic->port) + (reg), \
					(val))
#define NIC_RMWREG32(reg, val, mask)	\
		RMWREG32(NIC_CFG_BASE(gaudi_nic->port) + (reg), (val), (mask))

/* read/write shared registers */
#define NIC_MACRO_CFG_BASE(port) \
			((u64) (NIC_MACRO_CFG_SIZE * (u64) ((port) >> 1)))

#define NIC_MACRO_RREG32_PORT(reg, port) \
			RREG32(NIC_MACRO_CFG_BASE(port) + reg)
#define NIC_MACRO_WREG32_PORT(reg, val, port) \
			WREG32(NIC_MACRO_CFG_BASE(port) + reg, val)

#define NIC_MACRO_RREG32(reg) NIC_MACRO_RREG32_PORT(reg, gaudi_nic->port)
#define NIC_MACRO_WREG32(reg, val) \
				NIC_MACRO_WREG32_PORT(reg, val, gaudi_nic->port)

extern const struct ethtool_ops gaudi_nic_ethtool_ops;
extern const struct dcbnl_rtnl_ops gaudi_nic_dcbnl_ops;

void gaudi_nic_set_pfc(struct gaudi_nic_device *gaudi_nic);
u32 gaudi_nic_mac_read(struct gaudi_nic_device *gaudi_nic, int mac,
			char *cfg_type, u32 addr);
int gaudi_nic_port_reset(struct gaudi_nic_device *gaudi_nic);
bool disabled_or_in_reset(struct gaudi_nic_device *gaudi_nic);
u64 gaudi_nic_read_mac_stat_counter(struct hl_device *hdev, u32 port, int idx,
					bool is_rx);

#endif /* GAUDI_NIC_DRV_H_ */
