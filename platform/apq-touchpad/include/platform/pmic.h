/*
 * * Copyright (c) 2010-2011, Code Aurora Forum. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Code Aurora Forum, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef __PLATFORM_APQ_TOUCHPAD_PMIC_H
#define __PLATFORM_APQ_TOUCHPAD_PMIC_H

/* PMIC 8901 LDO Module defines */
#define PM8901_LDO_BASE (0x2F)

#define PM8901_LDO_L0           (PM8901_LDO_BASE + 0x00)
#define PM8901_LDO_L0_TEST_BANK     (PM8901_LDO_BASE + 0x01)
#define PM8901_LDO_L1           (PM8901_LDO_BASE + 0x02)
#define PM8901_LDO_L1_TEST_BANK     (PM8901_LDO_BASE + 0x03)
#define PM8901_LDO_L2           (PM8901_LDO_BASE + 0x04)
#define PM8901_LDO_L2_TEST_BANK     (PM8901_LDO_BASE + 0x05)
#define PM8901_LDO_L3           (PM8901_LDO_BASE + 0x06)
#define PM8901_LDO_L3_TEST_BANK     (PM8901_LDO_BASE + 0x07)
#define PM8901_LDO_L4           (PM8901_LDO_BASE + 0x08)
#define PM8901_LDO_L4_TEST_BANK     (PM8901_LDO_BASE + 0x09)
#define PM8901_LDO_L5           (PM8901_LDO_BASE + 0x0A)
#define PM8901_LDO_L5_TEST_BANK     (PM8901_LDO_BASE + 0x0B)
#define PM8901_LDO_L6           (PM8901_LDO_BASE + 0x0C)
#define PM8901_LDO_L6_TEST_BANK     (PM8901_LDO_BASE + 0x0D)
#define PM8901_LDO_L7           (PM8901_LDO_BASE + 0x0E)
#define PM8901_LDO_L7_TEST_BANK     (PM8901_LDO_BASE + 0x0F)
#define PM8901_PMR_7            (0xAD)

#define PM8901_LDO_TEST_BANK(n) ((n)<<4)

#define PM8901_LDO_CTL_ENABLE__S    (7)
#define PM8901_LDO_CTL_PULL_DOWN__S (6)
#define PM8901_LDO_CTL_MODE__S      (5)
/* LDO CTL */
#define LDO_CTL_ENABLE_MASK     (0x80)
#define LDO_CTL_PULL_DOWN_MASK      (0x40)
#define LDO_CTL_NORMAL_POWER_MODE_MASK  (0x20)
#define LDO_CTL_VOLTAGE_SET_MASK    (0x1F)

/* LDO TEST BANK 2 */
#define LDO_TEST_RANGE_SELECT_MASK (0x01)

/* LDO TEST BANK 4 */
#define LDO_TEST_OUTPUT_RANGE_MASK (0x01)

/* LDO TEST BANK 5 */
#define LDO_TEST_XO_EN_ALL_MASK (0x1F)

/* PMIC 8058 defines */
#define PM8058_LPG_CTL_BASE      (0x13C)
#define PM8058_LPG_CTL(n)        (PM8058_LPG_CTL_BASE + (n))
#define PM8058_LPG_BANK_SEL      (0x143)
#define PM8058_LPG_BANK_ENABLE   (0x144)

#define GPIO24_GPIO_CNTRL (0x167)
#define GPIO25_GPIO_CNTRL (0x168)

#define IRQ_BLOCK_SEL_USR_ADDR 0x1C0
#define IRQ_STATUS_RT_USR_ADDR 0x1C3

/* PMIC 8058 LDO module defines */
#define PM8058_LDO_CTRL_L0   (0x009)
#define PM8058_LDO_TEST_L0   (0x065)
#define PM8058_LDO_CTRL_L1   (0x00A)
#define PM8058_LDO_TEST_L1   (0x066)
#define PM8058_LDO_CTRL_L2   (0x00B)
#define PM8058_LDO_TEST_L2   (0x067)
#define PM8058_LDO_CTRL_L3   (0x00C)
#define PM8058_LDO_TEST_L3   (0x068)
#define PM8058_LDO_CTRL_L4   (0x00D)
#define PM8058_LDO_TEST_L4   (0x069)
#define PM8058_LDO_CTRL_L5   (0x00E)
#define PM8058_LDO_TEST_L5   (0x06A)
#define PM8058_LDO_CTRL_L6   (0x00F)
#define PM8058_LDO_TEST_L6   (0x06B)
#define PM8058_LDO_CTRL_L7   (0x010)
#define PM8058_LDO_TEST_L7   (0x06C)
#define PM8058_LDO_CTRL_L8   (0x011)
#define PM8058_LDO_TEST_L8   (0x06D)
#define PM8058_LDO_CTRL_L9   (0x012)
#define PM8058_LDO_TEST_L9   (0x06E)
#define PM8058_LDO_CTRL_L10  (0x013)
#define PM8058_LDO_TEST_L10  (0x06F)
#define PM8058_LDO_CTRL_L11  (0x014)
#define PM8058_LDO_TEST_L11  (0x070)
#define PM8058_LDO_CTRL_L12  (0x015)
#define PM8058_LDO_TEST_L12  (0x071)
#define PM8058_LDO_CTRL_L13  (0x016)
#define PM8058_LDO_TEST_L13  (0x072)
#define PM8058_LDO_CTRL_L14  (0x017)
#define PM8058_LDO_TEST_L14  (0x073)

#define PM8058_LDO_CTRL_L15  (0x089)
#define PM8058_LDO_TEST_L15  (0x0E5)
#define PM8058_LDO_CTRL_L16  (0x08A)
#define PM8058_LDO_TEST_L16  (0x0E6)
#define PM8058_LDO_CTRL_L17  (0x08B)
#define PM8058_LDO_TEST_L17  (0x0E7)

#define PM8058_LDO_CTRL_L18  (0x11D)
#define PM8058_LDO_TEST_L18  (0x125)
#define PM8058_LDO_CTRL_L19  (0x11E)
#define PM8058_LDO_TEST_L19  (0x126)
#define PM8058_LDO_CTRL_L20  (0x11F)
#define PM8058_LDO_TEST_L20  (0x127)
#define PM8058_LDO_CTRL_L21  (0x120)
#define PM8058_LDO_TEST_L21  (0x128)
#define PM8058_LDO_CTRL_L22  (0x121)
#define PM8058_LDO_TEST_L22  (0x129)
#define PM8058_LDO_CTRL_L23  (0x122)
#define PM8058_LDO_TEST_L23  (0x12A)
#define PM8058_LDO_CTRL_L24  (0x123)
#define PM8058_LDO_TEST_L24  (0x12B)
#define PM8058_LDO_CTRL_L25  (0x124)
#define PM8058_LDO_TEST_L25  (0x12C)

typedef enum
{
    PM_KYPD_PWRON_IRQ_ID        = 51,

    /* Block 24 Interrupts */
    PM_GPIO01_CHGED_ST_IRQ_ID   = 192,
    PM_GPIO02_CHGED_ST_IRQ_ID   = 193,
    PM_GPIO03_CHGED_ST_IRQ_ID   = 194,
    PM_GPIO04_CHGED_ST_IRQ_ID   = 195,
    PM_GPIO05_CHGED_ST_IRQ_ID   = 196,
    PM_GPIO06_CHGED_ST_IRQ_ID   = 197,
    PM_GPIO07_CHGED_ST_IRQ_ID   = 198,
    PM_GPIO08_CHGED_ST_IRQ_ID   = 199,

    /* Block 25 Interrupts */
    PM_GPIO09_CHGED_ST_IRQ_ID   = 200,
    PM_GPIO10_CHGED_ST_IRQ_ID   = 201,
    PM_GPIO11_CHGED_ST_IRQ_ID   = 202,
    PM_GPIO12_CHGED_ST_IRQ_ID   = 203,
    PM_GPIO13_CHGED_ST_IRQ_ID   = 204,
    PM_GPIO14_CHGED_ST_IRQ_ID   = 205,
    PM_GPIO15_CHGED_ST_IRQ_ID   = 206,
    PM_GPIO16_CHGED_ST_IRQ_ID   = 207,

    /* Block 26 Interrupts */
    PM_GPIO17_CHGED_ST_IRQ_ID   = 208,
    PM_GPIO18_CHGED_ST_IRQ_ID   = 209,
    PM_GPIO19_CHGED_ST_IRQ_ID   = 210,
    PM_GPIO20_CHGED_ST_IRQ_ID   = 211,
    PM_GPIO21_CHGED_ST_IRQ_ID   = 212,
    PM_GPIO22_CHGED_ST_IRQ_ID   = 213,
    PM_GPIO23_CHGED_ST_IRQ_ID   = 214,
    PM_GPIO24_CHGED_ST_IRQ_ID   = 215,

    /* Block 27 Interrupts */
    PM_GPIO25_CHGED_ST_IRQ_ID   = 216,
    PM_GPIO26_CHGED_ST_IRQ_ID   = 217,
    PM_GPIO27_CHGED_ST_IRQ_ID   = 218,
    PM_GPIO28_CHGED_ST_IRQ_ID   = 219,
    PM_GPIO29_CHGED_ST_IRQ_ID   = 220,
    PM_GPIO30_CHGED_ST_IRQ_ID   = 221,
    PM_GPIO31_CHGED_ST_IRQ_ID   = 222,
    PM_GPIO32_CHGED_ST_IRQ_ID   = 223,

    /* Block 28 Interrupts */
    PM_GPIO33_CHGED_ST_IRQ_ID   = 224,
    PM_GPIO34_CHGED_ST_IRQ_ID   = 225,
    PM_GPIO35_CHGED_ST_IRQ_ID   = 226,
    PM_GPIO36_CHGED_ST_IRQ_ID   = 227,
    PM_GPIO37_CHGED_ST_IRQ_ID   = 228,
    PM_GPIO38_CHGED_ST_IRQ_ID   = 229,
    PM_GPIO39_CHGED_ST_IRQ_ID   = 230,
    PM_GPIO40_CHGED_ST_IRQ_ID   = 231,
}pm_irq_id_type;

#endif