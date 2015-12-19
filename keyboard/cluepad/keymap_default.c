#include "keymap_common.h"
#include "backlight.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: numpad
     */
    KEYMAP(
        FN0, PSLS,PAST,PMNS, \
        P7,  P8,  P9,  PPLS, \
        P4,  P5,  P6,        \
        P1,  P2,  P3,  PENT, \
        P0,       PDOT)
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_BACKLIGHT_STEP()
};
