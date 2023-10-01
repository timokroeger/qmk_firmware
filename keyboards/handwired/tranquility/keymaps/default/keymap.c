#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
   KC_LGUI, LALT_T(KC_TAB), LSFT_T(KC_SPC), RCTL_T(KC_ENT), RCTL_T(KC_DEL), RSFT_T(KC_BSPC), LT(1, KC_ESC), KC_NO
),
[1] = LAYOUT(
    RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    _______, _______, _______, _______, _______, _______,   KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN, KC_F12,
    _______, _______, _______, _______, _______, _______,   KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______,
    _______, _______, _______, _______, _______, _______,   KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, _______,
                       _______, _______, _______, _______, _______, _______, _______, _______
),
};
