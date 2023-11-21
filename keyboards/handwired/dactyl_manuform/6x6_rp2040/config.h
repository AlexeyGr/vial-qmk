/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

//#define MATRIX_ROWS 7
//#define MATRIX_COLS 12

// wiring of each half
//#define MATRIX_COL_PINS { GP16, GP17, GP18, GP19, GP20, GP21 }
//#define MATRIX_ROW_PINS { GP11, GP10, GP9, GP8, GP7, GP6, GP12 }

#define MATRIX_COL_PINS { GP21, GP20, GP19, GP18, GP17, GP16  }
#define MATRIX_ROW_PINS { GP11, GP10, GP9, GP8, GP7, GP6, GP12 }


#define MATRIX_COL_PINS_RIGHT { GP16, GP17, GP18, GP19, GP20, GP21 }
#define MATRIX_ROW_PINS_RIGHT { GP11, GP10, GP9, GP8, GP7, GP6, GP12 }

#define DIODE_DIRECTION ROW2COL

#define SERIAL_PIO_USE_PIO1

#define SERIAL_USART_TIMEOUT 20


#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3


//#define SOFT_SERIAL_PIN GP0

//#define RP2040_FLASH_GENERIC_03H
#define SERIAL_USART_TX_PIN GP0

#define SPLIT_MAX_CONNECTION_ERRORS 0

#define SPLIT_CONNECTION_CHECK_TIMEOUT 0

#define SPLIT_LAYER_STATE_ENABLE

#define SPLIT_MODS_ENABLE

#define SPLIT_OLED_ENABLE