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
#ifndef _SOC_GPIO_SD_REG_H_
#define _SOC_GPIO_SD_REG_H_

#include "soc.h"

#define SIGMADELTA0 (DR_REG_GPIO_SD_BASE + 0x0000)
#define SIGMADELTA_SD0_PRESCALE 0x000000FF
#define SIGMADELTA_SD0_PRESCALE_S 8
#define SIGMADELTA_SD0_IN 0x000000FF
#define SIGMADELTA_SD0_IN_S 0

#define SIGMADELTA1 (DR_REG_GPIO_SD_BASE + 0x0004)
#define SIGMADELTA_SD1_PRESCALE 0x000000FF
#define SIGMADELTA_SD1_PRESCALE_S 8
#define SIGMADELTA_SD1_IN 0x000000FF
#define SIGMADELTA_SD1_IN_S 0

#define SIGMADELTA2 (DR_REG_GPIO_SD_BASE + 0x0008)
#define SIGMADELTA_SD2_PRESCALE 0x000000FF
#define SIGMADELTA_SD2_PRESCALE_S 8
#define SIGMADELTA_SD2_IN 0x000000FF
#define SIGMADELTA_SD2_IN_S 0

#define SIGMADELTA3 (DR_REG_GPIO_SD_BASE + 0x000c)
#define SIGMADELTA_SD3_PRESCALE 0x000000FF
#define SIGMADELTA_SD3_PRESCALE_S 8
#define SIGMADELTA_SD3_IN 0x000000FF
#define SIGMADELTA_SD3_IN_S 0

#define SIGMADELTA4 (DR_REG_GPIO_SD_BASE + 0x0010)
#define SIGMADELTA_SD4_PRESCALE 0x000000FF
#define SIGMADELTA_SD4_PRESCALE_S 8
#define SIGMADELTA_SD4_IN 0x000000FF
#define SIGMADELTA_SD4_IN_S 0

#define SIGMADELTA5 (DR_REG_GPIO_SD_BASE + 0x0014)
#define SIGMADELTA_SD5_PRESCALE 0x000000FF
#define SIGMADELTA_SD5_PRESCALE_S 8
#define SIGMADELTA_SD5_IN 0x000000FF
#define SIGMADELTA_SD5_IN_S 0

#define SIGMADELTA6 (DR_REG_GPIO_SD_BASE + 0x0018)
#define SIGMADELTA_SD6_PRESCALE 0x000000FF
#define SIGMADELTA_SD6_PRESCALE_S 8
#define SIGMADELTA_SD6_IN 0x000000FF
#define SIGMADELTA_SD6_IN_S 0

#define SIGMADELTA7 (DR_REG_GPIO_SD_BASE + 0x001c)
#define SIGMADELTA_SD7_PRESCALE 0x000000FF
#define SIGMADELTA_SD7_PRESCALE_S 8
#define SIGMADELTA_SD7_IN 0x000000FF
#define SIGMADELTA_SD7_IN_S 0

#define SIGMADELTA_CG (DR_REG_GPIO_SD_BASE + 0x0020)
#define SIGMADELTA_GPIO_SD_CLK_EN (BIT(31))
#define SIGMADELTA_GPIO_SD_CLK_EN_S 31

#define SIGMADELTA_MISC (DR_REG_GPIO_SD_BASE + 0x0024)
#define SIGMADELTA_SPI_SWAP (BIT(31))
#define SIGMADELTA_SPI_SWAP_S 31

#define SIGMADELTA_VERSION (DR_REG_GPIO_SD_BASE + 0x0028)
#define SIGMADELTA_GPIO_SD_DATE 0x0FFFFFFF
#define SIGMADELTA_GPIO_SD_DATE_S 0
#define SIGMADELTA_GPIO_SD_DATE_VERSION 0x1506190

#endif /* _SOC_GPIO_SD_REG_H_ */
