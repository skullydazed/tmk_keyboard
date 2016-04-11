#include "keymap_common.h"
#include "backlight.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty
     * ,-----------------------------------------------------------.  ,---.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Yen| BS|  |PgU|
     * |-----------------------------------------------------------|  |---|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|  |PgD|
     * |-----------------------------------------------------------|  `---'
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| # | Ent|
     * |--------------------------------------------------------------.
     * |Shift| \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|  \|Shift| Up|
     * |------------------------------------------------------------------.
     * |Ctrl|Alt|Gui |MHen| Space| Space|Henk|Gui |Ctrl|  Fn|Left|Down|Rgt|
     * `------------------------------------------------------------------'
     */
    /* 0: QWERTY
     */
    KEYMAP(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, JYEN,BSPC,NLCK,PSLS,PAST,PMNS, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,      P7,   P8,   P9,   PPLS, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NUHS,ENT,       P4,   P5,   P6, \
        LSFT,NUBS,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,FN0,  P1,   P2,   P3,   PENT, \
        LCTL,LGUI,LALT,          SPC,           RALT,RGUI,FN0, RCTL,                P0,         PDOT),
    /* 1: Fn
     * FIXME: Make W and S increase and decrease LED brightness
     */
    KEYMAP(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS,DEL, PSCR,SLCK,PAUS,END, \
        TRNS,TRNS, FN1,TRNS,TRNS,TRNS,TRNS,TRNS,MPRV,MPLY,MNXT,VOLD,VOLU,TRNS,     INS, HOME,PGUP,TRNS, \
        TRNS,TRNS, FN2,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     DEL, UP,  PGDN, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,FN0, LEFT,DOWN,RGHT,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,          TRNS,TRNS,FN0, TRNS,               TRNS,     TRNS),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    [1] = ACTION_BACKLIGHT_INCREASE(),
    [2] = ACTION_BACKLIGHT_DECREASE()
};
