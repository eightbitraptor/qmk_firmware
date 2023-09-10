/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include <stdio.h>

#define KC_ECTL CTL_T(KC_ESC)
#define KC_QCTL RCTL_T(KC_QUOT)

#define NUM(n) KC_ ## n
#define SWAY_n(n) LGUI(NUM(n))
#define SWAY_Mn(n) LSG(NUM(n))

#define SWAY_OM LSG(KC_O)

#define SWAY_1 SWAY_n(1)
#define SWAY_2 SWAY_n(2)
#define SWAY_3 SWAY_n(3)
#define SWAY_4 SWAY_n(4)
#define SWAY_5 SWAY_n(5)
#define SWAY_6 SWAY_n(6)
#define SWAY_7 SWAY_n(7)
#define SWAY_8 SWAY_n(8)
#define SWAY_9 SWAY_n(9)

#define SWAY_M1 SWAY_Mn(1)
#define SWAY_M2 SWAY_Mn(2)
#define SWAY_M3 SWAY_Mn(3)
#define SWAY_M4 SWAY_Mn(4)
#define SWAY_M5 SWAY_Mn(5)
#define SWAY_M6 SWAY_Mn(6)
#define SWAY_M7 SWAY_Mn(7)
#define SWAY_M8 SWAY_Mn(8)
#define SWAY_M9 SWAY_Mn(9)

#define SWAY_DR LGUI(KC_D)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_ECTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QCTL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(2),  KC_SPC,     KC_ENT,   MO(1), KC_LALT
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, XXXXXXX,    KC_7,    KC_8,    KC_9, XXXXXXX,                      KC_HOME, KC_END,   KC_INS, XXXXXXX, XXXXXXX, KC_PGUP,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX,    KC_4,    KC_5,    KC_6, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, KC_PGDN,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_0,       KC_1,    KC_2,    KC_3, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_F11,  KC_F12,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______,   MO(3), _______,    _______,   MO(1), _______
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN,  KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                      KC_MINS,  KC_EQL, KC_LCBR, KC_RCBR, KC_PIPE,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,                      KC_UNDS, KC_PLUS, KC_LBRC, KC_RBRC, KC_BSLS, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______,   MO(2), _______,    _______,   MO(3), _______
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, SWAY_OM,  SWAY_1,  SWAY_2,  SWAY_3, XXXXXXX,                      XXXXXXX, SWAY_M1, SWAY_M2, SWAY_M3, SWAY_OM, SWAY_DR,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, XXXXXXX,  SWAY_4,  SWAY_5,  SWAY_6, XXXXXXX,                      XXXXXXX, SWAY_M4, SWAY_M5, SWAY_M6, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD,  SWAY_7,  SWAY_8,  SWAY_9, XXXXXXX,                      XXXXXXX, SWAY_M7, SWAY_M8, SWAY_M9, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______,   MO(3), _______,    _______,   MO(3), _______
                                      //`--------------------------'  `--------------------------'
  )
};

