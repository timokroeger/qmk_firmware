#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
    KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,      KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                 KC_NO, KC_TAB, KC_SPC,  LSFT_T(KC_ESC), RSFT_T(KC_ENT), KC_BSPC, LT(1, KC_DEL), KC_NO
),

[1] = LAYOUT(
    QK_BOOT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,     KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
    _______, _______, _______, _______, _______, _______,   KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN, KC_F12,
    _______, _______, _______, _______, _______, _______,   KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,  _______,
    _______, _______, _______, _______, _______, _______,   KC_MUTE, KC_VOLD, KC_VOLU, _______, _______, CG_TOGG,
                       _______, _______, _______, _______, _______, _______, _______, _______
),
};

const uint16_t PROGMEM fd_combo[] = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM fs_combo[] = {KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM fa_combo[] = {KC_F, KC_A, COMBO_END};
const uint16_t PROGMEM fds_combo[] = {KC_F, KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM jl_combo[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM jscln_combo[] = {KC_J, KC_SCLN, COMBO_END};
const uint16_t PROGMEM jkl_combo[] = {KC_J, KC_K, KC_L, COMBO_END};

combo_t key_combos[] = {
    COMBO(fd_combo, KC_LCTL),
    COMBO(fs_combo, KC_LALT),
    COMBO(fa_combo, KC_LGUI),
    COMBO(fds_combo, LCTL(KC_LALT)),
    COMBO(jk_combo, KC_LCTL),
    COMBO(jl_combo, KC_LALT),
    COMBO(jscln_combo, KC_LGUI),
    COMBO(jkl_combo, LCTL(KC_LALT)),
};
