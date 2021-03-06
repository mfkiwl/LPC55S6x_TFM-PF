/*
 * Copyright 2020 Arm Limited
 *
 * SPDX-License-Identifier: Apache 2.0
 */

#ifndef MEM_LAYOUT_H
#define MEM_LAYOUT_H

#define REGION_FLASH_START          0x00000000
#define REGION_FLASH_SIZE           0x0009DE00
#define REGION_FLASH_S_START        0x10000000
#define REGION_FLASH_S_SIZE         0x0009DE00

#ifdef  BL2
#define REGION_IMAGE_BL2_START      0x10000000
#define REGION_IMAGE_BL2_SIZE       0x00010000
#define REGION_IMAGE_1_S_START      0x10010000
#define REGION_IMAGE_1_S_SIZE       0x00020000
#define REGION_IMAGE_1_NS_START     0x00030000
#define REGION_IMAGE_1_NS_SIZE      0x00010000
#define REGION_IMAGE_2_S_START      0x10040000
#define REGION_IMAGE_2_S_SIZE       0x00020000
#define REGION_IMAGE_2_NS_START     0x00060000
#define REGION_IMAGE_2_NS_SIZE      0x00010000
#define REGION_SCRATCH_START        0x10070000
#define REGION_SCRATCH_SIZE         0x10020000
#endif

#define REGION_SST_START            0x10090000
#define REGION_SST_SIZE             0x00004000
#define REGION_ITS_START            0x10094000
#define REGION_ITS_SIZE             0x00002000
#define REGION_NV_COUNTERS_START    0x10096000
#define REGION_NV_COUNTERS_SIZE     0x00000200

#define REGION_CODE_BL2_START       0x10000000
#define REGION_CODE_BL2_SIZE        0x00010000
#define REGION_DATA_BOOT_START      0x30000000
#define REGION_DATA_BOOT_SIZE       0x00000400
#define REGION_DATA_BL2_START       0x30000400
#define REGION_DATA_BL2_SIZE        0x0001D400
#define REGION_HEAP_BL2_START       0x3001D800
#define REGION_HEAP_BL2_SIZE        0x00001000
#define REGION_STACK_BL2_START      0x3001E800
#define REGION_STACK_BL2_SIZE       0x00001800

#ifdef  BL2
#define REGION_HEADER_S_START       0x10010000
#define REGION_HEADER_S_SIZE        0x00000400
#define REGION_CODE_S_START         0x10010400
#define REGION_CODE_S_SIZE          0x0001F400
#define REGION_VENEERS_START        0x1002F800
#define REGION_VENEERS_SIZE         0x00000340
#define REGION_TRAILER_S_START      0x1002FC00
#define REGION_TRAILER_S_SIZE       0x00000400
#else
#define REGION_CODE_S_START         0x10000000
#define REGION_CODE_S_SIZE          0x0002F800
#define REGION_VENEERS_START        0x1002F800
#define REGION_VENEERS_SIZE         0x00000340
#endif
#define REGION_DATA_S_START         0x30000000
#define REGION_DATA_S_SIZE          0x00020000
#define REGION_STACK_MSP_S_START    0x30000000
#define REGION_STACK_MSP_S_SIZE     0x00000800
#define REGION_STACK_PSP_S_START    0x30000800
#define REGION_STACK_PSP_S_SIZE     0x00000800
#define REGION_HEAP_S_START         0x30001000
#define REGION_HEAP_S_SIZE          0x00001000

#ifdef  BL2
#define REGION_HEADER_NS_START      0x00030000
#define REGION_HEADER_NS_SIZE       0x00000400
#define REGION_CODE_NS_START        0x00030400
#define REGION_CODE_NS_SIZE         0x0000F800
#define REGION_TRAILER_NS_START     0x0003FC00
#define REGION_TRAILER_NS_SIZE      0x00000400
#else
#define REGION_CODE_NS_START        0x00030000
#define REGION_CODE_NS_SIZE         0x00040000
#endif
#define REGION_DATA_NS_START        0x20020000
#define REGION_DATA_NS_SIZE         0x00024000
#define REGION_STACK_MSP_NS_START   0x20042000
#define REGION_STACK_MSP_NS_SIZE    0x00000400
#define REGION_STACK_PSP_NS_START   0x20042400
#define REGION_STACK_PSP_NS_SIZE    0x00000C00
#define REGION_HEAP_NS_START        0x20043000
#define REGION_HEAP_NS_SIZE         0x00001000

#endif /* MEM_LAYOUT_H */
