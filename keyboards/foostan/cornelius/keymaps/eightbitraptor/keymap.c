/* Copyright 2020 foostan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#define KC_ECTL MT(MOD_LCTL, KC_ESC)
#define KC_QCTL MT(MOD_RCTL, KC_QUOT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
            KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_BSPC,
            KC_ECTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QCTL,
            KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
            MO(1),   KC_LCTL, KC_LALT, KC_LGUI, MO(2),   KC_SPC,  KC_ENT,  MO(1),  KC_RGUI, KC_RALT, KC_RCTL, MO(2)
            ),

    [1] = LAYOUT(
            _______, _______, KC_7,    KC_8,    KC_9,   XXXXXXX, KC_HOME, KC_END,  KC_INS , XXXXXXX, XXXXXXX, KC_PGUP,
            _______, _______, KC_4,    KC_5,    KC_6,   XXXXXXX, KC_LEFT, KC_DOWN, KC_UP  , KC_RIGHT,XXXXXXX, KC_PGDN,
            _______, _______, KC_1,    KC_2,    KC_3,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_F11 , KC_F12 ,
            _______, _______, KC_0,    _______, MO(3),  _______, _______, MO(1),   _______, _______, _______, _______
            ),

    [2] = LAYOUT(
            _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,
            _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  , KC_MINS, KC_EQL,  KC_LCBR, KC_RCBR, KC_PIPE, KC_GRV,
            _______, KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD,
            _______, _______, _______, _______, MO(2),   _______, _______, MO(3),   _______, _______, _______, _______
            ),

    [3] = LAYOUT(
            RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
            _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
            _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
            _______, _______, _______, _______, MO(3),   _______, _______, MO(3),   _______, _______, _______, _______
            ),
};
