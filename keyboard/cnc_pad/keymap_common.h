/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include <avr/pgmspace.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const uint16_t fn_actions[];


/* GH60 keymap definition macro
 * K2C, K31 and  K3C are extra keys for ISO
 */
#define KEYMAP( \
    K00, K01, K02, K03, K04, \
    K10, K11, K12, K13, K14, \
         K21,           K24, \
    K30, K31, K32,      K34 \
) { \
    { KC_##K00, KC_##K01, KC_##K02, KC_##K03, KC_##K04, }, \
    { KC_##K10, KC_##K11, KC_##K12, KC_##K13, KC_##K14, }, \
    { KC_NO,    KC_##K21, KC_NO,    KC_NO,    KC_##K24, }, \
    { KC_##K30, KC_##K31, KC_##K32, KC_NO,    KC_##K34, }  \
}

#endif
