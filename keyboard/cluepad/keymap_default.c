#include "keymap_common.h"
#include "backlight.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: numpad
     */
    KEYMAP(
        NLCK,PSLS,PAST,PMNS, \
        P7,  P8,  P9,  FN0,  \
        P4,  P5,  P6,        \
        P1,  P2,  P3,  FN1,  \
        P0,       PDOT)
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_BACKLIGHT_TOGGLE(),
    [1] = ACTION_BACKLIGHT_LEVEL(BACKLIGHT_SWITCH)
};
