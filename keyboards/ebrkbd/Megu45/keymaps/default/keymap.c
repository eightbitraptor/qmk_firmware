#include "megu45.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	KEYMAP(
		KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_RBRC, KC_BSPC, 
		KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT, KC_PGUP, 
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_LSFT, KC_UP, KC_PGDN, 
		LT(1, KC_NO), KC_LGUI, KC_SPC, KC_LALT, KC_LEFT, KC_DOWN, KC_RGHT)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

