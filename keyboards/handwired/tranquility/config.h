#include "config_common.h"

#define VENDOR_ID    0xd868
#define PRODUCT_ID   0x9154
#define DEVICE_VER   0x0001
#define MANUFACTURER Timo Kroeger
#define PRODUCT      tranquility

#define MATRIX_ROWS 10
#define MATRIX_COLS 6
#define MATRIX_ROW_PINS { D1, D0, D4, C6, D7 }
#define MATRIX_ROW_PINS_RIGHT  { F4, F5, F6, F7, B1 }
#define MATRIX_COL_PINS { E6, B4, B5, B6, B2, B3 }

#define DIODE_DIRECTION COL2ROW

#define SOFT_SERIAL_PIN D3

#define SPLIT_MODS_ENABLE
