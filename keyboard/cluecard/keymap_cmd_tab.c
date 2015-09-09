#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty
     * ,---.
     * |FN0|
     * `---`
     */
    KEYMAP(FN0),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_MODS_KEY(MOD_LGUI, KC_TAB)
};
