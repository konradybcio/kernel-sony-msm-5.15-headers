/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __UAPI_CAM_ISP_IFE_H__
#define __UAPI_CAM_ISP_IFE_H__
#define CAM_ISP_IFE_OUT_RES_BASE 0x3000
#define CAM_ISP_IFE_OUT_RES_FULL (CAM_ISP_IFE_OUT_RES_BASE + 0)
#define CAM_ISP_IFE_OUT_RES_DS4 (CAM_ISP_IFE_OUT_RES_BASE + 1)
#define CAM_ISP_IFE_OUT_RES_DS16 (CAM_ISP_IFE_OUT_RES_BASE + 2)
#define CAM_ISP_IFE_OUT_RES_RAW_DUMP (CAM_ISP_IFE_OUT_RES_BASE + 3)
#define CAM_ISP_IFE_OUT_RES_FD (CAM_ISP_IFE_OUT_RES_BASE + 4)
#define CAM_ISP_IFE_OUT_RES_PDAF (CAM_ISP_IFE_OUT_RES_BASE + 5)
#define CAM_ISP_IFE_OUT_RES_RDI_0 (CAM_ISP_IFE_OUT_RES_BASE + 6)
#define CAM_ISP_IFE_OUT_RES_RDI_1 (CAM_ISP_IFE_OUT_RES_BASE + 7)
#define CAM_ISP_IFE_OUT_RES_RDI_2 (CAM_ISP_IFE_OUT_RES_BASE + 8)
#define CAM_ISP_IFE_OUT_RES_RDI_3 (CAM_ISP_IFE_OUT_RES_BASE + 9)
#define CAM_ISP_IFE_OUT_RES_STATS_HDR_BE (CAM_ISP_IFE_OUT_RES_BASE + 10)
#define CAM_ISP_IFE_OUT_RES_STATS_HDR_BHIST (CAM_ISP_IFE_OUT_RES_BASE + 11)
#define CAM_ISP_IFE_OUT_RES_STATS_TL_BG (CAM_ISP_IFE_OUT_RES_BASE + 12)
#define CAM_ISP_IFE_OUT_RES_STATS_BF (CAM_ISP_IFE_OUT_RES_BASE + 13)
#define CAM_ISP_IFE_OUT_RES_STATS_AWB_BG (CAM_ISP_IFE_OUT_RES_BASE + 14)
#define CAM_ISP_IFE_OUT_RES_STATS_BHIST (CAM_ISP_IFE_OUT_RES_BASE + 15)
#define CAM_ISP_IFE_OUT_RES_STATS_RS (CAM_ISP_IFE_OUT_RES_BASE + 16)
#define CAM_ISP_IFE_OUT_RES_STATS_CS (CAM_ISP_IFE_OUT_RES_BASE + 17)
#define CAM_ISP_IFE_OUT_RES_STATS_IHIST (CAM_ISP_IFE_OUT_RES_BASE + 18)
#define CAM_ISP_IFE_OUT_RES_FULL_DISP (CAM_ISP_IFE_OUT_RES_BASE + 19)
#define CAM_ISP_IFE_OUT_RES_DS4_DISP (CAM_ISP_IFE_OUT_RES_BASE + 20)
#define CAM_ISP_IFE_OUT_RES_DS16_DISP (CAM_ISP_IFE_OUT_RES_BASE + 21)
#define CAM_ISP_IFE_OUT_RES_2PD (CAM_ISP_IFE_OUT_RES_BASE + 22)
#define CAM_ISP_IFE_OUT_RES_RDI_RD (CAM_ISP_IFE_OUT_RES_BASE + 23)
#define CAM_ISP_IFE_OUT_RES_LCR (CAM_ISP_IFE_OUT_RES_BASE + 24)
#define CAM_ISP_IFE_OUT_RES_SPARSE_PD (CAM_ISP_IFE_OUT_RES_BASE + 25)
#define CAM_ISP_IFE_OUT_RES_PREPROCESS_2PD (CAM_ISP_IFE_OUT_RES_BASE + 26)
#define CAM_ISP_IFE_OUT_RES_AWB_BFW (CAM_ISP_IFE_OUT_RES_BASE + 27)
#define CAM_ISP_IFE_OUT_RES_STATS_AEC_BE (CAM_ISP_IFE_OUT_RES_BASE + 28)
#define CAM_ISP_IFE_OUT_RES_LTM_STATS (CAM_ISP_IFE_OUT_RES_BASE + 29)
#define CAM_ISP_IFE_OUT_RES_STATS_GTM_BHIST (CAM_ISP_IFE_OUT_RES_BASE + 30)
#define CAM_ISP_IFE_LITE_OUT_RES_STATS_BG (CAM_ISP_IFE_OUT_RES_BASE + 31)
#define CAM_ISP_IFE_LITE_OUT_RES_PREPROCESS_RAW (CAM_ISP_IFE_OUT_RES_BASE + 32)
#define CAM_ISP_IFE_OUT_RES_STATS_CAF (CAM_ISP_IFE_OUT_RES_BASE + 33)
#define CAM_ISP_IFE_OUT_RES_STATS_BAYER_RS (CAM_ISP_IFE_OUT_RES_BASE + 34)
#define CAM_ISP_IFE_OUT_RES_PDAF_PARSED_DATA (CAM_ISP_IFE_OUT_RES_BASE + 35)
#define CAM_ISP_IFE_OUT_RES_STATS_ALSC (CAM_ISP_IFE_OUT_RES_BASE + 36)
#define CAM_ISP_IFE_IN_RES_BASE 0x4000
#define CAM_ISP_IFE_IN_RES_TPG (CAM_ISP_IFE_IN_RES_BASE + 0)
#define CAM_ISP_IFE_IN_RES_PHY_0 (CAM_ISP_IFE_IN_RES_BASE + 1)
#define CAM_ISP_IFE_IN_RES_PHY_1 (CAM_ISP_IFE_IN_RES_BASE + 2)
#define CAM_ISP_IFE_IN_RES_PHY_2 (CAM_ISP_IFE_IN_RES_BASE + 3)
#define CAM_ISP_IFE_IN_RES_PHY_3 (CAM_ISP_IFE_IN_RES_BASE + 4)
#define CAM_ISP_IFE_IN_RES_PHY_4 (CAM_ISP_IFE_IN_RES_BASE + 5)
#define CAM_ISP_IFE_IN_RES_PHY_5 (CAM_ISP_IFE_IN_RES_BASE + 6)
#define CAM_ISP_IFE_IN_RES_RD (CAM_ISP_IFE_IN_RES_BASE + 7)
#define CAM_ISP_IFE_IN_RES_CPHY_TPG_0 (CAM_ISP_IFE_IN_RES_BASE + 8)
#define CAM_ISP_IFE_IN_RES_CPHY_TPG_1 (CAM_ISP_IFE_IN_RES_BASE + 9)
#define CAM_ISP_IFE_IN_RES_CPHY_TPG_2 (CAM_ISP_IFE_IN_RES_BASE + 10)
#define CAM_ISP_IFE_IN_RES_MAX (CAM_ISP_IFE_IN_RES_BASE + 11)
#endif
