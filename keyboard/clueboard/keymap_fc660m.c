#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty
     * ,-----------------------------------------------------------.  ,---.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |  |Ins|
     * |-----------------------------------------------------------|  |---|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|  |Del|
     * |-----------------------------------------------------------|  `---'
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |--------------------------------------------------------------.
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift   |  Up|
     * |------------------------------------------------------------------.
     * |Ctrl|Gui|Alt |      Space            |Alt |Ctrl|  Fn|Left|Down|Rgt|
     * `------------------------------------------------------------------'
     */
    KEYMAP(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, INS, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC, ENT, DEL, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     BSLS,  \
        LSFT,FN0, Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,          RSFT, UP, \
        LCTL,LGUI,LALT,          SPC,                     RALT,RCTL, FN0,LEFT,DOWN,RGHT),
    /* 1: colemak */
    KEYMAP(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, INS, \
        TAB, Q,   W,   F,   P,   G,   J,   L,   U,   Y,   SCLN,LBRC,RBRC, ENT, DEL, \
        BSPC,A,   R,   S,   T,   D,   H,   N,   E,   I,   O,   QUOT,     BSLS, \
        LSFT,FN0, Z,   X,   C,   V,   B,   K,   M,   COMM,DOT, SLSH,          RSFT, UP, \
        LCTL,LGUI,LALT,          SPC,                     RALT,RCTL, FN0,LEFT,DOWN,RGHT),
    /* 2: dvorak */
    KEYMAP(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   LBRC,RBRC,BSPC, INS, \
        TAB, QUOT,COMM,DOT, P,   Y,   F,   G,   C,   R,   L,   SLSH,EQL,  ENT, DEL, \
        LCTL,A,   O,   E,   U,   I,   D,   H,   T,   N,   S,   MINS,     BSLS, \
        LSFT,FN0,SCLN,Q,   J,   K,   X,   B,   M,   W,   V,   Z,             RSFT, UP, \
        LCTL,LGUI,LALT,          SPC,                     RALT,RCTL, FN0,LEFT,DOWN,RGHT),
    /* 3: workman */
    KEYMAP(
        GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, INS, \
        TAB, Q,   D,   R,   W,   B,   J,   F,   U,   P,   SCLN,LBRC,RBRC, ENT, DEL, \
        BSPC,A,   S,   H,   T,   G,   Y,   N,   E,   O,   I,   QUOT,     BSLS,  \
        LSFT,FN0,Z,   X,   M,   C,   V,   K,   L,   COMM,DOT, SLSH,          RSFT, UP, \
        LCTL,LGUI,LALT,          SPC,                     RALT,RCTL, FN0,LEFT,DOWN,RGHT),
    /* 4: fc660m Fn
     * ,-----------------------------------------------------------.   ,---.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |   |   |
     * |-----------------------------------------------------------|   |---|
     * |     |   |   |   |   |   |   |   |Psc|Slk|Pau|   |   |     |   |FnL|
     * |-----------------------------------------------------------|   `---'
     * |      |   |   |   |   |   |   |   | Hm|PgU|   |   |        |
     * |--------------------------------------------------------------.
     * |        |   |   |   |   |   |   |   |End|PgD|   |        | PUp|
     * |-------------------------------------------------------------------.
     * |    |   |    |                       |    |Menu|  Fn|Home| PgD|End |
     * `-------------------------------------------------------------------'
     * Fn:  to Fn overlay
     * FnL: to Layout selector overlay
     */
    KEYMAP(
        ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,TRNS,TRNS,TRNS,           \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, END,PGDN,     TRNS,PGUP,      \
        TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
    /* 5: Layout selector
     * ,-----------------------------------------------------------.   ,---.
     * | Lq| Fc| Ld| Lw|   |   |   |   |   |   |   |   |   |       |   |   |
     * |-----------------------------------------------------------|   |---|
     * |     | Lq| Lw|   |   |   |   |   |   |   |   |   |   |     |   |   |
     * |-----------------------------------------------------------|   `---'
     * |      |   |   |Ld |   |   |   |   |   |   |   |   |        |
     * |--------------------------------------------------------------.
     * |        |   |   |Lc |   |   |   |   |   |   |   |        |    |
     * |-------------------------------------------------------------------.
     * |    |   |    |                       |    |    |    |    |    |    |
     * `-------------------------------------------------------------------'
     * Lq: set Qwerty layout
     * Lc: set Colemak layout
     * Ld: set Dvorak layout
     * Lw: set Workman layout
     */
    KEYMAP(
        FN5, FN6, FN7, FN8, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,FN5, FN8, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,FN7 ,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,           \
        TRNS,TRNS,TRNS,TRNS,FN6, TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          TRNS,               TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
    /* fc660m Layout */
    [0] = ACTION_LAYER_MOMENTARY(4),  // to Fn overlay
    [1] = ACTION_LAYER_TOGGLE(4),     // toggle arrow overlay
    [2] = ACTION_LAYER_TOGGLE(5),     // toggle Esc overlay
    [3] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC), // Task(RControl,RShift+Esc)
    [4] = ACTION_LAYER_MOMENTARY(5),  // to Layout selector
    [5] = ACTION_DEFAULT_LAYER_SET(0),  // set qwerty layout
    [6] = ACTION_DEFAULT_LAYER_SET(1),  // set colemak layout
    [7] = ACTION_DEFAULT_LAYER_SET(2),  // set dvorak layout
    [8] = ACTION_DEFAULT_LAYER_SET(3),  // set workman layout
};
