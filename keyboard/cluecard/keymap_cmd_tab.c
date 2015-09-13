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
    CMD_TAB,
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_MACRO(CMD_TAB),
};

/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case CMD_TAB:
            return (record->event.pressed ?
                    MACRO(D(LGUI), T(TAB), END) :
                    MACRO(U(LGUI), END));
    }
    return MACRO_NONE;
}
