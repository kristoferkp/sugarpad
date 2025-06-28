// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_P7,   KC_P8,   KC_P9,   KC_MPLY,
        KC_P4,   KC_P5,   KC_P6,   TO(1),
        KC_P1,   KC_P2,   KC_P3,   TO(3)
    ),
    [1] = LAYOUT(
        KC_F7,   KC_F8,   KC_F9,   KC_MPLY,
        KC_F4,   KC_F5,   KC_F6,   TO(2),
        KC_F1,   KC_F2,   KC_F3,   TO(0)
    ),
    [2] = LAYOUT(
        KC_F13,    KC_F14,    KC_F15,    KC_MPLY,
        KC_F16,    KC_F17,    KC_F18,    TO(3),
        KC_F19,    KC_F20,    KC_F21,    TO(0)
    ),
    [3] = LAYOUT(
        KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_MPLY,
        KC_TRNS,    KC_TRNS,    KC_TRNS,    TO(0),
        KC_TRNS,    KC_TRNS,    KC_TRNS,    TO(1)
    )
};

const uint16_t PROGMEM encoder_map[][1][2] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [2] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [3] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
};