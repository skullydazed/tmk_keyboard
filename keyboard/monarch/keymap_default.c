#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty
     * ,-----------------------------------------------------------.  ,---.
     * |NL |=  |/  |*  |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Yen| BS|  |Ins|
     * |-----------------------------------------------------------|  |---|
     * |7  |8  |9  |-  |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|  |Del|
     * |-----------------------------------------------------------|  `---'
     * |4  |5  |6  |+  |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| # | Ent|
     * |--------------------------------------------------------------.
     * |1  |2  |3  |Ent|Shift| \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|  \|Shift| Up|
     * |-----------|   |--------------------------------------------------.
     * |0      |.  |   |Ctrl|Alt|Gui |MHen| Space| Space|Henk|Gui |Ctrl|  Fn|Left|Down|Rgt|
     * `------------------------------------------------------------------'
     */
    KEYMAP(
        NLCK,PEQL,PSLS,PAST,GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
        P7,  P8,  P9,  PMNS,TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        P4,  P5,  P6,  PPLS,CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,ENT,  \
        P1,  P2,  P3,  PENT,LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT, \
        P0,       PDOT,     LCTL,LALT,LGUI,          SPC,                RGUI, FN0,     RALT,RCTL),
    /* 4: Fn
     * ,-----------------------------------------------------------.   ,---.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |   |   |   |
     * |-----------------------------------------------------------|   |---|
     * |     |   |   |   |   |   |   |   |Psc|Slk|Pau|   |   |     |   |FnL|
     * |-----------------------------------------------------------|   `---'
     * |      |   |   |   |   |   |   |   | Hm|PgU|   |   |   |    |
     * |--------------------------------------------------------------.
     * |    |   |   |   |   |   |   |   |   |End|PgD|   |   |    |PgUp|
     * |-------------------------------------------------------------------.
     * |    |   |    |    |      |      |    |    |Menu|  Fn|Home|PgDn|End |
     * `-------------------------------------------------------------------'
     * Fn:  to Fn overlay
     */
    KEYMAP(
        TRNS,TRNS,TRNS,TRNS,ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, \
        HOME,UP,  PGUP,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        LEFT,NO,  RGHT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        END, DOWN,PGDN,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS, \
        INS,      DEL,      TRNS,TRNS,TRNS,          TRNS,               TRNS, FN0,     TRNS,TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
};
