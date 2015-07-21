#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP(
        ESC,  F1,   F3,  LBRC, RBRC, \
        2,    4,    6,   8,    0,    \
              UP,              PGUP, \
        LEFT, DOWN, RGHT,      PGDN
    )
};
