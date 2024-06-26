/*
 * Copyright (c) 2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2017 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**
 * @file fxls8471q.h
 * @brief The fxls8471q.h file contains the register definitions for fxls8471q sensor driver.
 */

#ifndef FXLS8471Q_H_
#define FXLS8471Q_H_

/**
 **  FXLS8471Q I2C Address
 */
#define   FXLS8471Q_I2C_ADDRESS_SA0_0_SA1_0     0x1E  /*fxls8471q Address - SA0 = 0 and SA1 = 0*/
#define   FXLS8471Q_I2C_ADDRESS_SA0_1_SA1_0     0x1D  /*fxls8471q Address - SA0 = 1 and SA1 = 0*/
#define   FXLS8471Q_I2C_ADDRESS_SA0_0_SA1_1     0x1C  /*fxls8471q Address - SA0 = 0 and SA1 = 1*/
#define   FXLS8471Q_I2C_ADDRESS_SA0_1_SA1_1     0x1F  /*fxls8471q Address - SA0 = 1 and SA1 = 1*/

/**
 **
 **  fxls8471q Sensor Internal Registers
 */
enum {
    FXLS8471Q_STATUS =               0x00, /* FMODE = 0, real time status  */
    FXLS8471Q_F_STATUS =             0x00, /* FMODE > 0, FIFO status  */
    FXLS8471Q_OUT_X_MSB =            0x01, /* data registers  */
    FXLS8471Q_OUT_X_LSB =            0x02, /* data registers  */
    FXLS8471Q_OUT_Y_MSB =            0x03, /* data registers  */
    FXLS8471Q_OUT_Y_LSB =            0x04, /* data registers  */
    FXLS8471Q_OUT_Z_MSB =            0x05, /* data registers  */
    FXLS8471Q_OUT_Z_LSB =            0x06, /* data registers  */
    FXLS8471Q_F_SETUP =              0x09, /* FIFO setup  */
    FXLS8471Q_TRIG_CFG =             0x0A, /* Map of FIFO data capture events  */
    FXLS8471Q_SYSMOD =               0x0B, /* SYSMOD System Mode register  */
    FXLS8471Q_INT_SOURCE =           0x0C, /* INT_SOURCE System Interrupt Status register  */
    FXLS8471Q_WHO_AM_I =             0x0D, /* WHO_AM_I Device ID register  */
    FXLS8471Q_XYZ_DATA_CFG =         0x0E, /* XYZ_DATA_CFG register  */
    FXLS8471Q_HP_FILTER_CUTOFF =     0x0F, /* FXLS8471Q only  */
    FXLS8471Q_PL_STATUS =            0x10, /* PL_STATUS Portrait/Landscape Status register  */
    FXLS8471Q_PL_CFG =               0x11, /* Portrait/Landscape Configuration register  */
    FXLS8471Q_PL_COUNT =             0x12, /* Portrait/Landscape Debounce register  */
    FXLS8471Q_PL_BF_ZCOMP =          0x13, /* PL_BF_ZCOMP Back/Front and Z Compensation register  */
    FXLS8471Q_PL_THS_REG  =          0x14, /* P_L_THS_REG Portrait/Landscape Threshold and Hysteresis register  */
    FXLS8471Q_A_FFMT_CFG =           0x15, /* A_FFMT_CFG Freefall/Motion Configuration register  */
    FXLS8471Q_A_FFMT_SRC =           0x16, /* A_FFMT_SRC Freefall/Motion Source register  */
    FXLS8471Q_A_FFMT_THS =           0x17, /* A_FFMT_THS Freefall and Motion Threshold register  */
    FXLS8471Q_A_FFMT_COUNT =         0x18, /* A_FFMT_COUNT Debounce register  */
    FXLS8471Q_TRANSIENT_CFG =        0x1D, /* Transient_CFG register  */
    FXLS8471Q_TRANSIENT_SRC =        0x1E, /* TRANSIENT_SRC register  */
    FXLS8471Q_TRANSIENT_THS =        0x1F, /* TRANSIENT_THS register  */
    FXLS8471Q_TRANSIENT_COUNT =      0x20, /* TRANSIENT_COUNT register  */
    FXLS8471Q_PULSE_CFG =            0x21, /* PULSE_CFG Pulse Configuration register  */
    FXLS8471Q_PULSE_SRC =            0x22, /* PULSE_SRC Pulse Source register  */
    FXLS8471Q_PULSE_THSX =           0x23, /* PULSE_THSX, Y, Z Pulse Threshold for X, Y and Z registers  */
    FXLS8471Q_PULSE_THSY =           0x24, /* PULSE_THSX, Y, Z Pulse Threshold for X, Y and Z registers  */
    FXLS8471Q_PULSE_THSZ =           0x25, /* PULSE_THSX, Y, Z Pulse Threshold for X, Y and Z registers  */
    FXLS8471Q_PULSE_TMLT =           0x26, /* PULSE_TMLT Pulse Time Window 1 register  */
    FXLS8471Q_PULSE_LTCY =           0x27, /* PULSE_LTCY Pulse Latency Timer register  */
    FXLS8471Q_PULSE_WIND =           0x28, /* PULSE_WIND register (Read/Write)  */
    FXLS8471Q_ASLP_COUNT =           0x29, /* ASLP_COUNT, Auto-WAKE/SLEEP Detection register (Read/Write)  */
    FXLS8471Q_CTRL_REG1 =            0x2A, /* CTRL_REG1 System Control 1 register  */
    FXLS8471Q_CTRL_REG2 =            0x2B, /* CTRL_REG2 System Control 1 register  */
    FXLS8471Q_CTRL_REG3 =            0x2C, /* CTRL_REG3 Interrupt Control register  */
    FXLS8471Q_CTRL_REG4 =            0x2D, /* CTRL_REG4 Interrupt Enable register (Read/Write)  */
    FXLS8471Q_CTRL_REG5 =            0x2E, /* CTRL_REG5 Interrupt Configuration register (Read/Write)  */
    FXLS8471Q_OFF_X =                0x2F, /* OFF_X Offset Correction X register  */
    FXLS8471Q_OFF_Y =                0x30, /* OFF_Y Offset Correction Y register  */
    FXLS8471Q_OFF_Z =                0x31, /* OFF_Z Offset Correction Z register  */
    FXLS8471Q_A_VECM_CFG =           0x5F, /* A_VECM_CFG Acceleration vectormagnitude configuration register */
    FXLS8471Q_A_VECM_THS_MSB =       0x60, /* A_VECM_THS_MSB Acceleration vectormagnitude threshold MSB */
    FXLS8471Q_A_VECM_THS_LSB =       0x61, /* A_VECM_THS_LSB Acceleration vectormagnitude threshold LSB */
    FXLS8471Q_A_VECM_CNT =           0x62, /* A_VECM_CNT Acceleration vectormagnitude  debounce count */
    FXLS8471Q_A_VECM_INITX_MSB =     0x63, /* A_VECM_INITX_MSB Acceleration vectormagnitude  X-axis reference value MSB */
    FXLS8471Q_A_VECM_INITX_LSB =     0x64, /* A_VECM_INITX_LSB Acceleration vectormagnitude  X-axis reference value LSB */
    FXLS8471Q_A_VECM_INITY_MSB =     0x65, /* A_VECM_INITY_MSB Acceleration vectormagnitude  Y-axis reference value MSB */
    FXLS8471Q_A_VECM_INITY_LSB =     0x66, /* A_VECM_INITY_LSB Acceleration vectormagnitude  y-axis reference value LSB */
    FXLS8471Q_A_VECM_INITZ_MSB =     0x67, /* A_VECM_INITZ_MSB Acceleration vectormagnitude  Y-axis reference value MSB */
    FXLS8471Q_A_VECM_INITZ_LSB =     0x68, /* A_VECM_INITZ_LSB Acceleration vectormagnitude  Z-axis reference value LSB */
    FXLS8471Q_A_FFMT_THS_X_MSB =     0x73, /* A_FFMT_THS_X_MSB X-axis FMT threshold MSB	*/
    FXLS8471Q_A_FFMT_THS_X_LSB =     0x74, /* A_FFMT_THS_X_LSB X-axis FMT threshold LSB	*/
    FXLS8471Q_A_FFMT_THS_Y_MSB =     0x75, /* A_FFMT_THS_Y_MSB Y-axis FMT threshold MSB	*/
    FXLS8471Q_A_FFMT_THS_Y_LSB =     0x76, /* A_FFMT_THS_Y_LSB Y-axis FMT threshold LSB	*/
    FXLS8471Q_A_FFMT_THS_Z_MSB =     0x77, /* A_FFMT_THS_Z_MSB Z-axis FMT threshold MSB	*/
    FXLS8471Q_A_FFMT_THS_Z_LSB =     0x78, /* A_FFMT_THS_Z_LSB Z-axis FMT threshold LSB	*/
};


/*--------------------------------
** Register: STATUS
** Enum: FXLS8471Q_STATUS
** --
** Offset : 0x00 - Real time status.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                   xdr : 1; /*  - X-axis new Data Available.                                               */

        uint8_t                   ydr : 1; /*  - Y-axis new Data Available.                                               */

        uint8_t                   zdr : 1; /*  - Z-axis new Data Available.                                               */

        uint8_t                 zyxdr : 1; /*  - X, Y, Z-axis new Data Ready.                                             */

        uint8_t                   xow : 1; /*  - X-axis Data Overwrite.                                                   */

        uint8_t                   yow : 1; /*  - Y-axis Data Overwrite.                                                   */

        uint8_t                   zow : 1; /*  - Z-axis Data Overwrite                                                    */

        uint8_t                 zyxow : 1; /*  - X, Y, Z-axis Data Overwrite.                                             */

    } b;
    uint8_t w;
} FXLS8471Q_STATUS_t;


/*
** STATUS - Bit field mask definitions
*/
#define FXLS8471Q_STATUS_XDR_MASK     ((uint8_t) 0x01)
#define FXLS8471Q_STATUS_XDR_SHIFT    ((uint8_t)    0)

#define FXLS8471Q_STATUS_YDR_MASK     ((uint8_t) 0x02)
#define FXLS8471Q_STATUS_YDR_SHIFT    ((uint8_t)    1)

#define FXLS8471Q_STATUS_ZDR_MASK     ((uint8_t) 0x04)
#define FXLS8471Q_STATUS_ZDR_SHIFT    ((uint8_t)    2)

#define FXLS8471Q_STATUS_ZYXDR_MASK   ((uint8_t) 0x08)
#define FXLS8471Q_STATUS_ZYXDR_SHIFT  ((uint8_t)    3)

#define FXLS8471Q_STATUS_XOW_MASK     ((uint8_t) 0x10)
#define FXLS8471Q_STATUS_XOW_SHIFT    ((uint8_t)    4)

#define FXLS8471Q_STATUS_YOW_MASK     ((uint8_t) 0x20)
#define FXLS8471Q_STATUS_YOW_SHIFT    ((uint8_t)    5)

#define FXLS8471Q_STATUS_ZOW_MASK     ((uint8_t) 0x40)
#define FXLS8471Q_STATUS_ZOW_SHIFT    ((uint8_t)    6)

#define FXLS8471Q_STATUS_ZYXOW_MASK   ((uint8_t) 0x80)
#define FXLS8471Q_STATUS_ZYXOW_SHIFT  ((uint8_t)    7)


/*
** STATUS - Bit field value definitions
*/
#define FXLS8471Q_STATUS_XDR_XDATAREADY        ((uint8_t) 0x01)  /*  A new X-axis data is ready.                          */
#define FXLS8471Q_STATUS_YDR_YDATAREADY        ((uint8_t) 0x02)  /*  A new Y-axis data is ready.                          */
#define FXLS8471Q_STATUS_ZDR_ZDATAREADY        ((uint8_t) 0x04)  /*  A new Z-axis data is ready.                          */
#define FXLS8471Q_STATUS_ZYXDR_ZYXDATAREADY    ((uint8_t) 0x08)  /*  A new set of XYZ data is ready.                      */
#define FXLS8471Q_STATUS_XOW_XDATAOW           ((uint8_t) 0x10)  /*  Previous X-axis data was overwritten by new X-axis   */
                                                                 /*  data before it was read.                             */
#define FXLS8471Q_STATUS_YOW_YDATAOW           ((uint8_t) 0x20)  /*  Previous Y-axis data was overwritten by new X-axis   */
                                                                 /*  data before it was read.                             */
#define FXLS8471Q_STATUS_ZOW_ZDATAOW           ((uint8_t) 0x40)  /*  Previous Z-axis data was overwritten by new X-axis   */
                                                                 /*  data before it was read.                             */
#define FXLS8471Q_STATUS_ZYXOW_XYZDATAOW       ((uint8_t) 0x80)  /*  Previous X, Y, or Z data was overwritten by new X,   */
                                                                 /*  Y, or Z data before it was read.                     */
/*------------------------------*/



/*--------------------------------
** Register: F_STATUS
** Enum: FXLS8471Q_F_STATUS
** --
** Offset : 0x00 - FIFO STATUS Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                 f_cnt : 6; /*  - FIFO sample counter. 00_0001 to 10_0000 indicates 1 to 32 samples stored */
                                           /*  in FIFO.                                                                   */

        uint8_t           f_wmrk_flag : 1; /*  - FIFO watermark flag.                                                     */

        uint8_t                 f_ovf : 1; /*  - FIFO overflow flag.                                                      */

    } b;
    uint8_t w;
} FXLS8471Q_F_STATUS_t;


/*
** F_STATUS - Bit field mask definitions
*/
#define FXLS8471Q_F_STATUS_F_CNT_MASK         ((uint8_t) 0x3F)
#define FXLS8471Q_F_STATUS_F_CNT_SHIFT        ((uint8_t)    0)

#define FXLS8471Q_F_STATUS_F_WMRK_FLAG_MASK   ((uint8_t) 0x40)
#define FXLS8471Q_F_STATUS_F_WMRK_FLAG_SHIFT  ((uint8_t)    6)

#define FXLS8471Q_F_STATUS_F_OVF_MASK         ((uint8_t) 0x80)
#define FXLS8471Q_F_STATUS_F_OVF_SHIFT        ((uint8_t)    7)


/*
** F_STATUS - Bit field value definitions
*/
#define FXLS8471Q_F_STATUS_F_WMRK_FLAG_NOTDETECTED ((uint8_t) 0x00)  /*  No FIFO watermark events detected.               */
#define FXLS8471Q_F_STATUS_F_WMRK_FLAG_DETECTED  ((uint8_t) 0x40)  /*  FIFO Watermark event detected. FIFO sample count   */
                                                                   /*  is greater than watermark value.                   */
#define FXLS8471Q_F_STATUS_F_OVF_NOTDETECTED     ((uint8_t) 0x00)  /*  No FIFO overflow events detected.                  */
#define FXLS8471Q_F_STATUS_F_OVF_DETECTED        ((uint8_t) 0x80)  /*  FIFO event detected; FIFO has overflowed.          */
/*------------------------------*/



/*--------------------------------
** Register: OUT_X_MSB
** Enum: FXLS8471Q_OUT_X_MSB
** --
** Offset : 0x01 - Bits 4-11 of 12-bit X Axis current sample data.
** ------------------------------*/
typedef uint8_t FXLS8471Q_OUT_X_MSB_t;


/*--------------------------------
** Register: OUT_X_LSB
** Enum: FXLS8471Q_OUT_X_LSB
** --
** Offset : 0x02 - Bits 0-3 of 12-bit X Axis current sample data.
** ------------------------------*/
typedef uint8_t FXLS8471Q_OUT_X_LSB_t;



/*--------------------------------
** Register: OUT_Y_MSB
** Enum: FXLS8471Q_OUT_Y_MSB
** --
** Offset : 0x03 - Bits 4-11 of 12-bit Y Axis current sample data.
** ------------------------------*/
typedef uint8_t FXLS8471Q_OUT_Y_MSB_t;


/*--------------------------------
** Register: OUT_Y_LSB
** Enum: FXLS8471Q_OUT_Y_LSB
** --
** Offset : 0x04 - Bits 0-3 of 12-bit Y Axis current sample data.
** ------------------------------*/
typedef uint8_t FXLS8471Q_OUT_Y_LSB_t;



/*--------------------------------
** Register: OUT_Z_MSB
** Enum: FXLS8471Q_OUT_Z_MSB
** --
** Offset : 0x05 - Bits 4-11 of 12-bit Z Axis current sample data.
** ------------------------------*/
typedef uint8_t FXLS8471Q_OUT_Z_MSB_t;


/*--------------------------------
** Register: OUT_Z_LSB
** Enum: FXLS8471Q_OUT_Z_LSB
** --
** Offset : 0x06 - Bits 0-3 of 12-bit Z Axis current sample data.
** ------------------------------*/
typedef uint8_t FXLS8471Q_OUT_Z_LSB_t;



/*--------------------------------
** Register: F_SETUP
** Enum: FXLS8471Q_F_SETUP
** --
** Offset : 0x09 - FIFO Setup Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                f_wmrk : 6; /*  - FIFO Event Sample Count Watermark. These bits set the number of FIFO     */
                                           /*  samples required to trigger a watermark interrupt.                         */

        uint8_t                f_mode : 2; /*  - FIFO buffer overflow mode.                                               */

    } b;
    uint8_t w;
} FXLS8471Q_F_SETUP_t;


/*
** F_SETUP - Bit field mask definitions
*/
#define FXLS8471Q_F_SETUP_F_WMRK_MASK   ((uint8_t) 0x3F)
#define FXLS8471Q_F_SETUP_F_WMRK_SHIFT  ((uint8_t)    0)

#define FXLS8471Q_F_SETUP_F_MODE_MASK   ((uint8_t) 0xC0)
#define FXLS8471Q_F_SETUP_F_MODE_SHIFT  ((uint8_t)    6)


/*
** F_SETUP - Bit field value definitions
*/
#define FXLS8471Q_F_SETUP_F_MODE_FIFODISABLED   ((uint8_t) 0x00)  /*  FIFO is disabled.                                   */
#define FXLS8471Q_F_SETUP_F_MODE_FIFOMOSTRECENT ((uint8_t) 0x40)  /*  FIFO contains the Most Recent samples when          */
                                                                  /*  overflowed (circular buffer).                       */
#define FXLS8471Q_F_SETUP_F_MODE_FIFOSTOP       ((uint8_t) 0x80)  /*  FIFO stops accepting new samples when overflowed.   */
#define FXLS8471Q_F_SETUP_F_MODE_TRIGGERMODE    ((uint8_t) 0xc0)  /*  The FIFO will be in a circular mode up to the       */
                                                                  /*  number of samples in the watermark. The FIFO will   */
                                                                  /*  be in a circular mode until the trigger event       */
                                                                  /*  occurs.                                             */
/*------------------------------*/



/*--------------------------------
** Register: TRIG_CFG
** Enum: FXLS8471Q_TRIG_CFG
** --
** Offset : 0x0A - Trigger Configuration Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t _reserved_            : 1;
        uint8_t           trig_a_vecm : 1;
        uint8_t            trig_ff_mt : 1; /*  - Freefall/Motion trigger bit.                                             */

        uint8_t            trig_pulse : 1; /*  - Pulse interrupt trigger bit.                                             */

        uint8_t           trig_lndprt : 1; /*  - Landscape/Portrait Orientation interrupt trigger bit.                    */

        uint8_t            trig_trans : 1; /*  - Transient interrupt trigger bit.                                         */

    } b;
    uint8_t w;
} FXLS8471Q_TRIG_CFG_t;


/*
** TRIG_CFG - Bit field mask definitions
*/
#define FXLS8471Q_TRIG_CFG_TRIG_A_VECM_MASK   ((uint8_t) 0x02)
#define FXLS8471Q_TRIG_CFG_TRIG_A_VECM_SHIFT  ((uint8_t)    1)

#define FXLS8471Q_TRIG_CFG_TRIG_FF_MT_MASK    ((uint8_t) 0x04)
#define FXLS8471Q_TRIG_CFG_TRIG_FF_MT_SHIFT   ((uint8_t)    2)

#define FXLS8471Q_TRIG_CFG_TRIG_PULSE_MASK    ((uint8_t) 0x08)
#define FXLS8471Q_TRIG_CFG_TRIG_PULSE_SHIFT   ((uint8_t)    3)

#define FXLS8471Q_TRIG_CFG_TRIG_LNDPRT_MASK   ((uint8_t) 0x10)
#define FXLS8471Q_TRIG_CFG_TRIG_LNDPRT_SHIFT  ((uint8_t)    4)

#define FXLS8471Q_TRIG_CFG_TRIG_TRANS_MASK    ((uint8_t) 0x20)
#define FXLS8471Q_TRIG_CFG_TRIG_TRANS_SHIFT   ((uint8_t)    5)


/*
** TRIG_CFG - Bit field value definitions
*/
#define FXLS8471Q_TRIG_CFG_TRIG_A_VECM_EN        ((uint8_t) 0x02)  /*  Enable the vector-magnitude FIFO trigger           */
#define FXLS8471Q_TRIG_CFG_TRIG_A_VECM_DIS       ((uint8_t) 0x00)  /*  Disable the vector-magnitude FIFO trigger          */
#define FXLS8471Q_TRIG_CFG_TRIG_FF_MT_CLEARED    ((uint8_t) 0x00)  /*  Freefall/Motion trigger bit is cleared.            */
#define FXLS8471Q_TRIG_CFG_TRIG_FF_MT_SET        ((uint8_t) 0x04)  /*  Pulse interrupt trigger bit bit is set.            */
#define FXLS8471Q_TRIG_CFG_TRIG_PULSE_CLEARED    ((uint8_t) 0x00)  /*  Pulse interrupt trigger bit is cleared.            */
#define FXLS8471Q_TRIG_CFG_TRIG_PULSE_SET        ((uint8_t) 0x08)  /*  Pulse interrupt trigger bit is set.                */
#define FXLS8471Q_TRIG_CFG_TRIG_LNDPRT_CLEARED   ((uint8_t) 0x00)  /*  Landscape/Portrait Orientation interrupt trigger   */
                                                                   /*  bit is cleared.                                    */
#define FXLS8471Q_TRIG_CFG_TRIG_LNDPRT_SET       ((uint8_t) 0x10)  /*  Landscape/Portrait Orientation interrupt trigger   */
                                                                   /*  bit is set.                                        */
#define FXLS8471Q_TRIG_CFG_TRIG_TRANS_CLEARED    ((uint8_t) 0x00)  /*  Transient interrupt trigger bit is cleared.        */
#define FXLS8471Q_TRIG_CFG_TRIG_TRANS_SET        ((uint8_t) 0x20)  /*  Transient interrupt trigger bit is set.            */
/*------------------------------*/



/*--------------------------------
** Register: SYSMOD
** Enum: FXLS8471Q_SYSMOD
** --
** Offset : 0x0B - System Mode Register indicates the current device operating mode.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                sysmod : 2; /*  - System mode data bits.                                                   */

        uint8_t                   fgt : 5; /*  - Number of ODR time units since FGERR was asserted. Reset when FGERR      */
                                           /*  Cleared.                                                                   */

        uint8_t                 fgerr : 1; /*  - FIFO Gate Error.                                                         */

    } b;
    uint8_t w;
} FXLS8471Q_SYSMOD_t;


/*
** SYSMOD - Bit field mask definitions
*/
#define FXLS8471Q_SYSMOD_SYSMOD_MASK   ((uint8_t) 0x03)
#define FXLS8471Q_SYSMOD_SYSMOD_SHIFT  ((uint8_t)    0)

#define FXLS8471Q_SYSMOD_FGT_MASK      ((uint8_t) 0x7C)
#define FXLS8471Q_SYSMOD_FGT_SHIFT     ((uint8_t)    2)

#define FXLS8471Q_SYSMOD_FGERR_MASK    ((uint8_t) 0x80)
#define FXLS8471Q_SYSMOD_FGERR_SHIFT   ((uint8_t)    7)


/*
** SYSMOD - Bit field value definitions
*/
#define FXLS8471Q_SYSMOD_SYSMOD_STANDBY        ((uint8_t) 0x00)  /*  STANDBY Mode.                                        */
#define FXLS8471Q_SYSMOD_SYSMOD_WAKE           ((uint8_t) 0x01)  /*  ACTIVE Mode.                                         */
#define FXLS8471Q_SYSMOD_SYSMOD_SLEEP          ((uint8_t) 0x02)  /*  SLEEP Mode.                                          */
#define FXLS8471Q_SYSMOD_FGERR_NTDETECTED      ((uint8_t) 0x00)  /*  No FIFO Gate Error detected.                         */
#define FXLS8471Q_SYSMOD_FGERR_DETECTED        ((uint8_t) 0x80)  /*  FIFO Gate Error was detected.                        */
/*------------------------------*/



/*--------------------------------
** Register: INT_SOURCE
** Enum: FXLS8471Q_INT_SOURCE
** --
** Offset : 0x0C - System Interrupt Status Register. The bits that are set (logic �1�) indicate which function has asserted its interrupt and conversely, bits that are cleared (logic �0�) indicate which function has not asserted its interrupt.
** ------------------------------*/
typedef union {
    struct {
        uint8_t              src_drdy : 1; /*  Data Ready Interrupt bit status.                                           */

        uint8_t            src_a_vecm : 1; /*  Accelerometer vector-magnitude interrupt status bit                        */

        uint8_t             src_ff_mt : 1; /*  Freefall/Motion interrupt status bit.                                      */

        uint8_t             src_pulse : 1; /*  Pulse interrupt status bit.                                                */

        uint8_t            src_lndprt : 1; /*  Landscape/Portrait Orientation interrupt status bit.                       */

        uint8_t             src_trans : 1; /*  Transient interrupt status bit.                                            */

        uint8_t              src_fifo : 1; /*  FIFO interrupt status bit.                                                 */

        uint8_t              src_aslp : 1; /*  Auto-SLEEP/WAKE interrupt status bit.                                      */

    } b;
    uint8_t w;
} FXLS8471Q_INT_SOURCE_t;


/*
** INT_SOURCE - Bit field mask definitions
*/
#define FXLS8471Q_INT_SOURCE_SRC_DRDY_MASK     ((uint8_t) 0x01)
#define FXLS8471Q_INT_SOURCE_SRC_DRDY_SHIFT    ((uint8_t)    0)

#define FXLS8471Q_INT_SOURCE_SRC_A_VECM_MASK   ((uint8_t) 0x02)
#define FXLS8471Q_INT_SOURCE_SRC_A_VECM_SHIFT  ((uint8_t)    1)

#define FXLS8471Q_INT_SOURCE_SRC_FF_MT_MASK    ((uint8_t) 0x04)
#define FXLS8471Q_INT_SOURCE_SRC_FF_MT_SHIFT   ((uint8_t)    2)

#define FXLS8471Q_INT_SOURCE_SRC_PULSE_MASK    ((uint8_t) 0x08)
#define FXLS8471Q_INT_SOURCE_SRC_PULSE_SHIFT   ((uint8_t)    3)

#define FXLS8471Q_INT_SOURCE_SRC_LNDPRT_MASK   ((uint8_t) 0x10)
#define FXLS8471Q_INT_SOURCE_SRC_LNDPRT_SHIFT  ((uint8_t)    4)

#define FXLS8471Q_INT_SOURCE_SRC_TRANS_MASK    ((uint8_t) 0x20)
#define FXLS8471Q_INT_SOURCE_SRC_TRANS_SHIFT   ((uint8_t)    5)

#define FXLS8471Q_INT_SOURCE_SRC_FIFO_MASK     ((uint8_t) 0x40)
#define FXLS8471Q_INT_SOURCE_SRC_FIFO_SHIFT    ((uint8_t)    6)

#define FXLS8471Q_INT_SOURCE_SRC_ASLP_MASK     ((uint8_t) 0x80)
#define FXLS8471Q_INT_SOURCE_SRC_ASLP_SHIFT    ((uint8_t)    7)


/*------------------------------*/



/*--------------------------------
** Register: WHO_AM_I
** Enum: FXLS8471Q_WHO_AM_I
** --
** Offset : 0x0D - Fixed Device ID Number.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                whoami; /*  The WHO_AM_I register contains the device identifier which is factory          */
                                       /*  programmed.                                                                    */

    } b;
    uint8_t w;
} FXLS8471Q_WHO_AM_I_t;


/*
** WHO_AM_I - Bit field mask definitions
*/
#define FXLS8471Q_WHO_AM_I_WHOAMI_MASK   ((uint8_t) 0xFF)
#define FXLS8471Q_WHO_AM_I_WHOAMI_SHIFT  ((uint8_t)    0)


/*------------------------------*/


/*
** WHO_AM_I - Bit field value definitions
*/

#define FXLS8471Q_WHO_AM_I_WHOAMI_VALUE          ((uint8_t) 0x6a)  /*  Device identifier for FXLS8471       */


/*--------------------------------
** Register: XYZ_DATA_CFG
** Enum: FXLS8471Q_XYZ_DATA_CFG
** --
** Offset : 0x0E - XYZ Data Configuration Register. sets the dynamic range and sets the high-pass filter for the output data.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                    fs : 2; /*  Output buffer data format full scale.                                      */

        uint8_t _reserved_            : 2;
        uint8_t               hpf_out : 1; /*  Enable High-Pass output data.                                              */

    } b;
    uint8_t w;
} FXLS8471Q_XYZ_DATA_CFG_t;


/*
** XYZ_DATA_CFG - Bit field mask definitions
*/
#define FXLS8471Q_XYZ_DATA_CFG_FS_MASK        ((uint8_t) 0x03)
#define FXLS8471Q_XYZ_DATA_CFG_FS_SHIFT       ((uint8_t)    0)

#define FXLS8471Q_XYZ_DATA_CFG_HPF_OUT_MASK   ((uint8_t) 0x10)
#define FXLS8471Q_XYZ_DATA_CFG_HPF_OUT_SHIFT  ((uint8_t)    4)


/*
** XYZ_DATA_CFG - Bit field value definitions
*/
#define FXLS8471Q_XYZ_DATA_CFG_FS_FS_RANGE_2G        ((uint8_t) 0x00)  /*  Output buffer data full scale range is 2g.     */
#define FXLS8471Q_XYZ_DATA_CFG_FS_FS_RANGE_4G        ((uint8_t) 0x01)  /*  Output buffer data full scale range is 4g.     */
#define FXLS8471Q_XYZ_DATA_CFG_FS_FS_RANGE_8G        ((uint8_t) 0x02)  /*  Output buffer data full scale range is 8g.     */
#define FXLS8471Q_XYZ_DATA_CFG_HPF_OUT_DISABLED      ((uint8_t) 0x00)  /*  High-Pass output data disabled.                */
#define FXLS8471Q_XYZ_DATA_CFG_HPF_OUT_ENABLED       ((uint8_t) 0x10)  /*  High-Pass output data enabled.                 */
/*------------------------------*/



/*--------------------------------
** Register: HP_FILTER_CUTOFF
** Enum: FXLS8471Q_HP_FILTER_CUTOFF
** --
** Offset : 0x0F - HP_FILTER_CUTOFF High-Pass Filter Register. This register sets the high-pass filter cutoff frequency for removal of the offset and slower changing acceleration data.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                   sel : 2; /*  HPF Cutoff frequency selection.                                            */

        uint8_t _reserved_            : 2;
        uint8_t          pulse_lpf_en : 1; /*  Enable Low-Pass Filter for Pulse Processing Function.                      */

        uint8_t         pulse_hpf_byp : 1; /*  Bypass High-Pass Filter for Pulse Processing Function.                     */

    } b;
    uint8_t w;
} FXLS8471Q_HP_FILTER_CUTOFF_t;


/*
** HP_FILTER_CUTOFF - Bit field mask definitions
*/
#define FXLS8471Q_HP_FILTER_CUTOFF_SEL_MASK             ((uint8_t) 0x03)
#define FXLS8471Q_HP_FILTER_CUTOFF_SEL_SHIFT            ((uint8_t)    0)

#define FXLS8471Q_HP_FILTER_CUTOFF_PULSE_LPF_EN_MASK    ((uint8_t) 0x10)
#define FXLS8471Q_HP_FILTER_CUTOFF_PULSE_LPF_EN_SHIFT   ((uint8_t)    4)

#define FXLS8471Q_HP_FILTER_CUTOFF_PULSE_HPF_BYP_MASK   ((uint8_t) 0x20)
#define FXLS8471Q_HP_FILTER_CUTOFF_PULSE_HPF_BYP_SHIFT  ((uint8_t)    5)


/*
** HP_FILTER_CUTOFF - Bit field value definitions
*/
#define FXLS8471Q_HP_FILTER_CUTOFF_PULSE_LPF_EN_DISABLED ((uint8_t) 0x00)  /*  LPF disabled for Pulse Processing.         */
#define FXLS8471Q_HP_FILTER_CUTOFF_PULSE_LPF_EN_ENABLED  ((uint8_t) 0x10)  /*  LPF Enabled for Pulse Processing.          */
#define FXLS8471Q_HP_FILTER_CUTOFF_PULSE_HPF_BYP_DISABLED ((uint8_t) 0x00)  /*  HPF enabled for Pulse Processing.         */
#define FXLS8471Q_HP_FILTER_CUTOFF_PULSE_HPF_BYP_ENABLED ((uint8_t) 0x20)  /*  HPF Bypassed for Pulse Processing.         */
/*------------------------------*/



/*--------------------------------
** Register: PL_STATUS
** Enum: FXLS8471Q_PL_STATUS
** --
** Offset : 0x10 - Portrait/Landscape Status Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                 bafro : 1; /*  Back or Front orientation.                                                 */

        uint8_t                  lapo : 2; /*  Landscape/Portrait orientation.                                            */

        uint8_t _reserved_            : 3;
        uint8_t                    lo : 1; /*  Z-Tilt Angle Lockout.                                                      */

        uint8_t                 newlp : 1; /*  Landscape/Portrait status change flag.                                     */

    } b;
    uint8_t w;
} FXLS8471Q_PL_STATUS_t;


/*
** PL_STATUS - Bit field mask definitions
*/
#define FXLS8471Q_PL_STATUS_BAFRO_MASK   ((uint8_t) 0x01)
#define FXLS8471Q_PL_STATUS_BAFRO_SHIFT  ((uint8_t)    0)

#define FXLS8471Q_PL_STATUS_LAPO_MASK    ((uint8_t) 0x06)
#define FXLS8471Q_PL_STATUS_LAPO_SHIFT   ((uint8_t)    1)

#define FXLS8471Q_PL_STATUS_LO_MASK      ((uint8_t) 0x40)
#define FXLS8471Q_PL_STATUS_LO_SHIFT     ((uint8_t)    6)

#define FXLS8471Q_PL_STATUS_NEWLP_MASK   ((uint8_t) 0x80)
#define FXLS8471Q_PL_STATUS_NEWLP_SHIFT  ((uint8_t)    7)


/*
** PL_STATUS - Bit field value definitions
*/
#define FXLS8471Q_PL_STATUS_BAFRO_FRONT           ((uint8_t) 0x00)  /*  Front: Equipment is in the front facing           */
                                                                    /*  orientation.                                      */
#define FXLS8471Q_PL_STATUS_BAFRO_BACK            ((uint8_t) 0x01)  /*  Back: Equipment is in the back facing             */
                                                                    /*  orientation.                                      */
#define FXLS8471Q_PL_STATUS_LAPO_UP               ((uint8_t) 0x00)  /*  Portrait Up: Equipment standing vertically in the */
                                                                    /*  normal orientation.                               */
#define FXLS8471Q_PL_STATUS_LAPO_DOWN             ((uint8_t) 0x02)  /*  Portrait Down: Equipment standing vertically in   */
                                                                    /*  the inverted orientation.                         */
#define FXLS8471Q_PL_STATUS_LAPO_RIGHT            ((uint8_t) 0x04)  /*  Landscape Right: Equipment is in landscape mode   */
                                                                    /*  to the right.                                     */
#define FXLS8471Q_PL_STATUS_LAPO_LEFT             ((uint8_t) 0x06)  /*  Landscape Left: Equipment is in landscape mode to */
                                                                    /*  the left.                                         */
#define FXLS8471Q_PL_STATUS_LO_NOTDETECTED        ((uint8_t) 0x00)  /*  Lockout condition has not been detected.          */
#define FXLS8471Q_PL_STATUS_LO_DETECTED           ((uint8_t) 0x40)  /*  Z-Tilt lockout trip angle has been exceeded.      */
                                                                    /*  Lockout has been detected.                        */
#define FXLS8471Q_PL_STATUS_NEWLP_NOCHANGE        ((uint8_t) 0x00)  /*  No change.                                        */
#define FXLS8471Q_PL_STATUS_NEWLP_DETECTED        ((uint8_t) 0x80)  /*  BAFRO and/or LAPO and/or Z-Tilt lockout value has */
                                                                    /*  changed.                                          */
/*------------------------------*/



/*--------------------------------
** Register: PL_CFG
** Enum: FXLS8471Q_PL_CFG
** --
** Offset : 0x11 - Portrait/Landscape Configuration Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t              reserved : 6; /*  - Bits 5-0 are reserved, will always read 0.                               */

        uint8_t                 pl_en : 1; /*  - Portrait/Landscape Detection Enable.                                     */

        uint8_t                dbcntm : 1; /*  - Debounce counter mode selection.                                         */

    } b;
    uint8_t w;
} FXLS8471Q_PL_CFG_t;


/*
** PL_CFG - Bit field mask definitions
*/
#define FXLS8471Q_PL_CFG_RESERVED_MASK   ((uint8_t) 0x3F)
#define FXLS8471Q_PL_CFG_RESERVED_SHIFT  ((uint8_t)    0)

#define FXLS8471Q_PL_CFG_PL_EN_MASK      ((uint8_t) 0x40)
#define FXLS8471Q_PL_CFG_PL_EN_SHIFT     ((uint8_t)    6)

#define FXLS8471Q_PL_CFG_DBCNTM_MASK     ((uint8_t) 0x80)
#define FXLS8471Q_PL_CFG_DBCNTM_SHIFT    ((uint8_t)    7)


/*
** PL_CFG - Bit field value definitions
*/
#define FXLS8471Q_PL_CFG_PL_EN_DISABLED        ((uint8_t) 0x00)  /*  Portrait/Landscape Detection is Disabled.            */
#define FXLS8471Q_PL_CFG_PL_EN_ENABLED         ((uint8_t) 0x40)  /*  Portrait/Landscape Detection is Enabled.             */
#define FXLS8471Q_PL_CFG_DBCNTM_DEC            ((uint8_t) 0x00)  /*  Decrements debounce whenever condition of interest   */
                                                                 /*  is no longer valid.                                  */
#define FXLS8471Q_PL_CFG_DBCNTM_CLR            ((uint8_t) 0x80)  /*  Clears counter whenever condition of interest is no  */
                                                                 /*  longer valid.                                        */
/*------------------------------*/



/*--------------------------------
** Register: PL_COUNT
** Enum: FXLS8471Q_PL_COUNT
** --
** Offset : 0x12 - Portrait/Landscape Debounce Counter.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                 dbcne; /*  - Debounce Count value.                                                        */

    } b;
    uint8_t w;
} FXLS8471Q_PL_COUNT_t;


/*
** PL_COUNT - Bit field mask definitions
*/
#define FXLS8471Q_PL_COUNT_DBCNE_MASK   ((uint8_t) 0xFF)
#define FXLS8471Q_PL_COUNT_DBCNE_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: PL_BF_ZCOMP
** Enum: FXLS8471Q_PL_BF_ZCOMP
** --
** Offset : 0x13 - Back/Front and Z Compensation Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                 zlock : 3; /*  - Z-Lock Angle Fixed Threshold.                                            */

        uint8_t _reserved_            : 3;
        uint8_t                  bkfr : 2; /*  - Back Front Trip Angle Fixed Threshold.                                   */

    } b;
    uint8_t w;
} FXLS8471Q_PL_BF_ZCOMP_t;


/*
** PL_BF_ZCOMP - Bit field mask definitions
*/
#define FXLS8471Q_PL_BF_ZCOMP_ZLOCK_MASK   ((uint8_t) 0x07)
#define FXLS8471Q_PL_BF_ZCOMP_ZLOCK_SHIFT  ((uint8_t)    0)

#define FXLS8471Q_PL_BF_ZCOMP_BKFR_MASK    ((uint8_t) 0xC0)
#define FXLS8471Q_PL_BF_ZCOMP_BKFR_SHIFT   ((uint8_t)    6)


/*
** PL_BF_ZCOMP - Bit field value definitions
*/
#define FXLS8471Q_PL_BF_ZCOMP_ZLOCK_MIN13_6_MAX14_5 ((uint8_t) 0x00)
#define FXLS8471Q_PL_BF_ZCOMP_ZLOCK_MIN17_1_MAX18_2 ((uint8_t) 0x01)
#define FXLS8471Q_PL_BF_ZCOMP_ZLOCK_MIN20_7_MAX22_0 ((uint8_t) 0x02)
#define FXLS8471Q_PL_BF_ZCOMP_ZLOCK_MIN24_4_MAX25_9 ((uint8_t) 0x03)
#define FXLS8471Q_PL_BF_ZCOMP_ZLOCK_MIN28_1_MAX30_0 ((uint8_t) 0x04)
#define FXLS8471Q_PL_BF_ZCOMP_ZLOCK_MIN32_0_MAX34_2 ((uint8_t) 0x05)
#define FXLS8471Q_PL_BF_ZCOMP_ZLOCK_MIN36_1_MAX38_7 ((uint8_t) 0x06)
#define FXLS8471Q_PL_BF_ZCOMP_ZLOCK_MIN40_4_MAX43_4 ((uint8_t) 0x07)
#define FXLS8471Q_PL_BF_ZCOMP_BKFR_80_280           ((uint8_t) 0x00)
#define FXLS8471Q_PL_BF_ZCOMP_BKFR_75_285           ((uint8_t) 0x40)
#define FXLS8471Q_PL_BF_ZCOMP_BKFR_70_290           ((uint8_t) 0x80)
#define FXLS8471Q_PL_BF_ZCOMP_BKFR_65_295           ((uint8_t) 0xc0)
/*------------------------------*/



/*--------------------------------
** Register: PL_THS_REG
** Enum: FXLS8471Q_PL_THS_REG
** --
** Offset : 0x14 - Portrait/Landscape Threshold and Hysteresis Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                   hys : 3; /*  - Hysteresis, This is a fixed angle added to the threshold angle for a     */
                                           /*  smoother transition from Portrait to Landscape and Landscape to Portrait.  */

        uint8_t                pl_ths : 5; /*  - Portrait/Landscape Fixed Threshold angle.                                */

    } b;
    uint8_t w;
} FXLS8471Q_PL_THS_REG_t;


/*
** PL_THS_REG - Bit field mask definitions
*/
#define FXLS8471Q_PL_THS_REG_HYS_MASK      ((uint8_t) 0x07)
#define FXLS8471Q_PL_THS_REG_HYS_SHIFT     ((uint8_t)    0)

#define FXLS8471Q_PL_THS_REG_PL_THS_MASK   ((uint8_t) 0xF8)
#define FXLS8471Q_PL_THS_REG_PL_THS_SHIFT  ((uint8_t)    3)


/*
** PL_THS_REG - Bit field value definitions
*/
#define FXLS8471Q_PL_THS_REG_HYS_45_45             ((uint8_t) 0x00)
#define FXLS8471Q_PL_THS_REG_HYS_49_41             ((uint8_t) 0x01)
#define FXLS8471Q_PL_THS_REG_HYS_52_38             ((uint8_t) 0x02)
#define FXLS8471Q_PL_THS_REG_HYS_56_34             ((uint8_t) 0x03)
#define FXLS8471Q_PL_THS_REG_HYS_59_31             ((uint8_t) 0x04)
#define FXLS8471Q_PL_THS_REG_HYS_62_28             ((uint8_t) 0x05)
#define FXLS8471Q_PL_THS_REG_HYS_66_24             ((uint8_t) 0x06)
#define FXLS8471Q_PL_THS_REG_HYS_69_21             ((uint8_t) 0x07)
#define FXLS8471Q_PL_THS_REG_PL_THS_15             ((uint8_t) 0x38)
#define FXLS8471Q_PL_THS_REG_PL_THS_20             ((uint8_t) 0x48)
#define FXLS8471Q_PL_THS_REG_PL_THS_30             ((uint8_t) 0x60)
#define FXLS8471Q_PL_THS_REG_PL_THS_35             ((uint8_t) 0x68)
#define FXLS8471Q_PL_THS_REG_PL_THS_40             ((uint8_t) 0x78)
#define FXLS8471Q_PL_THS_REG_PL_THS_45             ((uint8_t) 0x80)
#define FXLS8471Q_PL_THS_REG_PL_THS_55             ((uint8_t) 0x98)
#define FXLS8471Q_PL_THS_REG_PL_THS_60             ((uint8_t) 0xa0)
#define FXLS8471Q_PL_THS_REG_PL_THS_70             ((uint8_t) 0xb8)
#define FXLS8471Q_PL_THS_REG_PL_THS_75             ((uint8_t) 0xc8)
/*------------------------------*/




/*--------------------------------
** Register: A_FFMT_CFG
** Enum: FXLS8471Q_A_FFMT_CFG
** --
** Offset : 0x15 - Freefall/Motion Configuration Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t              reserved : 3; /*  - Bits 2-0 are reserved, will always read 0.                               */

        uint8_t                  xefe : 1; /*  - Event flag enable on X event.                                            */

        uint8_t                  yefe : 1; /*  - Event flag enable on Y event.                                            */

        uint8_t                  zefe : 1; /*  - Event flag enable on Z event.                                            */

        uint8_t                   oae : 1; /*  - Motion detect / Freefall detect flag selection.                          */

        uint8_t                   ele : 1; /*  - Event Latch Enable.                                                      */

    } b;
    uint8_t w;
} FXLS8471Q_A_FFMT_CFG_t;


/*
** A_FFMT_CFG - Bit field mask definitions
*/
#define FXLS8471Q_A_FFMT_CFG_RESERVED_MASK   ((uint8_t) 0x07)
#define FXLS8471Q_A_FFMT_CFG_RESERVED_SHIFT  ((uint8_t)    0)

#define FXLS8471Q_A_FFMT_CFG_XEFE_MASK       ((uint8_t) 0x08)
#define FXLS8471Q_A_FFMT_CFG_XEFE_SHIFT      ((uint8_t)    3)

#define FXLS8471Q_A_FFMT_CFG_YEFE_MASK       ((uint8_t) 0x10)
#define FXLS8471Q_A_FFMT_CFG_YEFE_SHIFT      ((uint8_t)    4)

#define FXLS8471Q_A_FFMT_CFG_ZEFE_MASK       ((uint8_t) 0x20)
#define FXLS8471Q_A_FFMT_CFG_ZEFE_SHIFT      ((uint8_t)    5)

#define FXLS8471Q_A_FFMT_CFG_OAE_MASK        ((uint8_t) 0x40)
#define FXLS8471Q_A_FFMT_CFG_OAE_SHIFT       ((uint8_t)    6)

#define FXLS8471Q_A_FFMT_CFG_ELE_MASK        ((uint8_t) 0x80)
#define FXLS8471Q_A_FFMT_CFG_ELE_SHIFT       ((uint8_t)    7)


/*
** A_FFMT_CFG - Bit field value definitions
*/
#define FXLS8471Q_A_FFMT_CFG_XEFE_DISABLED         ((uint8_t) 0x00)  /*  Event detection disabled.                        */
#define FXLS8471Q_A_FFMT_CFG_XEFE_ENABLED          ((uint8_t) 0x08)  /*  Raise event flag on measured acceleration value  */
                                                                     /*  beyond preset threshold.                         */
#define FXLS8471Q_A_FFMT_CFG_YEFE_DISABLED         ((uint8_t) 0x00)  /*  Event detection disabled.                        */
#define FXLS8471Q_A_FFMT_CFG_YEFE_ENABLED          ((uint8_t) 0x10)  /*  Raise event flag on measured acceleration value  */
                                                                     /*  beyond preset threshold.                         */
#define FXLS8471Q_A_FFMT_CFG_ZEFE_DISABLED         ((uint8_t) 0x00)  /*  Event detection disabled.                        */
#define FXLS8471Q_A_FFMT_CFG_ZEFE_ENABLED          ((uint8_t) 0x20)  /*  Raise event flag on measured acceleration value  */
                                                                     /*  beyond preset threshold.                         */
#define FXLS8471Q_A_FFMT_CFG_OAE_FREEFALL          ((uint8_t) 0x00)  /*  Freefall Flag.                                   */
#define FXLS8471Q_A_FFMT_CFG_OAE_MOTION            ((uint8_t) 0x00)  /*  Motion Flag.                                     */
#define FXLS8471Q_A_FFMT_CFG_ELE_DISABLED          ((uint8_t) 0x00)  /*  Event flag latch disabled.                       */
#define FXLS8471Q_A_FFMT_CFG_ELE_ENABLED           ((uint8_t) 0x80)  /*  Event flag latch enabled.                        */
/*------------------------------*/



/*--------------------------------
** Register: A_FFMT_SRC
** Enum: FXLS8471Q_A_FFMT_SRC
** --
** Offset : 0x16 - Freefall/Motion Source Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                   xhp : 1; /*  - Event flag enable on X event.                                            */

        uint8_t                   xhe : 1; /*  - Event flag enable on Y event.                                            */

        uint8_t                   yhp : 1; /*  - Event flag enable on Z event.                                            */

        uint8_t                   yhe : 1; /*  - Motion detect / Freefall detect flag selection.                          */

        uint8_t                   zhp : 1; /*  - Event Latch Enable.                                                      */

        uint8_t                   zhe : 1; /*  - Event Latch Enable.                                                      */

        uint8_t _reserved_            : 1;
        uint8_t                    ea : 1; /*  - Event Latch Enable.                                                      */

    } b;
    uint8_t w;
} FXLS8471Q_A_FFMT_SRC_t;


/*
** A_FFMT_SRC - Bit field mask definitions
*/
#define FXLS8471Q_A_FFMT_SRC_XHP_MASK   ((uint8_t) 0x01)
#define FXLS8471Q_A_FFMT_SRC_XHP_SHIFT  ((uint8_t)    0)

#define FXLS8471Q_A_FFMT_SRC_XHE_MASK   ((uint8_t) 0x02)
#define FXLS8471Q_A_FFMT_SRC_XHE_SHIFT  ((uint8_t)    1)

#define FXLS8471Q_A_FFMT_SRC_YHP_MASK   ((uint8_t) 0x04)
#define FXLS8471Q_A_FFMT_SRC_YHP_SHIFT  ((uint8_t)    2)

#define FXLS8471Q_A_FFMT_SRC_YHE_MASK   ((uint8_t) 0x08)
#define FXLS8471Q_A_FFMT_SRC_YHE_SHIFT  ((uint8_t)    3)

#define FXLS8471Q_A_FFMT_SRC_ZHP_MASK   ((uint8_t) 0x10)
#define FXLS8471Q_A_FFMT_SRC_ZHP_SHIFT  ((uint8_t)    4)

#define FXLS8471Q_A_FFMT_SRC_ZHE_MASK   ((uint8_t) 0x20)
#define FXLS8471Q_A_FFMT_SRC_ZHE_SHIFT  ((uint8_t)    5)

#define FXLS8471Q_A_FFMT_SRC_EA_MASK    ((uint8_t) 0x80)
#define FXLS8471Q_A_FFMT_SRC_EA_SHIFT   ((uint8_t)    7)


/*
** A_FFMT_SRC - Bit field value definitions
*/
#define FXLS8471Q_A_FFMT_SRC_XHP_POSITIVE          ((uint8_t) 0x00)  /*  X event was Positive.                            */
#define FXLS8471Q_A_FFMT_SRC_XHP_NEGATIVE          ((uint8_t) 0x01)  /*  X event was Negative.                            */
#define FXLS8471Q_A_FFMT_SRC_XHE_NOTDETECTED       ((uint8_t) 0x00)  /*  No X Motion event detected.                      */
#define FXLS8471Q_A_FFMT_SRC_XHE_DETECTED          ((uint8_t) 0x02)  /*  X Motion has been detected.                      */
#define FXLS8471Q_A_FFMT_SRC_YHP_POSITIVE          ((uint8_t) 0x00)  /*  Y event was Positive.                            */
#define FXLS8471Q_A_FFMT_SRC_YHP_NEGATIVE          ((uint8_t) 0x04)  /*  Y event was Negative.                            */
#define FXLS8471Q_A_FFMT_SRC_YHE_NOTDETECTED       ((uint8_t) 0x00)  /*  No Y Motion event detected.                      */
#define FXLS8471Q_A_FFMT_SRC_YHE_DETECTED          ((uint8_t) 0x08)  /*  Y Motion has been detected.                      */
#define FXLS8471Q_A_FFMT_SRC_ZHP_POSITIVE          ((uint8_t) 0x00)  /*  Z event was Positive.                            */
#define FXLS8471Q_A_FFMT_SRC_ZHP_NEGATIVE          ((uint8_t) 0x10)  /*  Z event was Negative.                            */
#define FXLS8471Q_A_FFMT_SRC_ZHE_NOTDETECTED       ((uint8_t) 0x00)  /*  No Z Motion event detected.                      */
#define FXLS8471Q_A_FFMT_SRC_ZHE_DETECTED          ((uint8_t) 0x20)  /*  Z Motion has been detected.                      */
#define FXLS8471Q_A_FFMT_SRC_EA_NOTDETECTED        ((uint8_t) 0x00)  /*  No event flag has been asserted.                 */
#define FXLS8471Q_A_FFMT_SRC_EA_DETECTED           ((uint8_t) 0x80)  /*  one or more event flag has been asserted.        */
/*------------------------------*/



/*--------------------------------
** Register: A_FFMT_THS
** Enum: FXLS8471Q_A_FFMT_THS
** --
** Offset : 0x17 - Freefall and Motion Threshold Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                   ths : 7; /*  - Freefall /Motion Threshold.                                              */

        uint8_t                dbcntm : 1; /*  - Debounce counter mode selection.                                         */

    } b;
    uint8_t w;
} FXLS8471Q_A_FFMT_THS_t;


/*
** A_FFMT_THS - Bit field mask definitions
*/
#define FXLS8471Q_A_FFMT_THS_THS_MASK      ((uint8_t) 0x7F)
#define FXLS8471Q_A_FFMT_THS_THS_SHIFT     ((uint8_t)    0)

#define FXLS8471Q_A_FFMT_THS_DBCNTM_MASK   ((uint8_t) 0x80)
#define FXLS8471Q_A_FFMT_THS_DBCNTM_SHIFT  ((uint8_t)    7)


/*
** A_FFMT_THS - Bit field value definitions
*/
#define FXLS8471Q_A_FFMT_THS_DBCNTM_DEC            ((uint8_t) 0x00)  /*  Increments or decrements debounce.               */
#define FXLS8471Q_A_FFMT_THS_DBCNTM_CLR            ((uint8_t) 0x80)  /*  Increments or clears counter.                    */
/*------------------------------*/



/*--------------------------------
** Register: A_FFMT_COUNT
** Enum: FXLS8471Q_A_FFMT_COUNT
** --
** Offset : 0x18 - Debounce Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                     d; /*  - Count value.                                                                 */

    } b;
    uint8_t w;
} FXLS8471Q_A_FFMT_COUNT_t;


/*
** A_FFMT_COUNT - Bit field mask definitions
*/
#define FXLS8471Q_A_FFMT_COUNT_D_MASK   ((uint8_t) 0xFF)
#define FXLS8471Q_A_FFMT_COUNT_D_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: TRANSIENT_CFG
** Enum: FXLS8471Q_TRANSIENT_CFG
** --
** Offset : 0x1D - Transient_CFG Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t               hpf_byp : 1; /*  - Bypass High-Pass filter.                                                 */

        uint8_t                 xtefe : 1; /*  - Event flag enable on X transient acceleration greater than transient     */
                                           /*  threshold event.                                                           */

        uint8_t                 ytefe : 1; /*  - Event flag enable on Y transient acceleration greater than transient     */
                                           /*  threshold event.                                                           */

        uint8_t                 ztefe : 1; /*  - Event flag enable on Z transient acceleration greater than transient     */
                                           /*  threshold event.                                                           */

        uint8_t                   ele : 1; /*  - Transient event flags are latched into the TRANSIENT_SRC register.       */

        uint8_t              reserved : 3; /*  - Bits 7-5 are reserved, will always read 0.                               */

    } b;
    uint8_t w;
} FXLS8471Q_TRANSIENT_CFG_t;


/*
** TRANSIENT_CFG - Bit field mask definitions
*/
#define FXLS8471Q_TRANSIENT_CFG_HPF_BYP_MASK    ((uint8_t) 0x01)
#define FXLS8471Q_TRANSIENT_CFG_HPF_BYP_SHIFT   ((uint8_t)    0)

#define FXLS8471Q_TRANSIENT_CFG_XTEFE_MASK      ((uint8_t) 0x02)
#define FXLS8471Q_TRANSIENT_CFG_XTEFE_SHIFT     ((uint8_t)    1)

#define FXLS8471Q_TRANSIENT_CFG_YTEFE_MASK      ((uint8_t) 0x04)
#define FXLS8471Q_TRANSIENT_CFG_YTEFE_SHIFT     ((uint8_t)    2)

#define FXLS8471Q_TRANSIENT_CFG_ZTEFE_MASK      ((uint8_t) 0x08)
#define FXLS8471Q_TRANSIENT_CFG_ZTEFE_SHIFT     ((uint8_t)    3)

#define FXLS8471Q_TRANSIENT_CFG_ELE_MASK        ((uint8_t) 0x10)
#define FXLS8471Q_TRANSIENT_CFG_ELE_SHIFT       ((uint8_t)    4)

#define FXLS8471Q_TRANSIENT_CFG_RESERVED_MASK   ((uint8_t) 0xE0)
#define FXLS8471Q_TRANSIENT_CFG_RESERVED_SHIFT  ((uint8_t)    5)


/*
** TRANSIENT_CFG - Bit field value definitions
*/
#define FXLS8471Q_TRANSIENT_CFG_HPF_BYP_THROUGH       ((uint8_t) 0x00)  /*  Data to transient acceleration detection      */
                                                                        /*  block is through HPF.                         */
#define FXLS8471Q_TRANSIENT_CFG_HPF_BYP_BYPASS        ((uint8_t) 0x01)  /*  Data to transient acceleration detection      */
                                                                        /*  block is NOT through HPF.                     */
#define FXLS8471Q_TRANSIENT_CFG_XTEFE_DISABLED        ((uint8_t) 0x00)  /*  Event detection disabled.                     */
#define FXLS8471Q_TRANSIENT_CFG_XTEFE_ENABLED         ((uint8_t) 0x02)  /*  Raise event flag on measured acceleration     */
                                                                        /*  delta value greater than transient threshold. */
#define FXLS8471Q_TRANSIENT_CFG_YTEFE_DISABLED        ((uint8_t) 0x00)  /*  Event detection disabled.                     */
#define FXLS8471Q_TRANSIENT_CFG_YTEFE_ENABLED         ((uint8_t) 0x04)  /*  Raise event flag on measured acceleration     */
                                                                        /*  delta value greater than transient threshold. */
#define FXLS8471Q_TRANSIENT_CFG_ZTEFE_DISABLED        ((uint8_t) 0x00)  /*  Event detection disabled.                     */
#define FXLS8471Q_TRANSIENT_CFG_ZTEFE_ENABLED         ((uint8_t) 0x08)  /*  Raise event flag on measured acceleration     */
                                                                        /*  delta value greater than transient threshold. */
#define FXLS8471Q_TRANSIENT_CFG_ELE_DISABLED          ((uint8_t) 0x00)  /*  Event flag latch disabled.                    */
#define FXLS8471Q_TRANSIENT_CFG_ELE_ENABLED           ((uint8_t) 0x10)  /*  Event flag latch enabled.                     */
/*------------------------------*/



/*--------------------------------
** Register: TRANSIENT_SRC
** Enum: FXLS8471Q_TRANSIENT_SRC
** --
** Offset : 0x1E - Transient_SRC Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t           x_trans_pol : 1; /*  - Polarity of X Transient Event that triggered interrupt.                  */

        uint8_t                xtrans : 1; /*  - X transient event.                                                       */

        uint8_t           y_trans_pol : 1; /*  - Polarity of Y Transient Event that triggered interrupt.                  */

        uint8_t                ytrans : 1; /*  - Y transient event.                                                       */

        uint8_t           z_trans_pol : 1; /*  - Polarity of Z Transient Event that triggered interrupt.                  */

        uint8_t                ztrans : 1; /*  - Z transient event.                                                       */

        uint8_t                    ea : 1; /*  - Event Active Flag.                                                       */

    } b;
    uint8_t w;
} FXLS8471Q_TRANSIENT_SRC_t;


/*
** TRANSIENT_SRC - Bit field mask definitions
*/
#define FXLS8471Q_TRANSIENT_SRC_X_TRANS_POL_MASK   ((uint8_t) 0x01)
#define FXLS8471Q_TRANSIENT_SRC_X_TRANS_POL_SHIFT  ((uint8_t)    0)

#define FXLS8471Q_TRANSIENT_SRC_XTRANS_MASK        ((uint8_t) 0x02)
#define FXLS8471Q_TRANSIENT_SRC_XTRANS_SHIFT       ((uint8_t)    1)

#define FXLS8471Q_TRANSIENT_SRC_Y_TRANS_POL_MASK   ((uint8_t) 0x04)
#define FXLS8471Q_TRANSIENT_SRC_Y_TRANS_POL_SHIFT  ((uint8_t)    2)

#define FXLS8471Q_TRANSIENT_SRC_YTRANS_MASK        ((uint8_t) 0x08)
#define FXLS8471Q_TRANSIENT_SRC_YTRANS_SHIFT       ((uint8_t)    3)

#define FXLS8471Q_TRANSIENT_SRC_Z_TRANS_POL_MASK   ((uint8_t) 0x10)
#define FXLS8471Q_TRANSIENT_SRC_Z_TRANS_POL_SHIFT  ((uint8_t)    4)

#define FXLS8471Q_TRANSIENT_SRC_ZTRANS_MASK        ((uint8_t) 0x20)
#define FXLS8471Q_TRANSIENT_SRC_ZTRANS_SHIFT       ((uint8_t)    5)

#define FXLS8471Q_TRANSIENT_SRC_EA_MASK            ((uint8_t) 0x40)
#define FXLS8471Q_TRANSIENT_SRC_EA_SHIFT           ((uint8_t)    6)


/*
** TRANSIENT_SRC - Bit field value definitions
*/
#define FXLS8471Q_TRANSIENT_SRC_X_TRANS_POL_POSITIVE  ((uint8_t) 0x00)  /*  X event was Positive.                         */
#define FXLS8471Q_TRANSIENT_SRC_X_TRANS_POL_NEGATIVE  ((uint8_t) 0x01)  /*  X event was Negative.                         */
#define FXLS8471Q_TRANSIENT_SRC_XTRANS_NOTDETECTED    ((uint8_t) 0x00)  /*  no interrupt.                                 */
#define FXLS8471Q_TRANSIENT_SRC_XTRANS_DETECTED       ((uint8_t) 0x02)  /*  X Transient acceleration greater than the     */
                                                                        /*  value of TRANSIENT_THS event has occurred.    */
#define FXLS8471Q_TRANSIENT_SRC_Y_TRANS_POL_POSITIVE  ((uint8_t) 0x00)  /*  Y event was Positive.                         */
#define FXLS8471Q_TRANSIENT_SRC_Y_TRANS_POL_NEGATIVE  ((uint8_t) 0x04)  /*  Y event was Negative.                         */
#define FXLS8471Q_TRANSIENT_SRC_YTRANS_NOTDETECTED    ((uint8_t) 0x00)  /*  no interrupt.                                 */
#define FXLS8471Q_TRANSIENT_SRC_YTRANS_DETECTED       ((uint8_t) 0x08)  /*  Y Transient acceleration greater than the     */
                                                                        /*  value of TRANSIENT_THS event has occurred.    */
#define FXLS8471Q_TRANSIENT_SRC_Z_TRANS_POL_POSITIVE  ((uint8_t) 0x00)  /*  Z event was Positive.                         */
#define FXLS8471Q_TRANSIENT_SRC_Z_TRANS_POL_NEGATIVE  ((uint8_t) 0x10)  /*  Z event was Negative.                         */
#define FXLS8471Q_TRANSIENT_SRC_ZTRANS_NOTDETECTED    ((uint8_t) 0x00)  /*  no interrupt.                                 */
#define FXLS8471Q_TRANSIENT_SRC_ZTRANS_DETECTED       ((uint8_t) 0x20)  /*  Z Transient acceleration greater than the     */
                                                                        /*  value of TRANSIENT_THS event has occurred.    */
#define FXLS8471Q_TRANSIENT_SRC_EA_NOTDETECTED        ((uint8_t) 0x00)  /*  No event flag has been asserted.              */
#define FXLS8471Q_TRANSIENT_SRC_EA_DETECTED           ((uint8_t) 0x40)  /*  one or more event flag has been asserted.     */
/*------------------------------*/



/*--------------------------------
** Register: TRANSIENT_THS
** Enum: FXLS8471Q_TRANSIENT_THS
** --
** Offset : 0x1F - TRANSIENT_THS Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                   ths : 7; /*  - Transient Threshold.                                                     */

        uint8_t                dbcntm : 1; /*  - Debounce counter mode selection.                                         */

    } b;
    uint8_t w;
} FXLS8471Q_TRANSIENT_THS_t;


/*
** TRANSIENT_THS - Bit field mask definitions
*/
#define FXLS8471Q_TRANSIENT_THS_THS_MASK      ((uint8_t) 0x7F)
#define FXLS8471Q_TRANSIENT_THS_THS_SHIFT     ((uint8_t)    0)

#define FXLS8471Q_TRANSIENT_THS_DBCNTM_MASK   ((uint8_t) 0x80)
#define FXLS8471Q_TRANSIENT_THS_DBCNTM_SHIFT  ((uint8_t)    7)


/*
** TRANSIENT_THS - Bit field value definitions
*/
#define FXLS8471Q_TRANSIENT_THS_DBCNTM_DEC            ((uint8_t) 0x00)  /*  Increments or decrements debounce.            */
#define FXLS8471Q_TRANSIENT_THS_DBCNTM_CLR            ((uint8_t) 0x80)  /*  Increments or clears counter.                 */
/*------------------------------*/



/*--------------------------------
** Register: TRANSIENT_COUNT
** Enum: FXLS8471Q_TRANSIENT_COUNT
** --
** Offset : 0x20 - TRANSIENT_COUNT Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                     d; /*  - Count value.                                                                 */

    } b;
    uint8_t w;
} FXLS8471Q_TRANSIENT_COUNT_t;


/*
** TRANSIENT_COUNT - Bit field mask definitions
*/
#define FXLS8471Q_TRANSIENT_COUNT_D_MASK   ((uint8_t) 0xFF)
#define FXLS8471Q_TRANSIENT_COUNT_D_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: PULSE_CFG
** Enum: FXLS8471Q_PULSE_CFG
** --
** Offset : 0x21 - Pulse Configuration Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                xspefe : 1; /*  - Event flag enable on single pulse event on X-axis.                       */

        uint8_t                xdpefe : 1; /*  - Event flag enable on double pulse event on X-axis.                       */

        uint8_t                yspefe : 1; /*  - Event flag enable on single pulse event on Y-axis.                       */

        uint8_t                ydpefe : 1; /*  - Event flag enable on double pulse event on Y-axis.                       */

        uint8_t                zspefe : 1; /*  - Event flag enable on single pulse event on Z-axis.                       */

        uint8_t                zdpefe : 1; /*  - Event flag enable on double pulse event on Z-axis.                       */

        uint8_t                   ele : 1; /*  - Pulse event flags are latched into the PULSE_SRC register.               */

        uint8_t                   dpa : 1; /*  - Double Pulse Abort.                                                      */

    } b;
    uint8_t w;
} FXLS8471Q_PULSE_CFG_t;


/*
** PULSE_CFG - Bit field mask definitions
*/
#define FXLS8471Q_PULSE_CFG_XSPEFE_MASK   ((uint8_t) 0x01)
#define FXLS8471Q_PULSE_CFG_XSPEFE_SHIFT  ((uint8_t)    0)

#define FXLS8471Q_PULSE_CFG_XDPEFE_MASK   ((uint8_t) 0x02)
#define FXLS8471Q_PULSE_CFG_XDPEFE_SHIFT  ((uint8_t)    1)

#define FXLS8471Q_PULSE_CFG_YSPEFE_MASK   ((uint8_t) 0x04)
#define FXLS8471Q_PULSE_CFG_YSPEFE_SHIFT  ((uint8_t)    2)

#define FXLS8471Q_PULSE_CFG_YDPEFE_MASK   ((uint8_t) 0x08)
#define FXLS8471Q_PULSE_CFG_YDPEFE_SHIFT  ((uint8_t)    3)

#define FXLS8471Q_PULSE_CFG_ZSPEFE_MASK   ((uint8_t) 0x10)
#define FXLS8471Q_PULSE_CFG_ZSPEFE_SHIFT  ((uint8_t)    4)

#define FXLS8471Q_PULSE_CFG_ZDPEFE_MASK   ((uint8_t) 0x20)
#define FXLS8471Q_PULSE_CFG_ZDPEFE_SHIFT  ((uint8_t)    5)

#define FXLS8471Q_PULSE_CFG_ELE_MASK      ((uint8_t) 0x40)
#define FXLS8471Q_PULSE_CFG_ELE_SHIFT     ((uint8_t)    6)

#define FXLS8471Q_PULSE_CFG_DPA_MASK      ((uint8_t) 0x80)
#define FXLS8471Q_PULSE_CFG_DPA_SHIFT     ((uint8_t)    7)


/*
** PULSE_CFG - Bit field value definitions
*/
#define FXLS8471Q_PULSE_CFG_XSPEFE_DISABLED       ((uint8_t) 0x00)  /*  Event detection disabled.                         */
#define FXLS8471Q_PULSE_CFG_XSPEFE_ENABLED        ((uint8_t) 0x01)  /*  Event detection enabled.                          */
#define FXLS8471Q_PULSE_CFG_XDPEFE_DISABLED       ((uint8_t) 0x00)  /*  Event detection disabled.                         */
#define FXLS8471Q_PULSE_CFG_XDPEFE_ENABLED        ((uint8_t) 0x02)  /*  Event detection enabled.                          */
#define FXLS8471Q_PULSE_CFG_YSPEFE_DISABLED       ((uint8_t) 0x00)  /*  Event detection disabled.                         */
#define FXLS8471Q_PULSE_CFG_YSPEFE_ENABLED        ((uint8_t) 0x04)  /*  Event detection enabled.                          */
#define FXLS8471Q_PULSE_CFG_YDPEFE_DISABLED       ((uint8_t) 0x00)  /*  Event detection disabled.                         */
#define FXLS8471Q_PULSE_CFG_YDPEFE_ENABLED        ((uint8_t) 0x08)  /*  Event detection enabled.                          */
#define FXLS8471Q_PULSE_CFG_ZSPEFE_DISABLED       ((uint8_t) 0x00)  /*  Event detection disabled.                         */
#define FXLS8471Q_PULSE_CFG_ZSPEFE_ENABLED        ((uint8_t) 0x10)  /*  Event detection enabled.                          */
#define FXLS8471Q_PULSE_CFG_ZDPEFE_DISABLED       ((uint8_t) 0x00)  /*  Event detection disabled.                         */
#define FXLS8471Q_PULSE_CFG_ZDPEFE_ENABLED        ((uint8_t) 0x20)  /*  Event detection enabled.                          */
#define FXLS8471Q_PULSE_CFG_ELE_DISABLED          ((uint8_t) 0x00)  /*  Event flag latch disabled.                        */
#define FXLS8471Q_PULSE_CFG_ELE_ENABLED           ((uint8_t) 0x40)  /*  Event flag latch enabled.                         */
#define FXLS8471Q_PULSE_CFG_DPA_DISABLED          ((uint8_t) 0x00)  /*  Double Pulse detection is not aborted if the      */
                                                                    /*  start of a pulse is detected.                     */
#define FXLS8471Q_PULSE_CFG_DPA_ENABLED           ((uint8_t) 0x80)  /*  Double tap detection is aborted if the start of a */
                                                                    /*  pulse is detected.                                */
/*------------------------------*/



/*--------------------------------
** Register: PULSE_SRC
** Enum: FXLS8471Q_PULSE_SRC
** --
** Offset : 0x22 - Pulse Source Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                  polx : 1; /*  - Pulse polarity of X-axis Event.                                          */

        uint8_t                  poly : 1; /*  - Pulse polarity of Y-axis Event.                                          */

        uint8_t                  polz : 1; /*  - Pulse polarity of Z-axis Event.                                          */

        uint8_t                   dpe : 1; /*  - Double pulse on first event.                                             */

        uint8_t                   axx : 1; /*  - X-axis event.                                                            */

        uint8_t                   axy : 1; /*  - Y-axis event.                                                            */

        uint8_t                   axz : 1; /*  - Z-axis event.                                                            */

        uint8_t                    ea : 1; /*  - Event Active Flag.                                                       */

    } b;
    uint8_t w;
} FXLS8471Q_PULSE_SRC_t;


/*
** PULSE_SRC - Bit field mask definitions
*/
#define FXLS8471Q_PULSE_SRC_POLX_MASK   ((uint8_t) 0x01)
#define FXLS8471Q_PULSE_SRC_POLX_SHIFT  ((uint8_t)    0)

#define FXLS8471Q_PULSE_SRC_POLY_MASK   ((uint8_t) 0x02)
#define FXLS8471Q_PULSE_SRC_POLY_SHIFT  ((uint8_t)    1)

#define FXLS8471Q_PULSE_SRC_POLZ_MASK   ((uint8_t) 0x04)
#define FXLS8471Q_PULSE_SRC_POLZ_SHIFT  ((uint8_t)    2)

#define FXLS8471Q_PULSE_SRC_DPE_MASK    ((uint8_t) 0x08)
#define FXLS8471Q_PULSE_SRC_DPE_SHIFT   ((uint8_t)    3)

#define FXLS8471Q_PULSE_SRC_AXX_MASK    ((uint8_t) 0x10)
#define FXLS8471Q_PULSE_SRC_AXX_SHIFT   ((uint8_t)    4)

#define FXLS8471Q_PULSE_SRC_AXY_MASK    ((uint8_t) 0x20)
#define FXLS8471Q_PULSE_SRC_AXY_SHIFT   ((uint8_t)    5)

#define FXLS8471Q_PULSE_SRC_AXZ_MASK    ((uint8_t) 0x40)
#define FXLS8471Q_PULSE_SRC_AXZ_SHIFT   ((uint8_t)    6)

#define FXLS8471Q_PULSE_SRC_EA_MASK     ((uint8_t) 0x80)
#define FXLS8471Q_PULSE_SRC_EA_SHIFT    ((uint8_t)    7)


/*
** PULSE_SRC - Bit field value definitions
*/
#define FXLS8471Q_PULSE_SRC_POLX_POSITIVE         ((uint8_t) 0x00)  /*  Pulse Event that triggered interrupt was          */
                                                                    /*  Positive.                                         */
#define FXLS8471Q_PULSE_SRC_POLX_NEGATIVE         ((uint8_t) 0x01)  /*  Pulse Event that triggered interrupt was          */
                                                                    /*  negative.                                         */
#define FXLS8471Q_PULSE_SRC_POLY_POSITIVE         ((uint8_t) 0x00)  /*  Pulse Event that triggered interrupt was          */
                                                                    /*  Positive.                                         */
#define FXLS8471Q_PULSE_SRC_POLY_NEGATIVE         ((uint8_t) 0x02)  /*  Pulse Event that triggered interrupt was          */
                                                                    /*  negative.                                         */
#define FXLS8471Q_PULSE_SRC_POLZ_POSITIVE         ((uint8_t) 0x00)  /*  Pulse Event that triggered interrupt was          */
                                                                    /*  Positive.                                         */
#define FXLS8471Q_PULSE_SRC_POLZ_NEGATIVE         ((uint8_t) 0x04)  /*  Pulse Event that triggered interrupt was          */
                                                                    /*  negative.                                         */
#define FXLS8471Q_PULSE_SRC_DPE_SINGLEPULSE       ((uint8_t) 0x00)  /*  Single Pulse Event triggered interrupt.           */
#define FXLS8471Q_PULSE_SRC_DPE_DOUBLEPULSE       ((uint8_t) 0x08)  /*  Double Pulse event triggered interrupt.           */
#define FXLS8471Q_PULSE_SRC_AXX_NOTDETECTED       ((uint8_t) 0x00)  /*  No interrupt.                                     */
#define FXLS8471Q_PULSE_SRC_AXX_DETECTED          ((uint8_t) 0x10)  /*  X-axis event has occurred.                        */
#define FXLS8471Q_PULSE_SRC_AXY_NOTDETECTED       ((uint8_t) 0x00)  /*  No interrupt.                                     */
#define FXLS8471Q_PULSE_SRC_AXY_DETECTED          ((uint8_t) 0x20)  /*  Y-axis event has occurred.                        */
#define FXLS8471Q_PULSE_SRC_AXZ_NOTDETECTED       ((uint8_t) 0x00)  /*  No interrupt.                                     */
#define FXLS8471Q_PULSE_SRC_AXZ_DETECTED          ((uint8_t) 0x40)  /*  Z-axis event has occurred.                        */
#define FXLS8471Q_PULSE_SRC_EA_NOTDETECTED        ((uint8_t) 0x00)  /*  No interrupt has been generated.                  */
#define FXLS8471Q_PULSE_SRC_EA_DETECTED           ((uint8_t) 0x80)  /*  One or more event flag has been asserted.         */
/*------------------------------*/



/*--------------------------------
** Register: PULSE_THSX
** Enum: FXLS8471Q_PULSE_THSX
** --
** Offset : 0x23 - Pulse Threshold for X.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                  thsx : 7; /*  - Pulse Threshold on X-axis.                                               */

        uint8_t              reserved : 1; /*  - Bit 8 is reserved, will always read 0.                                   */

    } b;
    uint8_t w;
} FXLS8471Q_PULSE_THSX_t;


/*
** PULSE_THSX - Bit field mask definitions
*/
#define FXLS8471Q_PULSE_THSX_THSX_MASK       ((uint8_t) 0x7F)
#define FXLS8471Q_PULSE_THSX_THSX_SHIFT      ((uint8_t)    0)

#define FXLS8471Q_PULSE_THSX_RESERVED_MASK   ((uint8_t) 0x80)
#define FXLS8471Q_PULSE_THSX_RESERVED_SHIFT  ((uint8_t)    7)


/*------------------------------*/



/*--------------------------------
** Register: PULSE_THSY
** Enum: FXLS8471Q_PULSE_THSY
** --
** Offset : 0x24 - Pulse Threshold for Y.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                  thsy : 7; /*  - Pulse Threshold on Y-axis.                                               */

        uint8_t              reserved : 1; /*  - Bit 8 is reserved, will always read 0.                                   */

    } b;
    uint8_t w;
} FXLS8471Q_PULSE_THSY_t;


/*
** PULSE_THSY - Bit field mask definitions
*/
#define FXLS8471Q_PULSE_THSY_THSY_MASK       ((uint8_t) 0x7F)
#define FXLS8471Q_PULSE_THSY_THSY_SHIFT      ((uint8_t)    0)

#define FXLS8471Q_PULSE_THSY_RESERVED_MASK   ((uint8_t) 0x80)
#define FXLS8471Q_PULSE_THSY_RESERVED_SHIFT  ((uint8_t)    7)


/*------------------------------*/



/*--------------------------------
** Register: PULSE_THSZ
** Enum: FXLS8471Q_PULSE_THSZ
** --
** Offset : 0x25 - Pulse Threshold for Z.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                  thsz : 7; /*  - Pulse Threshold on Z-axis.                                               */

        uint8_t              reserved : 1; /*  - Bit 8 is reserved, will always read 0.                                   */

    } b;
    uint8_t w;
} FXLS8471Q_PULSE_THSZ_t;


/*
** PULSE_THSZ - Bit field mask definitions
*/
#define FXLS8471Q_PULSE_THSZ_THSZ_MASK       ((uint8_t) 0x7F)
#define FXLS8471Q_PULSE_THSZ_THSZ_SHIFT      ((uint8_t)    0)

#define FXLS8471Q_PULSE_THSZ_RESERVED_MASK   ((uint8_t) 0x80)
#define FXLS8471Q_PULSE_THSZ_RESERVED_SHIFT  ((uint8_t)    7)


/*------------------------------*/



/*--------------------------------
** Register: PULSE_TMLT
** Enum: FXLS8471Q_PULSE_TMLT
** --
** Offset : 0x26 - Pulse Time Window 1 Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                  tmlt; /*  - Pulse Time Limit.                                                            */

    } b;
    uint8_t w;
} FXLS8471Q_PULSE_TMLT_t;


/*
** PULSE_TMLT - Bit field mask definitions
*/
#define FXLS8471Q_PULSE_TMLT_TMLT_MASK   ((uint8_t) 0xFF)
#define FXLS8471Q_PULSE_TMLT_TMLT_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: PULSE_LTCY
** Enum: FXLS8471Q_PULSE_LTCY
** --
** Offset : 0x27 - Pulse Latency Timer Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                  ltcy; /*  - Latency Time Limit.                                                          */

    } b;
    uint8_t w;
} FXLS8471Q_PULSE_LTCY_t;


/*
** PULSE_LTCY - Bit field mask definitions
*/
#define FXLS8471Q_PULSE_LTCY_LTCY_MASK   ((uint8_t) 0xFF)
#define FXLS8471Q_PULSE_LTCY_LTCY_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: PULSE_WIND
** Enum: FXLS8471Q_PULSE_WIND
** --
** Offset : 0x28 - Second Pulse Time Window Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                  wind; /*  - Second Pulse Time Window.                                                    */

    } b;
    uint8_t w;
} FXLS8471Q_PULSE_WIND_t;


/*
** PULSE_WIND - Bit field mask definitions
*/
#define FXLS8471Q_PULSE_WIND_WIND_MASK   ((uint8_t) 0xFF)
#define FXLS8471Q_PULSE_WIND_WIND_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: ASLP_COUNT
** Enum: FXLS8471Q_ASLP_COUNT
** --
** Offset : 0x29 - Auto-WAKE/SLEEP count Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                     d; /*  - Duration value.                                                              */

    } b;
    uint8_t w;
} FXLS8471Q_ASLP_COUNT_t;


/*
** ASLP_COUNT - Bit field mask definitions
*/
#define FXLS8471Q_ASLP_COUNT_D_MASK   ((uint8_t) 0xFF)
#define FXLS8471Q_ASLP_COUNT_D_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: CTRL_REG1
** Enum: FXLS8471Q_CTRL_REG1
** --
** Offset : 0x2A - System Control 1 Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                  mode : 1; /*  - Full Scale selection.                                                    */

        uint8_t                f_read : 1; /*  - Fast Read mode.                                                          */

        uint8_t                lnoise : 1; /*  - Reduced noise reduced Maximum range mode.                                */

        uint8_t                    dr : 3; /*  - Data rate selection.                                                     */

        uint8_t             aslp_rate : 2; /*  - Configures the Auto-WAKE sample frequency when the device is in SLEEP    */
                                           /*  Mode.                                                                      */

    } b;
    uint8_t w;
} FXLS8471Q_CTRL_REG1_t;


/*
** CTRL_REG1 - Bit field mask definitions
*/
#define FXLS8471Q_CTRL_REG1_MODE_MASK        ((uint8_t) 0x01)
#define FXLS8471Q_CTRL_REG1_MODE_SHIFT       ((uint8_t)    0)

#define FXLS8471Q_CTRL_REG1_F_READ_MASK      ((uint8_t) 0x02)
#define FXLS8471Q_CTRL_REG1_F_READ_SHIFT     ((uint8_t)    1)

#define FXLS8471Q_CTRL_REG1_LNOISE_MASK      ((uint8_t) 0x04)
#define FXLS8471Q_CTRL_REG1_LNOISE_SHIFT     ((uint8_t)    2)

#define FXLS8471Q_CTRL_REG1_DR_MASK          ((uint8_t) 0x38)
#define FXLS8471Q_CTRL_REG1_DR_SHIFT         ((uint8_t)    3)

#define FXLS8471Q_CTRL_REG1_ASLP_RATE_MASK   ((uint8_t) 0xC0)
#define FXLS8471Q_CTRL_REG1_ASLP_RATE_SHIFT  ((uint8_t)    6)


/*
** CTRL_REG1 - Bit field value definitions
*/
#define FXLS8471Q_CTRL_REG1_MODE_STANDBY          ((uint8_t) 0x00)  /*  STANDBY mode.                                     */
#define FXLS8471Q_CTRL_REG1_MODE_ACTIVE           ((uint8_t) 0x01)  /*  ACTIVE mode.                                      */
#define FXLS8471Q_CTRL_REG1_F_READ_NORMAL         ((uint8_t) 0x00)  /*  Normal mode.                                      */
#define FXLS8471Q_CTRL_REG1_F_READ_FASTREAD       ((uint8_t) 0x02)  /*  Fast Read Mode.                                   */
#define FXLS8471Q_CTRL_REG1_LNOISE_NORMAL         ((uint8_t) 0x00)  /*  Normal mode.                                      */
#define FXLS8471Q_CTRL_REG1_LNOISE_REDUCED        ((uint8_t) 0x04)  /*  Reduced Noise mode.                               */
#define FXLS8471Q_CTRL_REG1_DR_800HZ              ((uint8_t) 0x00)  /*  800HZ ODR.                                        */
#define FXLS8471Q_CTRL_REG1_DR_400HZ              ((uint8_t) 0x08)  /*  400HZ ODR.                                        */
#define FXLS8471Q_CTRL_REG1_DR_200HZ              ((uint8_t) 0x10)  /*  200HZ ODR.                                        */
#define FXLS8471Q_CTRL_REG1_DR_100HZ              ((uint8_t) 0x18)  /*  100HZ ODR.                                        */
#define FXLS8471Q_CTRL_REG1_DR_50HZ               ((uint8_t) 0x20)  /*  50HZ ODR.                                         */
#define FXLS8471Q_CTRL_REG1_DR_12DOT5HZ           ((uint8_t) 0x28)  /*  12.5HZ ODR.                                       */
#define FXLS8471Q_CTRL_REG1_DR_6DOT25HZ           ((uint8_t) 0x30)  /*  6.25HZ ODR.                                       */
#define FXLS8471Q_CTRL_REG1_DR_1DOT56HZ           ((uint8_t) 0x38)  /*  1.56HZ ODR.                                       */
#define FXLS8471Q_CTRL_REG1_ASLP_RATE_50HZ        ((uint8_t) 0x00)  /*  800HZ.                                            */
#define FXLS8471Q_CTRL_REG1_ASLP_RATE_12DOT5HZ    ((uint8_t) 0x40)  /*  12.5HZ.                                           */
#define FXLS8471Q_CTRL_REG1_ASLP_RATE_6DOT25HZ    ((uint8_t) 0x80)  /*  6.25HZ.                                           */
#define FXLS8471Q_CTRL_REG1_ASLP_RATE_1DOT56HZ    ((uint8_t) 0xc0)  /*  1.56HZ.                                           */
/*------------------------------*/



/*--------------------------------
** Register: CTRL_REG2
** Enum: FXLS8471Q_CTRL_REG2
** --
** Offset : 0x2B - System Control 2 Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                  mods : 2; /*  - ACTIVE mode power scheme selection.                                      */

        uint8_t                  slpe : 1; /*  - Auto-SLEEP enable.                                                       */

        uint8_t                 smods : 2; /*  - SLEEP mode power scheme selection.                                       */

        uint8_t _reserved_            : 1;
        uint8_t                   rst : 1; /*  - Software Reset.                                                          */

        uint8_t                    st : 1; /*  - Self-Test Enable.                                                        */

    } b;
    uint8_t w;
} FXLS8471Q_CTRL_REG2_t;


/*
** CTRL_REG2 - Bit field mask definitions
*/
#define FXLS8471Q_CTRL_REG2_MODS_MASK    ((uint8_t) 0x03)
#define FXLS8471Q_CTRL_REG2_MODS_SHIFT   ((uint8_t)    0)

#define FXLS8471Q_CTRL_REG2_SLPE_MASK    ((uint8_t) 0x04)
#define FXLS8471Q_CTRL_REG2_SLPE_SHIFT   ((uint8_t)    2)

#define FXLS8471Q_CTRL_REG2_SMODS_MASK   ((uint8_t) 0x18)
#define FXLS8471Q_CTRL_REG2_SMODS_SHIFT  ((uint8_t)    3)

#define FXLS8471Q_CTRL_REG2_RST_MASK     ((uint8_t) 0x40)
#define FXLS8471Q_CTRL_REG2_RST_SHIFT    ((uint8_t)    6)

#define FXLS8471Q_CTRL_REG2_ST_MASK      ((uint8_t) 0x80)
#define FXLS8471Q_CTRL_REG2_ST_SHIFT     ((uint8_t)    7)


/*
** CTRL_REG2 - Bit field value definitions
*/
#define FXLS8471Q_CTRL_REG2_MODS_NORMAL           ((uint8_t) 0x00)  /*  Normal power mode.                                */
#define FXLS8471Q_CTRL_REG2_MODS_LOWNOISE         ((uint8_t) 0x01)  /*  Low Noise Low Power mode.                         */
#define FXLS8471Q_CTRL_REG2_MODS_HIGHRES          ((uint8_t) 0x02)  /*  High Resolution mode.                             */
#define FXLS8471Q_CTRL_REG2_MODS_LOWPOW           ((uint8_t) 0x03)  /*  Low Power mode.                                   */
#define FXLS8471Q_CTRL_REG2_SLPE_DISABLED         ((uint8_t) 0x00)  /*  Auto-SLEEP is not enabled.                        */
#define FXLS8471Q_CTRL_REG2_SLPE_ENABLED          ((uint8_t) 0x04)  /*  Auto-SLEEP is enabled.                            */
#define FXLS8471Q_CTRL_REG2_SMODS_NORMAL          ((uint8_t) 0x00)  /*  Normal power mode.                                */
#define FXLS8471Q_CTRL_REG2_SMODS_LOWNOISE        ((uint8_t) 0x08)  /*  Low Noise Low Power mode.                         */
#define FXLS8471Q_CTRL_REG2_SMODS_HIGHRES         ((uint8_t) 0x10)  /*  High Resolution mode.                             */
#define FXLS8471Q_CTRL_REG2_SMODS_LOWPOW          ((uint8_t) 0x18)  /*  Low Power mode.                                   */
#define FXLS8471Q_CTRL_REG2_RST_DISABLED          ((uint8_t) 0x00)  /*  Device reset disabled.                            */
#define FXLS8471Q_CTRL_REG2_RST_ENABLED           ((uint8_t) 0x40)  /*  Device reset enabled.                             */
#define FXLS8471Q_CTRL_REG2_ST_DISABLED           ((uint8_t) 0x00)  /*  Self-Test disabled;.                              */
#define FXLS8471Q_CTRL_REG2_ST_ENABLED            ((uint8_t) 0x80)  /*  Self-Test enabled.                                */
/*------------------------------*/



/*--------------------------------
** Register: CTRL_REG3
** Enum: FXLS8471Q_CTRL_REG3
** --
** Offset : 0x2C - Interrupt Control Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                 pp_od : 1; /*  - Push-Pull/Open Drain selection on interrupt pad.                         */

        uint8_t                  ipol : 1; /*  - Interrupt polarity ACTIVE high, or ACTIVE low.                           */

        uint8_t        wake_en_a_vecm : 1; /*  vector magnitude wake mode en/dis                                          */

        uint8_t            wake_ff_mt : 1; /*  - Freefall/Motion wake up interrupt.                                       */

        uint8_t            wake_pulse : 1; /*  - Pulse wake up interrupt.                                                 */

        uint8_t           wake_lndprt : 1; /*  - Orientation wake up interrupt.                                           */

        uint8_t            wake_trans : 1; /*  - Transient wake up interrupt.                                             */

        uint8_t             fifo_gate : 1; /*  - FIFO Gate wake up interrupt.                                             */

    } b;
    uint8_t w;
} FXLS8471Q_CTRL_REG3_t;


/*
** CTRL_REG3 - Bit field mask definitions
*/
#define FXLS8471Q_CTRL_REG3_PP_OD_MASK            ((uint8_t) 0x01)
#define FXLS8471Q_CTRL_REG3_PP_OD_SHIFT           ((uint8_t)    0)

#define FXLS8471Q_CTRL_REG3_IPOL_MASK             ((uint8_t) 0x02)
#define FXLS8471Q_CTRL_REG3_IPOL_SHIFT            ((uint8_t)    1)

#define FXLS8471Q_CTRL_REG3_WAKE_EN_A_VECM_MASK   ((uint8_t) 0x04)
#define FXLS8471Q_CTRL_REG3_WAKE_EN_A_VECM_SHIFT  ((uint8_t)    2)

#define FXLS8471Q_CTRL_REG3_WAKE_FF_MT_MASK       ((uint8_t) 0x08)
#define FXLS8471Q_CTRL_REG3_WAKE_FF_MT_SHIFT      ((uint8_t)    3)

#define FXLS8471Q_CTRL_REG3_WAKE_PULSE_MASK       ((uint8_t) 0x10)
#define FXLS8471Q_CTRL_REG3_WAKE_PULSE_SHIFT      ((uint8_t)    4)

#define FXLS8471Q_CTRL_REG3_WAKE_LNDPRT_MASK      ((uint8_t) 0x20)
#define FXLS8471Q_CTRL_REG3_WAKE_LNDPRT_SHIFT     ((uint8_t)    5)

#define FXLS8471Q_CTRL_REG3_WAKE_TRANS_MASK       ((uint8_t) 0x40)
#define FXLS8471Q_CTRL_REG3_WAKE_TRANS_SHIFT      ((uint8_t)    6)

#define FXLS8471Q_CTRL_REG3_FIFO_GATE_MASK        ((uint8_t) 0x80)
#define FXLS8471Q_CTRL_REG3_FIFO_GATE_SHIFT       ((uint8_t)    7)


/*
** CTRL_REG3 - Bit field value definitions
*/
#define FXLS8471Q_CTRL_REG3_PP_OD_PUSHPULL        ((uint8_t) 0x00)  /*  Push-Pull.                                        */
#define FXLS8471Q_CTRL_REG3_PP_OD_OPENDRAIN       ((uint8_t) 0x01)  /*  Open Drain.                                       */
#define FXLS8471Q_CTRL_REG3_IPOL_LOW              ((uint8_t) 0x00)  /*  ACTIVE low.                                       */
#define FXLS8471Q_CTRL_REG3_IPOL_HIGH             ((uint8_t) 0x02)  /*  ACTIVE high.                                      */
#define FXLS8471Q_CTRL_REG3_WAKE_EN_A_VECM_EN     ((uint8_t) 0x04)  /*  Acceleration vector-magnitude function is enabled */
                                                                    /*  in Sleep mode and can generate an interrupt to    */
                                                                    /*  wake the system                                   */
#define FXLS8471Q_CTRL_REG3_WAKE_EN_A_VECM_DIS    ((uint8_t) 0x00)  /*  Acceleration vector-magnitude function is         */
                                                                    /*  disabled in Sleep mode                            */
#define FXLS8471Q_CTRL_REG3_WAKE_FF_MT_BYPASS     ((uint8_t) 0x00)  /*  Freefall/Motion function is bypassed in SLEEP     */
                                                                    /*  mode.                                             */
#define FXLS8471Q_CTRL_REG3_WAKE_FF_MT_WAKEUP     ((uint8_t) 0x08)  /*  Freefall/Motion function interrupt can wake up.   */
#define FXLS8471Q_CTRL_REG3_WAKE_PULSE_BYPASS     ((uint8_t) 0x00)  /*  Pulse function is bypassed in SLEEP mode.         */
#define FXLS8471Q_CTRL_REG3_WAKE_PULSE_WAKEUP     ((uint8_t) 0x10)  /*  Pulse function interrupt can wake up.             */
#define FXLS8471Q_CTRL_REG3_WAKE_LNDPRT_BYPASS    ((uint8_t) 0x00)  /*  Orientation function is bypassed in SLEEP mode.   */
#define FXLS8471Q_CTRL_REG3_WAKE_LNDPRT_WAKEUP    ((uint8_t) 0x20)  /*  Orientation function interrupt can wake up.       */
#define FXLS8471Q_CTRL_REG3_WAKE_TRANS_BYPASS     ((uint8_t) 0x00)  /*  Transient function is bypassed in SLEEP mode.     */
#define FXLS8471Q_CTRL_REG3_WAKE_TRANS_WAKEUP     ((uint8_t) 0x40)  /*  Transient function interrupt can wake up.         */
#define FXLS8471Q_CTRL_REG3_FIFO_GATE_BYPASS      ((uint8_t) 0x00)  /*  FIFO gate is bypassed. FIFO is flushed upon the   */
                                                                    /*  system mode transitioning from WAKE to SLEEP mode */
                                                                    /*  or from SLEEP to WAKE mode.                       */
#define FXLS8471Q_CTRL_REG3_FIFO_GATE_WAKEUP      ((uint8_t) 0x80)  /*  The FIFO input buffer is blocked when             */
                                                                    /*  transitioning from WAKE to SLEEP mode or from     */
                                                                    /*  SLEEP to WAKE mode until the FIFO is flushed.     */
/*------------------------------*/



/*--------------------------------
** Register: CTRL_REG4
** Enum: FXLS8471Q_CTRL_REG4
** --
** Offset : 0x2D - Interrupt Enable register (Read/Write).
** ------------------------------*/
typedef union {
    struct {
        uint8_t           int_en_drdy : 1; /*  - Interrupt Enable.                                                        */

        uint8_t         int_en_a_vecm : 1; /*  Vector magnitude interrupt                                                 */

        uint8_t          int_en_ff_mt : 1; /*  - Interrupt Enable.                                                        */

        uint8_t          int_en_pulse : 1; /*  - Interrupt Enable.                                                        */

        uint8_t         int_en_lndprt : 1; /*  - Interrupt Enable.                                                        */

        uint8_t          int_en_trans : 1; /*  - Interrupt Enable.                                                        */

        uint8_t           int_en_fifo : 1; /*  - Interrupt Enable.                                                        */

        uint8_t           int_en_aslp : 1; /*  - Interrupt Enable.                                                        */

    } b;
    uint8_t w;
} FXLS8471Q_CTRL_REG4_t;


/*
** CTRL_REG4 - Bit field mask definitions
*/
#define FXLS8471Q_CTRL_REG4_INT_EN_DRDY_MASK     ((uint8_t) 0x01)
#define FXLS8471Q_CTRL_REG4_INT_EN_DRDY_SHIFT    ((uint8_t)    0)

#define FXLS8471Q_CTRL_REG4_INT_EN_A_VECM_MASK   ((uint8_t) 0x02)
#define FXLS8471Q_CTRL_REG4_INT_EN_A_VECM_SHIFT  ((uint8_t)    1)

#define FXLS8471Q_CTRL_REG4_INT_EN_FF_MT_MASK    ((uint8_t) 0x04)
#define FXLS8471Q_CTRL_REG4_INT_EN_FF_MT_SHIFT   ((uint8_t)    2)

#define FXLS8471Q_CTRL_REG4_INT_EN_PULSE_MASK    ((uint8_t) 0x08)
#define FXLS8471Q_CTRL_REG4_INT_EN_PULSE_SHIFT   ((uint8_t)    3)

#define FXLS8471Q_CTRL_REG4_INT_EN_LNDPRT_MASK   ((uint8_t) 0x10)
#define FXLS8471Q_CTRL_REG4_INT_EN_LNDPRT_SHIFT  ((uint8_t)    4)

#define FXLS8471Q_CTRL_REG4_INT_EN_TRANS_MASK    ((uint8_t) 0x20)
#define FXLS8471Q_CTRL_REG4_INT_EN_TRANS_SHIFT   ((uint8_t)    5)

#define FXLS8471Q_CTRL_REG4_INT_EN_FIFO_MASK     ((uint8_t) 0x40)
#define FXLS8471Q_CTRL_REG4_INT_EN_FIFO_SHIFT    ((uint8_t)    6)

#define FXLS8471Q_CTRL_REG4_INT_EN_ASLP_MASK     ((uint8_t) 0x80)
#define FXLS8471Q_CTRL_REG4_INT_EN_ASLP_SHIFT    ((uint8_t)    7)


/*
** CTRL_REG4 - Bit field value definitions
*/
#define FXLS8471Q_CTRL_REG4_INT_EN_DRDY_DISABLED  ((uint8_t) 0x00)  /*  Data Ready interrupt disabled.                    */
#define FXLS8471Q_CTRL_REG4_INT_EN_DRDY_ENABLED   ((uint8_t) 0x01)  /*  Data Ready interrupt enabled.                     */
#define FXLS8471Q_CTRL_REG4_INT_EN_A_VECM_DISABLED ((uint8_t) 0x00)  /*  Vector magnitude interrupt disabled.             */
#define FXLS8471Q_CTRL_REG4_INT_EN_A_VECM_ENABLED ((uint8_t) 0x02)  /*  Vector magnitude interrupt enabled.               */
#define FXLS8471Q_CTRL_REG4_INT_EN_FF_MT_DISABLED ((uint8_t) 0x00)  /*  Freefall/Motion interrupt disabled.               */
#define FXLS8471Q_CTRL_REG4_INT_EN_FF_MT_ENABLED  ((uint8_t) 0x04)  /*  Freefall/Motion interrupt enabled.                */
#define FXLS8471Q_CTRL_REG4_INT_EN_PULSE_DISABLED ((uint8_t) 0x00)  /*  Pulse Detection interrupt disabled.               */
#define FXLS8471Q_CTRL_REG4_INT_EN_PULSE_ENABLED  ((uint8_t) 0x08)  /*  Pulse Detection interrupt enabled.                */
#define FXLS8471Q_CTRL_REG4_INT_EN_LNDPRT_DISABLED ((uint8_t) 0x00)  /*  Orientation (Landscape/Portrait) interrupt       */
                                                                     /*  disabled.                                        */
#define FXLS8471Q_CTRL_REG4_INT_EN_LNDPRT_ENABLED ((uint8_t) 0x10)  /*  Orientation (Landscape/Portrait) interrupt        */
                                                                    /*  enabled.                                          */
#define FXLS8471Q_CTRL_REG4_INT_EN_TRANS_DISABLED ((uint8_t) 0x00)  /*  Transient interrupt disabled.                     */
#define FXLS8471Q_CTRL_REG4_INT_EN_TRANS_ENABLED  ((uint8_t) 0x20)  /*  Transient interrupt enabled.                      */
#define FXLS8471Q_CTRL_REG4_INT_EN_FIFO_DISABLED  ((uint8_t) 0x00)  /*  FIFO interrupt disabled.                          */
#define FXLS8471Q_CTRL_REG4_INT_EN_FIFO_ENABLED   ((uint8_t) 0x40)  /*  FIFO interrupt enabled.                           */
#define FXLS8471Q_CTRL_REG4_INT_EN_ASLP_DISABLED  ((uint8_t) 0x00)  /*  Auto-SLEEP/WAKE interrupt disabled.               */
#define FXLS8471Q_CTRL_REG4_INT_EN_ASLP_ENABLED   ((uint8_t) 0x80)  /*  Auto-SLEEP/WAKE interrupt enabled.                */
/*------------------------------*/



/*--------------------------------
** Register: CTRL_REG5
** Enum: FXLS8471Q_CTRL_REG5
** --
** Offset : 0x2E - Interrupt Configuration Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t          int_cfg_drdy : 1; /*  - INT1/INT2 Configuration.                                                 */

        uint8_t        int_cfg_a_vecm : 1; /*  Acceleration vector-magnitude interrupt routing                            */

        uint8_t         int_cfg_ff_mt : 1; /*  - INT1/INT2 Configuration.                                                 */

        uint8_t         int_cfg_pulse : 1; /*  - INT1/INT2 Configuration.                                                 */

        uint8_t        int_cfg_lndprt : 1; /*  - INT1/INT2 Configuration.                                                 */

        uint8_t         int_cfg_trans : 1; /*  - INT1/INT2 Configuration.                                                 */

        uint8_t          int_cfg_fifo : 1; /*  - INT1/INT2 Configuration.                                                 */

        uint8_t          int_cfg_aslp : 1; /*  - INT1/INT2 Configuration.                                                 */

    } b;
    uint8_t w;
} FXLS8471Q_CTRL_REG5_t;


/*
** CTRL_REG5 - Bit field mask definitions
*/
#define FXLS8471Q_CTRL_REG5_INT_CFG_DRDY_MASK     ((uint8_t) 0x01)
#define FXLS8471Q_CTRL_REG5_INT_CFG_DRDY_SHIFT    ((uint8_t)    0)

#define FXLS8471Q_CTRL_REG5_INT_CFG_A_VECM_MASK   ((uint8_t) 0x02)
#define FXLS8471Q_CTRL_REG5_INT_CFG_A_VECM_SHIFT  ((uint8_t)    1)

#define FXLS8471Q_CTRL_REG5_INT_CFG_FF_MT_MASK    ((uint8_t) 0x04)
#define FXLS8471Q_CTRL_REG5_INT_CFG_FF_MT_SHIFT   ((uint8_t)    2)

#define FXLS8471Q_CTRL_REG5_INT_CFG_PULSE_MASK    ((uint8_t) 0x08)
#define FXLS8471Q_CTRL_REG5_INT_CFG_PULSE_SHIFT   ((uint8_t)    3)

#define FXLS8471Q_CTRL_REG5_INT_CFG_LNDPRT_MASK   ((uint8_t) 0x10)
#define FXLS8471Q_CTRL_REG5_INT_CFG_LNDPRT_SHIFT  ((uint8_t)    4)

#define FXLS8471Q_CTRL_REG5_INT_CFG_TRANS_MASK    ((uint8_t) 0x20)
#define FXLS8471Q_CTRL_REG5_INT_CFG_TRANS_SHIFT   ((uint8_t)    5)

#define FXLS8471Q_CTRL_REG5_INT_CFG_FIFO_MASK     ((uint8_t) 0x40)
#define FXLS8471Q_CTRL_REG5_INT_CFG_FIFO_SHIFT    ((uint8_t)    6)

#define FXLS8471Q_CTRL_REG5_INT_CFG_ASLP_MASK     ((uint8_t) 0x80)
#define FXLS8471Q_CTRL_REG5_INT_CFG_ASLP_SHIFT    ((uint8_t)    7)


/*
** CTRL_REG5 - Bit field value definitions
*/
#define FXLS8471Q_CTRL_REG5_INT_CFG_DRDY_INT2     ((uint8_t) 0x00)  /*  Interrupt is routed to INT2 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_DRDY_INT1     ((uint8_t) 0x01)  /*  Interrupt is routed to INT1 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_A_VECM_INT2   ((uint8_t) 0x00)  /*  Interrupt is routed to INT2 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_A_VECM_INT1   ((uint8_t) 0x02)  /*  Interrupt is routed to INT1 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_FF_MT_INT2    ((uint8_t) 0x00)  /*  Interrupt is routed to INT2 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_FF_MT_INT1    ((uint8_t) 0x04)  /*  Interrupt is routed to INT1 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_PULSE_INT2    ((uint8_t) 0x00)  /*  Interrupt is routed to INT2 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_PULSE_INT1    ((uint8_t) 0x08)  /*  Interrupt is routed to INT1 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_LNDPRT_INT2   ((uint8_t) 0x00)  /*  Interrupt is routed to INT2 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_LNDPRT_INT1   ((uint8_t) 0x10)  /*  Interrupt is routed to INT1 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_TRANS_INT2    ((uint8_t) 0x00)  /*  Interrupt is routed to INT2 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_TRANS_INT1    ((uint8_t) 0x20)  /*  Interrupt is routed to INT1 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_FIFO_INT2     ((uint8_t) 0x00)  /*  Interrupt is routed to INT2 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_FIFO_INT1     ((uint8_t) 0x40)  /*  Interrupt is routed to INT1 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_ASLP_INT2     ((uint8_t) 0x00)  /*  Interrupt is routed to INT2 pin.                  */
#define FXLS8471Q_CTRL_REG5_INT_CFG_ASLP_INT1     ((uint8_t) 0x80)  /*  Interrupt is routed to INT1 pin.                  */
/*------------------------------*/



/*--------------------------------
** Register: OFF_X
** Enum: FXLS8471Q_OFF_X
** --
** Offset : 0x2F - Offset Correction X Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                     d; /*  - X-axis offset value.                                                         */

    } b;
    uint8_t w;
} FXLS8471Q_OFF_X_t;


/*
** OFF_X - Bit field mask definitions
*/
#define FXLS8471Q_OFF_X_D_MASK   ((uint8_t) 0xFF)
#define FXLS8471Q_OFF_X_D_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: OFF_Y
** Enum: FXLS8471Q_OFF_Y
** --
** Offset : 0x30 - Offset Correction Y Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                     d; /*  - Y-axis offset value.                                                         */

    } b;
    uint8_t w;
} FXLS8471Q_OFF_Y_t;


/*
** OFF_Y - Bit field mask definitions
*/
#define FXLS8471Q_OFF_Y_D_MASK   ((uint8_t) 0xFF)
#define FXLS8471Q_OFF_Y_D_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: OFF_Z
** Enum: FXLS8471Q_OFF_Z
** --
** Offset : 0x31 - Offset Correction Z Register.
** ------------------------------*/
typedef union {
    struct {
        uint8_t                     d; /*  - Z-axis offset value.                                                         */

    } b;
    uint8_t w;
} FXLS8471Q_OFF_Z_t;


/*
** OFF_Z - Bit field mask definitions
*/
#define FXLS8471Q_OFF_Z_D_MASK   ((uint8_t) 0xFF)
#define FXLS8471Q_OFF_Z_D_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: A_VECM_CFG
** Enum: FXLS8471Q_A_VECM_CFG
** --
** Offset : 0x5F - Acceleration vectormagnitude configuration register
** ------------------------------*/
typedef union {
    struct {
        uint8_t _reserved_            : 3;
        uint8_t            a_vecm_ele : 1; /*  - Control bit a_vecm_ele defines the event latch enable mode.              */

        uint8_t          a_vecm_initm : 1; /*  - Control bit a_vecm_initm defines how the initial reference values        */
                                           /*  (x_ref, y_ref, and z_ref) are chosen                                       */

        uint8_t           a_vecm_updm : 1; /*  - How the reference values are updated once the vector-magnitude function  */
                                           /*  has been triggered.                                                        */

        uint8_t             a_vecm_en : 1; /*  - The accelerometer vector-magnitude function enable/disable               */

    } b;
    uint8_t w;
} FXLS8471Q_A_VECM_CFG_t;


/*
** A_VECM_CFG - Bit field mask definitions
*/
#define FXLS8471Q_A_VECM_CFG_A_VECM_ELE_MASK     ((uint8_t) 0x08)
#define FXLS8471Q_A_VECM_CFG_A_VECM_ELE_SHIFT    ((uint8_t)    3)

#define FXLS8471Q_A_VECM_CFG_A_VECM_INITM_MASK   ((uint8_t) 0x10)
#define FXLS8471Q_A_VECM_CFG_A_VECM_INITM_SHIFT  ((uint8_t)    4)

#define FXLS8471Q_A_VECM_CFG_A_VECM_UPDM_MASK    ((uint8_t) 0x20)
#define FXLS8471Q_A_VECM_CFG_A_VECM_UPDM_SHIFT   ((uint8_t)    5)

#define FXLS8471Q_A_VECM_CFG_A_VECM_EN_MASK      ((uint8_t) 0x40)
#define FXLS8471Q_A_VECM_CFG_A_VECM_EN_SHIFT     ((uint8_t)    6)


/*
** A_VECM_CFG - Bit field value definitions
*/
#define FXLS8471Q_A_VECM_CFG_A_VECM_ELE_EN         ((uint8_t) 0x08)  /*  The interrupt flag is latched in and held until  */
                                                                     /*  the host application reads the INT_SOURCE        */
                                                                     /*  register(0x0C)                                   */
#define FXLS8471Q_A_VECM_CFG_A_VECM_ELE_DIS        ((uint8_t) 0x00)  /*  Event latching is disabled                       */
#define FXLS8471Q_A_VECM_CFG_A_VECM_INITM_EN       ((uint8_t) 0x10)  /*  The function uses the data from                  */
                                                                     /*  A_VECM_INIT_X/Y/Z registers as the initial       */
                                                                     /*  reference values                                 */
#define FXLS8471Q_A_VECM_CFG_A_VECM_INITM_DIS      ((uint8_t) 0x00)  /*  The function uses the current x/y/z              */
                                                                     /*  accelerometer output data at the time when the   */
                                                                     /*  vector magnitude function is enabled             */
#define FXLS8471Q_A_VECM_CFG_A_VECM_UPDM_EN        ((uint8_t) 0x20)  /*  The function does not update the reference       */
                                                                     /*  values when the interrupt is triggered.          */
#define FXLS8471Q_A_VECM_CFG_A_VECM_UPDM_DIS       ((uint8_t) 0x00)  /*  The function updates the reference value with    */
                                                                     /*  the current x, y, and z accelerometer output     */
                                                                     /*  data values.                                     */
#define FXLS8471Q_A_VECM_CFG_A_VECM_EN_EN          ((uint8_t) 0x40)  /*  The accelerometer vector-magnitude function is   */
                                                                     /*  enabled.                                         */
#define FXLS8471Q_A_VECM_CFG_A_VECM_EN_DIS         ((uint8_t) 0x00)  /*  The accelerometer vector-magnitude function is   */
                                                                     /*  disabled.                                        */
/*------------------------------*/



/*--------------------------------
** Register: A_VECM_THS_MSB
** Enum: FXLS8471Q_A_VECM_THS_MSB
** --
** Offset : 0x60 - Acceleration vectormagnitude threshold MSB
** ------------------------------*/
typedef union {
    struct {
        uint8_t            a_vecm_ths : 5; /*  Five MSBs of the 13-bit unsigned A_VECM_THS value                          */

        uint8_t _reserved_            : 2;
        uint8_t         a_vecm_dbcntm : 1; /*  How the debounce timer is reset when the condition for triggering the      */
                                           /*  interrupt is no longer true                                                */

    } b;
    uint8_t w;
} FXLS8471Q_A_VECM_THS_MSB_t;


/*
** A_VECM_THS_MSB - Bit field mask definitions
*/
#define FXLS8471Q_A_VECM_THS_MSB_A_VECM_THS_MASK      ((uint8_t) 0x1F)
#define FXLS8471Q_A_VECM_THS_MSB_A_VECM_THS_SHIFT     ((uint8_t)    0)

#define FXLS8471Q_A_VECM_THS_MSB_A_VECM_DBCNTM_MASK   ((uint8_t) 0x80)
#define FXLS8471Q_A_VECM_THS_MSB_A_VECM_DBCNTM_SHIFT  ((uint8_t)    7)


/*------------------------------*/



/*--------------------------------
** Register: A_VECM_THS_LSB
** Enum: FXLS8471Q_A_VECM_THS_LSB
** --
** Offset : 0x61 - Acceleration vectormagnitude threshold LSB
** ------------------------------*/
typedef uint8_t FXLS8471Q_A_VECM_THS_LSB_t;



/*--------------------------------
** Register: A_VECM_CNT
** Enum: FXLS8471Q_A_VECM_CNT
** --
** Offset : 0x62 - Acceleration vectormagnitude debounce count
** ------------------------------*/
typedef union {
    struct {
        uint8_t            a_vecm_cnt; /*  Vector-magnitude function debounce count value.                                */

    } b;
    uint8_t w;
} FXLS8471Q_A_VECM_CNT_t;


/*
** A_VECM_CNT - Bit field mask definitions
*/
#define FXLS8471Q_A_VECM_CNT_A_VECM_CNT_MASK   ((uint8_t) 0xFF)
#define FXLS8471Q_A_VECM_CNT_A_VECM_CNT_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: A_VECM_INITX_MSB
** Enum: FXLS8471Q_A_VECM_INITX_MSB
** --
** Offset 0x63 - Acceleration vectormagnitude X-axis reference value MSB
** ------------------------------*/
typedef union {
    struct {
        uint8_t          a_vecm_initx : 6; /*  Most significant 6 bits of the signed 14-bit initial X-axis value          */

    } b;
    uint8_t w;
} FXLS8471Q_A_VECM_INITX_MSB_t;


/*
** A_VECM_INITX_MSB - Bit field mask definitions
*/
#define FXLS8471Q_A_VECM_INITX_MSB_A_VECM_INITX_MASK   ((uint8_t) 0x3F)
#define FXLS8471Q_A_VECM_INITX_MSB_A_VECM_INITX_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: A_VECM_INITX_LSB
** Enum: FXLS8471Q_A_VECM_INITX_LSB
** --
** Offset 0x64 - Acceleration vectormagnitude X-axis reference value LSB
** ------------------------------*/
typedef uint8_t FXLS8471Q_A_VECM_INITX_LSB_t;



/*--------------------------------
** Register: A_VECM_INITY_MSB
** Enum: FXLS8471Q_A_VECM_INITY_MSB
** --
** Offset 0x65 - Acceleration vectormagnitude Y-axis reference value MSB
** ------------------------------*/
typedef union {
    struct {
        uint8_t          a_vecm_inity : 6; /*  Most significant 6 bits of the signed 14-bit initial Y-axis value          */

    } b;
    uint8_t w;
} FXLS8471Q_A_VECM_INITY_MSB_t;


/*
** A_VECM_INITY_MSB - Bit field mask definitions
*/
#define FXLS8471Q_A_VECM_INITY_MSB_A_VECM_INITY_MASK   ((uint8_t) 0x3F)
#define FXLS8471Q_A_VECM_INITY_MSB_A_VECM_INITY_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: A_VECM_INITY_LSB
** Enum: FXLS8471Q_A_VECM_INITY_LSB
** --
** Offset 0x66 - Acceleration vectormagnitude y-axis reference value LSB
** ------------------------------*/
typedef uint8_t FXLS8471Q_A_VECM_INITY_LSB_t;



/*--------------------------------
** Register: A_VECM_INITZ_MSB
** Enum: FXLS8471Q_A_VECM_INITZ_MSB
** --
** Offset 0x67 - Acceleration vectormagnitude Y-axis reference value MSB
** ------------------------------*/
typedef union {
    struct {
        uint8_t          a_vecm_initz : 6; /*  Most significant 6 bits of the signed 14-bit initial Z-axis value          */

    } b;
    uint8_t w;
} FXLS8471Q_A_VECM_INITZ_MSB_t;


/*
** A_VECM_INITZ_MSB - Bit field mask definitions
*/
#define FXLS8471Q_A_VECM_INITZ_MSB_A_VECM_INITZ_MASK   ((uint8_t) 0x3F)
#define FXLS8471Q_A_VECM_INITZ_MSB_A_VECM_INITZ_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: A_VECM_INITZ_LSB
** Enum: FXLS8471Q_A_VECM_INITZ_LSB
** --
** Offset 0x68 - Acceleration vectormagnitude Z-axis reference value LSB
** ------------------------------*/
typedef uint8_t FXLS8471Q_A_VECM_INITZ_LSB_t;



/*--------------------------------
** Register: A_FFMT_THS_X_MSB
** Enum: FXLS8471Q_A_FFMT_THS_X_MSB
** --
** Offset 0x73 - X-axis FMT threshold MSB
** ------------------------------*/
typedef union {
    struct {
        uint8_t          a_ffmt_ths_x : 7; /*  7-bit MSB of X-axis acceleration threshold                                 */

        uint8_t     a_ffmt_ths_xyz_en : 1;
    } b;
    uint8_t w;
} FXLS8471Q_A_FFMT_THS_X_MSB_t;


/*
** A_FFMT_THS_X_MSB - Bit field mask definitions
*/
#define FXLS8471Q_A_FFMT_THS_X_MSB_A_FFMT_THS_X_MASK        ((uint8_t) 7F)
#define FXLS8471Q_A_FFMT_THS_X_MSB_A_FFMT_THS_X_SHIFT       ((uint8_t)    0)

#define FXLS8471Q_A_FFMT_THS_X_MSB_A_FFMT_THS_XYZ_EN_MASK   ((uint8_t) 0x80)
#define FXLS8471Q_A_FFMT_THS_X_MSB_A_FFMT_THS_XYZ_EN_SHIFT  ((uint8_t)    7)


/*
** A_FFMT_THS_X_MSB - Bit field value definitions
*/
#define FXLS8471Q_A_FFMT_THS_X_MSB_A_FFMT_THS_XYZ_EN_EN  ((uint8_t) 0x80)  /*  the ASIC ignores the common 7-bit          */
                                                                           /*  G_FFMT_THS value located in register x17   */
                                                                           /*  when executing the FFMT function, and the  */
                                                                           /*  following independent threshold values are */
                                                                           /*  used for each axis                         */
#define FXLS8471Q_A_FFMT_THS_X_MSB_A_FFMT_THS_XYZ_EN_DIS ((uint8_t) 0x00)  /*  the ASIC uses the ffmt_ths[6:0] value      */
                                                                           /*  located in register x17[6:0] as a common   */
                                                                           /*  threshold for the X, Y, and Z-axis         */
                                                                           /*  acceleration detection. The common         */
                                                                           /*  unsigned 7-bit acceleration threshold has  */
                                                                           /*  a fixed resolution of 63 mg/LSB, with a    */
                                                                           /*  range of 0-127 counts                      */
/*------------------------------*/



/*--------------------------------
** Register: A_FFMT_THS_X_LSB
** Enum: FXLS8471Q_A_FFMT_THS_X_LSB
** --
** Offset 0x74 - X-axis FMT threshold LSB
** ------------------------------*/
typedef union {
    struct {
        uint8_t          a_ffmt_ths_x : 6;
    } b;
    uint8_t w;
} FXLS8471Q_A_FFMT_THS_X_LSB_t;


/*
** A_FFMT_THS_X_LSB - Bit field mask definitions
*/
#define FXLS8471Q_A_FFMT_THS_X_LSB_A_FFMT_THS_X_MASK   ((uint8_t) 0x3F)
#define FXLS8471Q_A_FFMT_THS_X_LSB_A_FFMT_THS_X_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: A_FFMT_THS_Y_MSB
** Enum: FXLS8471Q_A_FFMT_THS_Y_MSB
** --
** Offset 0x75 - Y-axis FMT threshold MSB
** ------------------------------*/
typedef union {
    struct {
        uint8_t          a_ffmt_ths_y : 7;
        uint8_t   a_ffmt_trans_ths_en : 1;
    } b;
    uint8_t w;
} FXLS8471Q_A_FFMT_THS_Y_MSB_t;


/*
** A_FFMT_THS_Y_MSB - Bit field mask definitions
*/
#define FXLS8471Q_A_FFMT_THS_Y_MSB_A_FFMT_THS_Y_MASK          ((uint8_t) 0x7F)
#define FXLS8471Q_A_FFMT_THS_Y_MSB_A_FFMT_THS_Y_SHIFT         ((uint8_t)    0)

#define FXLS8471Q_A_FFMT_THS_Y_MSB_A_FFMT_TRANS_THS_EN_MASK   ((uint8_t) 0x80)
#define FXLS8471Q_A_FFMT_THS_Y_MSB_A_FFMT_TRANS_THS_EN_SHIFT  ((uint8_t)    7)


/*------------------------------*/



/*--------------------------------
** Register: A_FFMT_THS_Y_LSB
** Enum: FXLS8471Q_A_FFMT_THS_Y_LSB
** --
** Offset 0x76 - Y-axis FMT threshold LSB
** ------------------------------*/
typedef union {
    struct {
        uint8_t          a_ffmt_ths_y : 6;
    } b;
    uint8_t w;
} FXLS8471Q_A_FFMT_THS_Y_LSB_t;


/*
** A_FFMT_THS_Y_LSB - Bit field mask definitions
*/
#define FXLS8471Q_A_FFMT_THS_Y_LSB_A_FFMT_THS_Y_MASK   ((uint8_t) 0x3F)
#define FXLS8471Q_A_FFMT_THS_Y_LSB_A_FFMT_THS_Y_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: A_FFMT_THS_Z_MSB
** Enum: FXLS8471Q_A_FFMT_THS_Z_MSB
** --
** Offset 0x77 - Z-axis FMT threshold MSB
** ------------------------------*/
typedef union {
    struct {
        uint8_t          a_ffmt_ths_z : 7;
    } b;
    uint8_t w;
} FXLS8471Q_A_FFMT_THS_Z_MSB_t;


/*
** A_FFMT_THS_Z_MSB - Bit field mask definitions
*/
#define FXLS8471Q_A_FFMT_THS_Z_MSB_A_FFMT_THS_Z_MASK   ((uint8_t) 0x7F)
#define FXLS8471Q_A_FFMT_THS_Z_MSB_A_FFMT_THS_Z_SHIFT  ((uint8_t)    0)


/*------------------------------*/



/*--------------------------------
** Register: A_FFMT_THS_Z_LSB
** Enum: FXLS8471Q_A_FFMT_THS_Z_LSB
** --
** Offset 0x78 - Z-axis FMT threshold LSB
** ------------------------------*/
typedef union {
    struct {
        uint8_t          a_ffmt_ths_x : 6;
    } b;
    uint8_t w;
} FXLS8471Q_A_FFMT_THS_Z_LSB_t;


/*
** A_FFMT_THS_Z_LSB - Bit field mask definitions
*/
#define FXLS8471Q_A_FFMT_THS_Z_LSB_A_FFMT_THS_X_MASK   ((uint8_t) 0x3F)
#define FXLS8471Q_A_FFMT_THS_Z_LSB_A_FFMT_THS_X_SHIFT  ((uint8_t)    0)


/*------------------------------*/


#endif  /* _FXLS8471Q_H_ */
