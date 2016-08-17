// Copyright 2015-2016 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef _SOC_EFUSE_REG_H_
#define _SOC_EFUSE_REG_H_

#include "soc.h"

#define EFUSE_BLK0_RDATA0 (DR_REG_EFUSE_BASE + 0x000)
#define EFUSE_RD_FLASH_CRYPT_CNT 0x000000FF
#define EFUSE_RD_FLASH_CRYPT_CNT_S 20
#define EFUSE_RD_EFUSE_RD_DIS 0x0000000F
#define EFUSE_RD_EFUSE_RD_DIS_S 16
#define EFUSE_RD_EFUSE_WR_DIS 0x0000FFFF
#define EFUSE_RD_EFUSE_WR_DIS_S 0

#define EFUSE_BLK0_RDATA1 (DR_REG_EFUSE_BASE + 0x004)
#define EFUSE_RD_WIFI_MAC_CRC_LOW 0xFFFFFFFF
#define EFUSE_RD_WIFI_MAC_CRC_LOW_S 0

#define EFUSE_BLK0_RDATA2 (DR_REG_EFUSE_BASE + 0x008)
#define EFUSE_RD_WIFI_MAC_CRC_HIGH 0x00FFFFFF
#define EFUSE_RD_WIFI_MAC_CRC_HIGH_S 0

#define EFUSE_BLK0_RDATA3 (DR_REG_EFUSE_BASE + 0x00c)
#define EFUSE_RD_CHIP_VER_RESERVE 0x00001FFF
#define EFUSE_RD_CHIP_VER_RESERVE_S 4
#define EFUSE_RD_CHIP_VER_DIS_CACHE (BIT(3))
#define EFUSE_RD_CHIP_VER_DIS_CACHE_S 3
#define EFUSE_RD_CHIP_VER_32PAD (BIT(2))
#define EFUSE_RD_CHIP_VER_32PAD_S 2
#define EFUSE_RD_CHIP_VER_DIS_BT (BIT(1))
#define EFUSE_RD_CHIP_VER_DIS_BT_S 1
#define EFUSE_RD_CHIP_VER_DIS_APP_CPU (BIT(0))
#define EFUSE_RD_CHIP_VER_DIS_APP_CPU_S 0

#define EFUSE_BLK0_RDATA4 (DR_REG_EFUSE_BASE + 0x010)
#define EFUSE_RD_SDIO_FORCE (BIT(16))
#define EFUSE_RD_SDIO_FORCE_S 16
#define EFUSE_RD_SDIO_TIEH (BIT(15))
#define EFUSE_RD_SDIO_TIEH_S 15
#define EFUSE_RD_XPD_SDIO_REG (BIT(14))
#define EFUSE_RD_XPD_SDIO_REG_S 14
#define EFUSE_RD_SDIO_DREFL 0x00000003
#define EFUSE_RD_SDIO_DREFL_S 12
#define EFUSE_RD_SDIO_DREFM 0x00000003
#define EFUSE_RD_SDIO_DREFM_S 10
#define EFUSE_RD_SDIO_DREFH 0x00000003
#define EFUSE_RD_SDIO_DREFH_S 8
#define EFUSE_RD_CK8M_FREQ 0x000000FF
#define EFUSE_RD_CK8M_FREQ_S 0

#define EFUSE_BLK0_RDATA5 (DR_REG_EFUSE_BASE + 0x014)
#define EFUSE_RD_FLASH_CRYPT_CONFIG 0x0000000F
#define EFUSE_RD_FLASH_CRYPT_CONFIG_S 28
#define EFUSE_RD_INST_CONFIG 0x000000FF
#define EFUSE_RD_INST_CONFIG_S 20
#define EFUSE_RD_SPI_PAD_CONFIG 0x000FFFFF
#define EFUSE_RD_SPI_PAD_CONFIG_S 0

#define EFUSE_BLK0_RDATA6 (DR_REG_EFUSE_BASE + 0x018)
#define EFUSE_RD_KEY_STATUS (BIT(10))
#define EFUSE_RD_KEY_STATUS_S 10
#define EFUSE_RD_DISABLE_DL_CACHE (BIT(9))
#define EFUSE_RD_DISABLE_DL_CACHE_S 9
#define EFUSE_RD_DISABLE_DL_DECRYPT (BIT(8))
#define EFUSE_RD_DISABLE_DL_DECRYPT_S 8
#define EFUSE_RD_DISABLE_DL_ENCRYPT (BIT(7))
#define EFUSE_RD_DISABLE_DL_ENCRYPT_S 7
#define EFUSE_RD_DISABLE_JTAG (BIT(6))
#define EFUSE_RD_DISABLE_JTAG_S 6
#define EFUSE_RD_ABS_DONE_1 (BIT(5))
#define EFUSE_RD_ABS_DONE_1_S 5
#define EFUSE_RD_ABS_DONE_0 (BIT(4))
#define EFUSE_RD_ABS_DONE_0_S 4
#define EFUSE_RD_DISABLE_SDIO_HOST (BIT(3))
#define EFUSE_RD_DISABLE_SDIO_HOST_S 3
#define EFUSE_RD_DIG_RESERVE (BIT(2))
#define EFUSE_RD_DIG_RESERVE_S 2
#define EFUSE_RD_CODING_SCHEME 0x00000003
#define EFUSE_RD_CODING_SCHEME_S 0

#define EFUSE_BLK0_WDATA0 (DR_REG_EFUSE_BASE + 0x01c)
#define EFUSE_FLASH_CRYPT_CNT 0x000000FF
#define EFUSE_FLASH_CRYPT_CNT_S 20
#define EFUSE_EFUSE_RD_DIS 0x0000000F
#define EFUSE_EFUSE_RD_DIS_S 16
#define EFUSE_EFUSE_WR_DIS 0x0000FFFF
#define EFUSE_EFUSE_WR_DIS_S 0

#define EFUSE_BLK0_WDATA1 (DR_REG_EFUSE_BASE + 0x020)
#define EFUSE_WIFI_MAC_CRC_LOW 0xFFFFFFFF
#define EFUSE_WIFI_MAC_CRC_LOW_S 0

#define EFUSE_BLK0_WDATA2 (DR_REG_EFUSE_BASE + 0x024)
#define EFUSE_WIFI_MAC_CRC_HIGH 0x00FFFFFF
#define EFUSE_WIFI_MAC_CRC_HIGH_S 0

#define EFUSE_BLK0_WDATA3 (DR_REG_EFUSE_BASE + 0x028)
#define EFUSE_CHIP_VER_RESERVE 0x00001FFF
#define EFUSE_CHIP_VER_RESERVE_S 4
#define EFUSE_CHIP_VER_DIS_CACHE (BIT(3))
#define EFUSE_CHIP_VER_DIS_CACHE_S 3
#define EFUSE_CHIP_VER_32PAD (BIT(2))
#define EFUSE_CHIP_VER_32PAD_S 2
#define EFUSE_CHIP_VER_DIS_BT (BIT(1))
#define EFUSE_CHIP_VER_DIS_BT_S 1
#define EFUSE_CHIP_VER_DIS_APP_CPU (BIT(0))
#define EFUSE_CHIP_VER_DIS_APP_CPU_S 0

#define EFUSE_BLK0_WDATA4 (DR_REG_EFUSE_BASE + 0x02c)
#define EFUSE_SDIO_FORCE (BIT(16))
#define EFUSE_SDIO_FORCE_S 16
#define EFUSE_SDIO_TIEH (BIT(15))
#define EFUSE_SDIO_TIEH_S 15
#define EFUSE_XPD_SDIO_REG (BIT(14))
#define EFUSE_XPD_SDIO_REG_S 14
#define EFUSE_SDIO_DREFL 0x00000003
#define EFUSE_SDIO_DREFL_S 12
#define EFUSE_SDIO_DREFM 0x00000003
#define EFUSE_SDIO_DREFM_S 10
#define EFUSE_SDIO_DREFH 0x00000003
#define EFUSE_SDIO_DREFH_S 8
#define EFUSE_CK8M_FREQ 0x000000FF
#define EFUSE_CK8M_FREQ_S 0

#define EFUSE_BLK0_WDATA5 (DR_REG_EFUSE_BASE + 0x030)
#define EFUSE_FLASH_CRYPT_CONFIG 0x0000000F
#define EFUSE_FLASH_CRYPT_CONFIG_S 28
#define EFUSE_INST_CONFIG 0x000000FF
#define EFUSE_INST_CONFIG_S 20
#define EFUSE_SPI_PAD_CONFIG 0x000FFFFF
#define EFUSE_SPI_PAD_CONFIG_S 0

#define EFUSE_BLK0_WDATA6 (DR_REG_EFUSE_BASE + 0x034)
#define EFUSE_KEY_STATUS (BIT(10))
#define EFUSE_KEY_STATUS_S 10
#define EFUSE_DISABLE_DL_CACHE (BIT(9))
#define EFUSE_DISABLE_DL_CACHE_S 9
#define EFUSE_DISABLE_DL_DECRYPT (BIT(8))
#define EFUSE_DISABLE_DL_DECRYPT_S 8
#define EFUSE_DISABLE_DL_ENCRYPT (BIT(7))
#define EFUSE_DISABLE_DL_ENCRYPT_S 7
#define EFUSE_DISABLE_JTAG (BIT(6))
#define EFUSE_DISABLE_JTAG_S 6
#define EFUSE_ABS_DONE_1 (BIT(5))
#define EFUSE_ABS_DONE_1_S 5
#define EFUSE_ABS_DONE_0 (BIT(4))
#define EFUSE_ABS_DONE_0_S 4
#define EFUSE_DISABLE_SDIO_HOST (BIT(3))
#define EFUSE_DISABLE_SDIO_HOST_S 3
#define EFUSE_DIG_RESERVE (BIT(2))
#define EFUSE_DIG_RESERVE_S 2
#define EFUSE_CODING_SCHEME 0x00000003
#define EFUSE_CODING_SCHEME_S 0

#define EFUSE_BLK1_RDATA0 (DR_REG_EFUSE_BASE + 0x038)
#define EFUSE_EFUSE_BLK1_DOUT0 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DOUT0_S 0

#define EFUSE_BLK1_RDATA1 (DR_REG_EFUSE_BASE + 0x03c)
#define EFUSE_EFUSE_BLK1_DOUT1 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DOUT1_S 0

#define EFUSE_BLK1_RDATA2 (DR_REG_EFUSE_BASE + 0x040)
#define EFUSE_EFUSE_BLK1_DOUT2 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DOUT2_S 0

#define EFUSE_BLK1_RDATA3 (DR_REG_EFUSE_BASE + 0x044)
#define EFUSE_EFUSE_BLK1_DOUT3 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DOUT3_S 0

#define EFUSE_BLK1_RDATA4 (DR_REG_EFUSE_BASE + 0x048)
#define EFUSE_EFUSE_BLK1_DOUT4 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DOUT4_S 0

#define EFUSE_BLK1_RDATA5 (DR_REG_EFUSE_BASE + 0x04c)
#define EFUSE_EFUSE_BLK1_DOUT5 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DOUT5_S 0

#define EFUSE_BLK1_RDATA6 (DR_REG_EFUSE_BASE + 0x050)
#define EFUSE_EFUSE_BLK1_DOUT6 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DOUT6_S 0

#define EFUSE_BLK1_RDATA7 (DR_REG_EFUSE_BASE + 0x054)
#define EFUSE_EFUSE_BLK1_DOUT7 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DOUT7_S 0

#define EFUSE_BLK2_RDATA0 (DR_REG_EFUSE_BASE + 0x058)
#define EFUSE_EFUSE_BLK2_DOUT0 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DOUT0_S 0

#define EFUSE_BLK2_RDATA1 (DR_REG_EFUSE_BASE + 0x05c)
#define EFUSE_EFUSE_BLK2_DOUT1 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DOUT1_S 0

#define EFUSE_BLK2_RDATA2 (DR_REG_EFUSE_BASE + 0x060)
#define EFUSE_EFUSE_BLK2_DOUT2 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DOUT2_S 0

#define EFUSE_BLK2_RDATA3 (DR_REG_EFUSE_BASE + 0x064)
#define EFUSE_EFUSE_BLK2_DOUT3 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DOUT3_S 0

#define EFUSE_BLK2_RDATA4 (DR_REG_EFUSE_BASE + 0x068)
#define EFUSE_EFUSE_BLK2_DOUT4 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DOUT4_S 0

#define EFUSE_BLK2_RDATA5 (DR_REG_EFUSE_BASE + 0x06c)
#define EFUSE_EFUSE_BLK2_DOUT5 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DOUT5_S 0

#define EFUSE_BLK2_RDATA6 (DR_REG_EFUSE_BASE + 0x070)
#define EFUSE_EFUSE_BLK2_DOUT6 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DOUT6_S 0

#define EFUSE_BLK2_RDATA7 (DR_REG_EFUSE_BASE + 0x074)
#define EFUSE_EFUSE_BLK2_DOUT7 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DOUT7_S 0

#define EFUSE_BLK3_RDATA0 (DR_REG_EFUSE_BASE + 0x078)
#define EFUSE_EFUSE_BLK3_DOUT0 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DOUT0_S 0

#define EFUSE_BLK3_RDATA1 (DR_REG_EFUSE_BASE + 0x07c)
#define EFUSE_EFUSE_BLK3_DOUT1 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DOUT1_S 0

#define EFUSE_BLK3_RDATA2 (DR_REG_EFUSE_BASE + 0x080)
#define EFUSE_EFUSE_BLK3_DOUT2 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DOUT2_S 0

#define EFUSE_BLK3_RDATA3 (DR_REG_EFUSE_BASE + 0x084)
#define EFUSE_EFUSE_BLK3_DOUT3 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DOUT3_S 0

#define EFUSE_BLK3_RDATA4 (DR_REG_EFUSE_BASE + 0x088)
#define EFUSE_EFUSE_BLK3_DOUT4 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DOUT4_S 0

#define EFUSE_BLK3_RDATA5 (DR_REG_EFUSE_BASE + 0x08c)
#define EFUSE_EFUSE_BLK3_DOUT5 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DOUT5_S 0

#define EFUSE_BLK3_RDATA6 (DR_REG_EFUSE_BASE + 0x090)
#define EFUSE_EFUSE_BLK3_DOUT6 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DOUT6_S 0

#define EFUSE_BLK3_RDATA7 (DR_REG_EFUSE_BASE + 0x094)
#define EFUSE_EFUSE_BLK3_DOUT7 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DOUT7_S 0

#define EFUSE_BLK1_WDATA0 (DR_REG_EFUSE_BASE + 0x098)
#define EFUSE_EFUSE_BLK1_DIN0 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DIN0_S 0

#define EFUSE_BLK1_WDATA1 (DR_REG_EFUSE_BASE + 0x09c)
#define EFUSE_EFUSE_BLK1_DIN1 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DIN1_S 0

#define EFUSE_BLK1_WDATA2 (DR_REG_EFUSE_BASE + 0x0a0)
#define EFUSE_EFUSE_BLK1_DIN2 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DIN2_S 0

#define EFUSE_BLK1_WDATA3 (DR_REG_EFUSE_BASE + 0x0a4)
#define EFUSE_EFUSE_BLK1_DIN3 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DIN3_S 0

#define EFUSE_BLK1_WDATA4 (DR_REG_EFUSE_BASE + 0x0a8)
#define EFUSE_EFUSE_BLK1_DIN4 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DIN4_S 0

#define EFUSE_BLK1_WDATA5 (DR_REG_EFUSE_BASE + 0x0ac)
#define EFUSE_EFUSE_BLK1_DIN5 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DIN5_S 0

#define EFUSE_BLK1_WDATA6 (DR_REG_EFUSE_BASE + 0x0b0)
#define EFUSE_EFUSE_BLK1_DIN6 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DIN6_S 0

#define EFUSE_BLK1_WDATA7 (DR_REG_EFUSE_BASE + 0x0b4)
#define EFUSE_EFUSE_BLK1_DIN7 0xFFFFFFFF
#define EFUSE_EFUSE_BLK1_DIN7_S 0

#define EFUSE_BLK2_WDATA0 (DR_REG_EFUSE_BASE + 0x0b8)
#define EFUSE_EFUSE_BLK2_DIN0 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DIN0_S 0

#define EFUSE_BLK2_WDATA1 (DR_REG_EFUSE_BASE + 0x0bc)
#define EFUSE_EFUSE_BLK2_DIN1 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DIN1_S 0

#define EFUSE_BLK2_WDATA2 (DR_REG_EFUSE_BASE + 0x0c0)
#define EFUSE_EFUSE_BLK2_DIN2 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DIN2_S 0

#define EFUSE_BLK2_WDATA3 (DR_REG_EFUSE_BASE + 0x0c4)
#define EFUSE_EFUSE_BLK2_DIN3 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DIN3_S 0

#define EFUSE_BLK2_WDATA4 (DR_REG_EFUSE_BASE + 0x0c8)
#define EFUSE_EFUSE_BLK2_DIN4 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DIN4_S 0

#define EFUSE_BLK2_WDATA5 (DR_REG_EFUSE_BASE + 0x0cc)
#define EFUSE_EFUSE_BLK2_DIN5 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DIN5_S 0

#define EFUSE_BLK2_WDATA6 (DR_REG_EFUSE_BASE + 0x0d0)
#define EFUSE_EFUSE_BLK2_DIN6 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DIN6_S 0

#define EFUSE_BLK2_WDATA7 (DR_REG_EFUSE_BASE + 0x0d4)
#define EFUSE_EFUSE_BLK2_DIN7 0xFFFFFFFF
#define EFUSE_EFUSE_BLK2_DIN7_S 0

#define EFUSE_BLK3_WDATA0 (DR_REG_EFUSE_BASE + 0x0d8)
#define EFUSE_EFUSE_BLK3_DIN0 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DIN0_S 0

#define EFUSE_BLK3_WDATA1 (DR_REG_EFUSE_BASE + 0x0dc)
#define EFUSE_EFUSE_BLK3_DIN1 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DIN1_S 0

#define EFUSE_BLK3_WDATA2 (DR_REG_EFUSE_BASE + 0x0e0)
#define EFUSE_EFUSE_BLK3_DIN2 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DIN2_S 0

#define EFUSE_BLK3_WDATA3 (DR_REG_EFUSE_BASE + 0x0e4)
#define EFUSE_EFUSE_BLK3_DIN3 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DIN3_S 0

#define EFUSE_BLK3_WDATA4 (DR_REG_EFUSE_BASE + 0x0e8)
#define EFUSE_EFUSE_BLK3_DIN4 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DIN4_S 0

#define EFUSE_BLK3_WDATA5 (DR_REG_EFUSE_BASE + 0x0ec)
#define EFUSE_EFUSE_BLK3_DIN5 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DIN5_S 0

#define EFUSE_BLK3_WDATA6 (DR_REG_EFUSE_BASE + 0x0f0)
#define EFUSE_EFUSE_BLK3_DIN6 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DIN6_S 0

#define EFUSE_BLK3_WDATA7 (DR_REG_EFUSE_BASE + 0x0f4)
#define EFUSE_EFUSE_BLK3_DIN7 0xFFFFFFFF
#define EFUSE_EFUSE_BLK3_DIN7_S 0

#define EFUSE_CLK (DR_REG_EFUSE_BASE + 0x0f8)
#define EFUSE_CLK_EN (BIT(16))
#define EFUSE_CLK_EN_S 16
#define EFUSE_EFUSE_CLK_SEL1 0x000000FF
#define EFUSE_EFUSE_CLK_SEL1_S 8
#define EFUSE_EFUSE_CLK_SEL0 0x000000FF
#define EFUSE_EFUSE_CLK_SEL0_S 0

#define EFUSE_CONF (DR_REG_EFUSE_BASE + 0x0fc)
#define EFUSE_EFUSE_FORCE_NO_WR_RD_DIS (BIT(16))
#define EFUSE_EFUSE_FORCE_NO_WR_RD_DIS_S 16
#define EFUSE_EFUSE_OP_CODE 0x0000FFFF
#define EFUSE_EFUSE_OP_CODE_S 0

#define EFUSE_STATUS (DR_REG_EFUSE_BASE + 0x100)
#define EFUSE_EFUSE_DEBUG 0xFFFFFFFF
#define EFUSE_EFUSE_DEBUG_S 0

#define EFUSE_CMD (DR_REG_EFUSE_BASE + 0x104)
#define EFUSE_EFUSE_PGM_CMD (BIT(1))
#define EFUSE_EFUSE_PGM_CMD_S 1
#define EFUSE_EFUSE_READ_CMD (BIT(0))
#define EFUSE_EFUSE_READ_CMD_S 0

#define EFUSE_INT_RAW (DR_REG_EFUSE_BASE + 0x108)
#define EFUSE_EFUSE_PGM_DONE_INT_RAW (BIT(1))
#define EFUSE_EFUSE_PGM_DONE_INT_RAW_S 1
#define EFUSE_EFUSE_READ_DONE_INT_RAW (BIT(0))
#define EFUSE_EFUSE_READ_DONE_INT_RAW_S 0

#define EFUSE_INT_ST (DR_REG_EFUSE_BASE + 0x10c)
#define EFUSE_EFUSE_PGM_DONE_INT_ST (BIT(1))
#define EFUSE_EFUSE_PGM_DONE_INT_ST_S 1
#define EFUSE_EFUSE_READ_DONE_INT_ST (BIT(0))
#define EFUSE_EFUSE_READ_DONE_INT_ST_S 0

#define EFUSE_INT_ENA (DR_REG_EFUSE_BASE + 0x110)
#define EFUSE_EFUSE_PGM_DONE_INT_ENA (BIT(1))
#define EFUSE_EFUSE_PGM_DONE_INT_ENA_S 1
#define EFUSE_EFUSE_READ_DONE_INT_ENA (BIT(0))
#define EFUSE_EFUSE_READ_DONE_INT_ENA_S 0

#define EFUSE_INT_CLR (DR_REG_EFUSE_BASE + 0x114)
#define EFUSE_EFUSE_PGM_DONE_INT_CLR (BIT(1))
#define EFUSE_EFUSE_PGM_DONE_INT_CLR_S 1
#define EFUSE_EFUSE_READ_DONE_INT_CLR (BIT(0))
#define EFUSE_EFUSE_READ_DONE_INT_CLR_S 0

#define EFUSE_DAC_CONF (DR_REG_EFUSE_BASE + 0x118)
#define EFUSE_EFUSE_DAC_CLK_PAD_SEL (BIT(8))
#define EFUSE_EFUSE_DAC_CLK_PAD_SEL_S 8
#define EFUSE_EFUSE_DAC_CLK_DIV 0x000000FF
#define EFUSE_EFUSE_DAC_CLK_DIV_S 0

#define EFUSE_DEC_STATUS (DR_REG_EFUSE_BASE + 0x11c)
#define EFUSE_EFUSE_DEC_WARNINGS 0x00000FFF
#define EFUSE_EFUSE_DEC_WARNINGS_S 0

#define EFUSE_DATE (DR_REG_EFUSE_BASE + 0x1FC)
#define EFUSE_EFUSE_DATE 0xFFFFFFFF
#define EFUSE_EFUSE_DATE_S 0
#define EFUSE_EFUSE_DATE_VERSION 0x16042600

#endif /* _SOC_EFUSE_REG_H_ */
