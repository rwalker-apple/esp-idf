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
#ifndef _SOC_TIMERS_REG_H_
#define _SOC_TIMER_REG_H_

#include "soc.h"

#define T0CONFIG (DR_REG_TIMERS_BASE + 0x0000)
#define TIMERS_T0_EN (BIT(31))
#define TIMERS_T0_EN_S 31
#define TIMERS_T0_INCREASE (BIT(30))
#define TIMERS_T0_INCREASE_S 30
#define TIMERS_T0_AUTORELOAD (BIT(29))
#define TIMERS_T0_AUTORELOAD_S 29
#define TIMERS_T0_DIVIDER 0x0000FFFF
#define TIMERS_T0_DIVIDER_S 13
#define TIMERS_T0_EDGE_INT_EN (BIT(12))
#define TIMERS_T0_EDGE_INT_EN_S 12
#define TIMERS_T0_LEVEL_INT_EN (BIT(11))
#define TIMERS_T0_LEVEL_INT_EN_S 11
#define TIMERS_T0_ALARM_EN (BIT(10))
#define TIMERS_T0_ALARM_EN_S 10

#define T0LO (DR_REG_TIMERS_BASE + 0x0004)
#define TIMERS_T0_LO 0xFFFFFFFF
#define TIMERS_T0_LO_S 0

#define T0HI (DR_REG_TIMERS_BASE + 0x0008)
#define TIMERS_T0_HI 0xFFFFFFFF
#define TIMERS_T0_HI_S 0

#define T0UPDATE (DR_REG_TIMERS_BASE + 0x000c)
#define TIMERS_T0_UPDATE 0xFFFFFFFF
#define TIMERS_T0_UPDATE_S 0

#define T0ALARMLO (DR_REG_TIMERS_BASE + 0x0010)
#define TIMERS_T0_ALARM_LO 0xFFFFFFFF
#define TIMERS_T0_ALARM_LO_S 0

#define T0ALARMHI (DR_REG_TIMERS_BASE + 0x0014)
#define TIMERS_T0_ALARM_HI 0xFFFFFFFF
#define TIMERS_T0_ALARM_HI_S 0

#define T0LOADLO (DR_REG_TIMERS_BASE + 0x0018)
#define TIMERS_T0_LOAD_LO 0xFFFFFFFF
#define TIMERS_T0_LOAD_LO_S 0

#define T0LOADHI (DR_REG_TIMERS_BASE + 0x001c)
#define TIMERS_T0_LOAD_HI 0xFFFFFFFF
#define TIMERS_T0_LOAD_HI_S 0

#define T0LOAD (DR_REG_TIMERS_BASE + 0x0020)
#define TIMERS_T0_LOAD 0xFFFFFFFF
#define TIMERS_T0_LOAD_S 0

#define T1CONFIG (DR_REG_TIMERS_BASE + 0x0024)
#define TIMERS_T1_EN (BIT(31))
#define TIMERS_T1_EN_S 31
#define TIMERS_T1_INCREASE (BIT(30))
#define TIMERS_T1_INCREASE_S 30
#define TIMERS_T1_AUTORELOAD (BIT(29))
#define TIMERS_T1_AUTORELOAD_S 29
#define TIMERS_T1_DIVIDER 0x0000FFFF
#define TIMERS_T1_DIVIDER_S 13
#define TIMERS_T1_EDGE_INT_EN (BIT(12))
#define TIMERS_T1_EDGE_INT_EN_S 12
#define TIMERS_T1_LEVEL_INT_EN (BIT(11))
#define TIMERS_T1_LEVEL_INT_EN_S 11
#define TIMERS_T1_ALARM_EN (BIT(10))
#define TIMERS_T1_ALARM_EN_S 10

#define T1LO (DR_REG_TIMERS_BASE + 0x0028)
#define TIMERS_T1_LO 0xFFFFFFFF
#define TIMERS_T1_LO_S 0

#define T1HI (DR_REG_TIMERS_BASE + 0x002c)
#define TIMERS_T1_HI 0xFFFFFFFF
#define TIMERS_T1_HI_S 0

#define T1UPDATE (DR_REG_TIMERS_BASE + 0x0030)
#define TIMERS_T1_UPDATE 0xFFFFFFFF
#define TIMERS_T1_UPDATE_S 0

#define T1ALARMLO (DR_REG_TIMERS_BASE + 0x0034)
#define TIMERS_T1_ALARM_LO 0xFFFFFFFF
#define TIMERS_T1_ALARM_LO_S 0

#define T1ALARMHI (DR_REG_TIMERS_BASE + 0x0038)
#define TIMERS_T1_ALARM_HI 0xFFFFFFFF
#define TIMERS_T1_ALARM_HI_S 0

#define T1LOADLO (DR_REG_TIMERS_BASE + 0x003c)
#define TIMERS_T1_LOAD_LO 0xFFFFFFFF
#define TIMERS_T1_LOAD_LO_S 0

#define T1LOADHI (DR_REG_TIMERS_BASE + 0x0040)
#define TIMERS_T1_LOAD_HI 0xFFFFFFFF
#define TIMERS_T1_LOAD_HI_S 0

#define T1LOAD (DR_REG_TIMERS_BASE + 0x0044)
#define TIMERS_T1_LOAD 0xFFFFFFFF
#define TIMERS_T1_LOAD_S 0

#define WDTCONFIG0 (DR_REG_TIMERS_BASE + 0x0048)
#define TIMERS_WDT_EN (BIT(31))
#define TIMERS_WDT_EN_S 31
#define TIMERS_WDT_STG0 0x00000003
#define TIMERS_WDT_STG0_S 29
#define TIMERS_WDT_STG1 0x00000003
#define TIMERS_WDT_STG1_S 27
#define TIMERS_WDT_STG2 0x00000003
#define TIMERS_WDT_STG2_S 25
#define TIMERS_WDT_STG3 0x00000003
#define TIMERS_WDT_STG3_S 23
#define TIMERS_WDT_EDGE_INT_EN (BIT(22))
#define TIMERS_WDT_EDGE_INT_EN_S 22
#define TIMERS_WDT_LEVEL_INT_EN (BIT(21))
#define TIMERS_WDT_LEVEL_INT_EN_S 21
#define TIMERS_WDT_CPU_RESET_LENGTH 0x00000007
#define TIMERS_WDT_CPU_RESET_LENGTH_S 18
#define TIMERS_WDT_SYS_RESET_LENGTH 0x00000007
#define TIMERS_WDT_SYS_RESET_LENGTH_S 15
#define TIMERS_WDT_FLASHBOOT_MOD_EN (BIT(14))
#define TIMERS_WDT_FLASHBOOT_MOD_EN_S 14

#define WDTCONFIG1 (DR_REG_TIMERS_BASE + 0x004c)
#define TIMERS_WDT_CLK_PRESCALE 0x0000FFFF
#define TIMERS_WDT_CLK_PRESCALE_S 16

#define WDTCONFIG2 (DR_REG_TIMERS_BASE + 0x0050)
#define TIMERS_WDT_STG0_HOLD 0xFFFFFFFF
#define TIMERS_WDT_STG0_HOLD_S 0

#define WDTCONFIG3 (DR_REG_TIMERS_BASE + 0x0054)
#define TIMERS_WDT_STG1_HOLD 0xFFFFFFFF
#define TIMERS_WDT_STG1_HOLD_S 0

#define WDTCONFIG4 (DR_REG_TIMERS_BASE + 0x0058)
#define TIMERS_WDT_STG2_HOLD 0xFFFFFFFF
#define TIMERS_WDT_STG2_HOLD_S 0

#define WDTCONFIG5 (DR_REG_TIMERS_BASE + 0x005c)
#define TIMERS_WDT_STG3_HOLD 0xFFFFFFFF
#define TIMERS_WDT_STG3_HOLD_S 0

#define WDTFEED (DR_REG_TIMERS_BASE + 0x0060)
#define TIMERS_WDT_FEED 0xFFFFFFFF
#define TIMERS_WDT_FEED_S 0

#define WDTWPROTECT (DR_REG_TIMERS_BASE + 0x0064)
#define TIMERS_WDT_WKEY 0xFFFFFFFF
#define TIMERS_WDT_WKEY_S 0

#define RTCCALICFG (DR_REG_TIMERS_BASE + 0x0068)
#define TIMERS_RTC_CALI_START (BIT(31))
#define TIMERS_RTC_CALI_START_S 31
#define TIMERS_RTC_CALI_MAX 0x00007FFF
#define TIMERS_RTC_CALI_MAX_S 16
#define TIMERS_RTC_CALI_RDY (BIT(15))
#define TIMERS_RTC_CALI_RDY_S 15
#define TIMERS_RTC_CALI_CLK_SEL 0x00000003
#define TIMERS_RTC_CALI_CLK_SEL_S 13
#define TIMERS_RTC_CALI_START_CYCLING (BIT(12))
#define TIMERS_RTC_CALI_START_CYCLING_S 12

#define RTCCALICFG1 (DR_REG_TIMERS_BASE + 0x006c)
#define TIMERS_RTC_CALI_VALUE 0x01FFFFFF
#define TIMERS_RTC_CALI_VALUE_S 7

#define LACTCONFIG (DR_REG_TIMERS_BASE + 0x0070)
#define TIMERS_LACT_EN (BIT(31))
#define TIMERS_LACT_EN_S 31
#define TIMERS_LACT_INCREASE (BIT(30))
#define TIMERS_LACT_INCREASE_S 30
#define TIMERS_LACT_AUTORELOAD (BIT(29))
#define TIMERS_LACT_AUTORELOAD_S 29
#define TIMERS_LACT_DIVIDER 0x0000FFFF
#define TIMERS_LACT_DIVIDER_S 13
#define TIMERS_LACT_EDGE_INT_EN (BIT(12))
#define TIMERS_LACT_EDGE_INT_EN_S 12
#define TIMERS_LACT_LEVEL_INT_EN (BIT(11))
#define TIMERS_LACT_LEVEL_INT_EN_S 11
#define TIMERS_LACT_ALARM_EN (BIT(10))
#define TIMERS_LACT_ALARM_EN_S 10
#define TIMERS_LACT_LAC_EN (BIT(9))
#define TIMERS_LACT_LAC_EN_S 9
#define TIMERS_LACT_CPST_EN (BIT(8))
#define TIMERS_LACT_CPST_EN_S 8
#define TIMERS_LACT_RTC_ONLY (BIT(7))
#define TIMERS_LACT_RTC_ONLY_S 7

#define LACTRTC (DR_REG_TIMERS_BASE + 0x0074)
#define TIMERS_LACT_RTC_STEP_LEN 0x03FFFFFF
#define TIMERS_LACT_RTC_STEP_LEN_S 6

#define LACTLO (DR_REG_TIMERS_BASE + 0x0078)
#define TIMERS_LACT_LO 0xFFFFFFFF
#define TIMERS_LACT_LO_S 0

#define LACTHI (DR_REG_TIMERS_BASE + 0x007c)
#define TIMERS_LACT_HI 0xFFFFFFFF
#define TIMERS_LACT_HI_S 0

#define LACTUPDATE (DR_REG_TIMERS_BASE + 0x0080)
#define TIMERS_LACT_UPDATE 0xFFFFFFFF
#define TIMERS_LACT_UPDATE_S 0

#define LACTALARMLO (DR_REG_TIMERS_BASE + 0x0084)
#define TIMERS_LACT_ALARM_LO 0xFFFFFFFF
#define TIMERS_LACT_ALARM_LO_S 0

#define LACTALARMHI (DR_REG_TIMERS_BASE + 0x0088)
#define TIMERS_LACT_ALARM_HI 0xFFFFFFFF
#define TIMERS_LACT_ALARM_HI_S 0

#define LACTLOADLO (DR_REG_TIMERS_BASE + 0x008c)
#define TIMERS_LACT_LOAD_LO 0xFFFFFFFF
#define TIMERS_LACT_LOAD_LO_S 0

#define LACTLOADHI (DR_REG_TIMERS_BASE + 0x0090)
#define TIMERS_LACT_LOAD_HI 0xFFFFFFFF
#define TIMERS_LACT_LOAD_HI_S 0

#define LACTLOAD (DR_REG_TIMERS_BASE + 0x0094)
#define TIMERS_LACT_LOAD 0xFFFFFFFF
#define TIMERS_LACT_LOAD_S 0

#define INT_ENA_TIMERS (DR_REG_TIMERS_BASE + 0x0098)
#define TIMERS_LACT_INT_ENA (BIT(3))
#define TIMERS_LACT_INT_ENA_S 3
#define TIMERS_WDT_INT_ENA (BIT(2))
#define TIMERS_WDT_INT_ENA_S 2
#define TIMERS_T1_INT_ENA (BIT(1))
#define TIMERS_T1_INT_ENA_S 1
#define TIMERS_T0_INT_ENA (BIT(0))
#define TIMERS_T0_INT_ENA_S 0

#define INT_RAW_TIMERS (DR_REG_TIMERS_BASE + 0x009c)
#define TIMERS_LACT_INT_RAW (BIT(3))
#define TIMERS_LACT_INT_RAW_S 3
#define TIMERS_WDT_INT_RAW (BIT(2))
#define TIMERS_WDT_INT_RAW_S 2
#define TIMERS_T1_INT_RAW (BIT(1))
#define TIMERS_T1_INT_RAW_S 1
#define TIMERS_T0_INT_RAW (BIT(0))
#define TIMERS_T0_INT_RAW_S 0

#define INT_ST_TIMERS (DR_REG_TIMERS_BASE + 0x00a0)
#define TIMERS_LACT_INT_ST (BIT(3))
#define TIMERS_LACT_INT_ST_S 3
#define TIMERS_WDT_INT_ST (BIT(2))
#define TIMERS_WDT_INT_ST_S 2
#define TIMERS_T1_INT_ST (BIT(1))
#define TIMERS_T1_INT_ST_S 1
#define TIMERS_T0_INT_ST (BIT(0))
#define TIMERS_T0_INT_ST_S 0

#define INT_CLR_TIMERS (DR_REG_TIMERS_BASE + 0x00a4)
#define TIMERS_LACT_INT_CLR (BIT(3))
#define TIMERS_LACT_INT_CLR_S 3
#define TIMERS_WDT_INT_CLR (BIT(2))
#define TIMERS_WDT_INT_CLR_S 2
#define TIMERS_T1_INT_CLR (BIT(1))
#define TIMERS_T1_INT_CLR_S 1
#define TIMERS_T0_INT_CLR (BIT(0))
#define TIMERS_T0_INT_CLR_S 0

#define NTIMERS_DATE (DR_REG_TIMERS_BASE + 0x00f8)
#define TIMERS_NTIMERS_DATE 0x0FFFFFFF
#define TIMERS_NTIMERS_DATE_S 0
#define TIMERS_NTIMERS_DATE_VERSION 0x1604290

#define REGCLK (DR_REG_TIMERS_BASE + 0x00fc)
#define TIMERS_CLK_EN (BIT(31))
#define TIMERS_CLK_EN_S 31

#endif /* _SOC_TIMER_REG_H_ */
