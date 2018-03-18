/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Cetus 3D pin assignments
 */

/**
 * Rev A   11 Mar 2018
 *
 *  Initial revision
 */

#if !defined(__AVR_ATmega644__) && !defined(__AVR_ATmega1284__)
  #error "Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu."
#endif

#define DEFAULT_MACHINE_NAME    "Cetus"
#define DEFAULT_SOURCE_CODE_URL "https://github.com/iocapa/Marlin"
#define BOARD_NAME              "Cetus_CPU"

//
// Config
//
#define CETUS_PROBE_ON_AUX
#define CETUS_FAN_ON_LIGTH_PIN

//
// Schematic pin mapping
//
#define CETUS_T_HEND                24 //TEMP_0_PIN
#define CETUS_T_BED                 25 //TEMP_BED_PIN
#define CETUS_DOOR_CHECK            26
#define CETUS_SD_POWER              27
#define CETUS_Z_LIMIT               28 //Z_MIN_PIN
#define CETUS_HEAD_AUX              29 //Z_MIN_PROBE_PIN, modifications required, check schematic.
#define CETUS_X_LIMIT               30 //X_MIN_PIN
#define CETUS_Y_LIMIT               31 //Y_MIN_PIN
#define CETUS_MCU_POW_ON            0  //PS_ON_PIN
#define CETUS_MCU_PANEL_LED         1  //LED_PIN -> ??
#define CETUS_AUX_FLS               2
#define CETUS_EXT_SW                3  //KILL_PIN -> ??
#define CETUS_SPI_SS                4  //SDSS
#define CETUS_SPI_MOSI              5
#define CETUS_SPI_MISO              6
#define CETUS_SPI_SCK               7
#define CETUS_E_STEP                16  //E_STEP_PIN
#define CETUS_E_DIR                 17  //E_DIR_PIN
#define CETUS_X_DIR                 18  //X_DIR_PIN
#define CETUS_X_STEP                19  //X_STEP_PIN
#define CETUS_Y_DIR                 20  //Y_DIR_PIN
#define CETUS_Y_STEP                21  //Y_STEP_PIN
#define CETUS_Z_DIR                 22  //Z_DIR_PIN
#define CETUS_Z_STEP                23  //Z_STEP_PIN
#define CETUS_USB_TX                8
#define CETUS_USB_RX                9
#define CETUS_AUX_RXD               10
#define CETUS_AUX_TXD               11
#define CETUS_MCU_LIGTH             12  //FAN_PIN, modifications required, check schematic.
#define CETUS_MCU_HEATER_BED        13  //HEATER_BED_PIN
#define CETUS_MCU_HEATER            14  //HEATER_0_PIN
#define CETUS_MCU_BUZZER            15  //BEEPER_PIN -> ??

//
// Steppers and limit switches
//
#define X_STEP_PIN                  CETUS_X_STEP
#define Y_STEP_PIN                  CETUS_Y_STEP
#define Z_STEP_PIN                  CETUS_Z_STEP
#define E_STEP_PIN                  CETUS_E_STEP

#define X_DIR_PIN                   CETUS_X_DIR
#define Y_DIR_PIN                   CETUS_Y_DIR
#define Z_DIR_PIN                   CETUS_Z_DIR
#define E_DIR_PIN                   CETUS_E_DIR

#define X_MIN_PIN                   CETUS_X_LIMIT
#define Y_MIN_PIN                   CETUS_Y_LIMIT
#define Z_MIN_PIN                   CETUS_Z_LIMIT

#ifdef CETUS_PROBE_ON_AUX
#define Z_MIN_PROBE_PIN             CETUS_HEAD_AUX
#else
#define Z_MIN_PROBE_PIN            -1
#

//
// Heaters and temperature
//
#define TEMP_0_PIN                  CETUS_T_HEND
#define TEMP_BED_PIN                CETUS_T_BED
#define HEATER_0_PIN                CETUS_MCU_HEATER
#define HEATER_BED_PIN              CETUS_MCU_HEATER_BED

//
// Misc
//
#define PS_ON_PIN                CETUS_MCU_POW_ON
#define BEEPER_PIN                CETUS_MCU_BUZZER
#define SDSS                    CETUS_SPI_SS
#define LED_PIN                    CETUS_MCU_PANEL_LED
#define KILL_PIN                CETUS_EXT_SW

#ifdef CETUS_FAN_ON_LIGTH_PIN
#define FAN_PIN                    CETUS_MCU_LIGTH
#else
#define FAN_PIN                 -1
#endif

