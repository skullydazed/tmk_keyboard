#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty
     * ,---.
     * |FN0|
     * `---`
     */
    KEYMAP(FN0)
};

enum macro_id {
    ALT_TAB,
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_MACRO(ALT_TAB),
    [1] = ACTION_MODS_KEY(MOD_LGUI, KC_TAB)
};

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case ALT_TAB:
            return (record->event.pressed ?
                    MACRO(D(LGUI), T(TAB), END) :
                    MACRO(U(LGUI), END));
    }
    return MACRO_NONE;
}
