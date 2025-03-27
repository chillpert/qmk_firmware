// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

// Author: github.com/chillpert

// This is a keymap for the Iris rev. 7 keyboard.
// I simply reimplemented my Ferris Sweep keymap for this keyboard, while
// also adding a full gaming layer.
// When entering one of the gaming layers, RGB is enabled.

// prettier-ignore
// clang-format off

#include QMK_KEYBOARD_H

#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5
#define _LAYER6 6
#define _LAYER7 7
#define _LAYER8 8

enum custom_keycodes { LAYER0 = SAFE_RANGE, LAYER1, LAYER2, LAYER3, LAYER4, LAYER5, LAYER6, LAYER7, LAYER8 };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_LAYER0] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
             KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_CAPS,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_NO,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_NO,LSFT_T(KC_A),LALT_T(KC_S),KC_D,LT(3,KC_F),KC_G,                          KC_H,LT(1,KC_J),LT(5,KC_K),LALT_T(KC_L),LSFT_T(KC_SCLN),KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             KC_NO, LT(4, KC_Z),KC_X,   KC_C,    KC_V,    KC_B,    KC_MPLY,          TO(7),   KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_NO,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            MO(6), KC_LGUI, LCTL_T(KC_SPC),              KC_BSPC,  MO(2),  KC_NO
        //                                └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    // Numbers layer
    [_LAYER1] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
             KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_NO,   KC_1,    KC_2,    KC_3,    KC_DOT,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_TRNS, KC_4,    KC_5,    KC_6,    KC_COMM,                            KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_NO,   KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,         KC_TRNS,  KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                           KC_TRNS, KC_TRNS, KC_TRNS,                    KC_TRNS, KC_TRNS, KC_TRNS
        //                                └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    // Symbols layer
    [_LAYER2] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
             KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_TRNS,S(KC_QUOT),S(KC_COMM),S(KC_DOT),S(KC_LBRC),S(KC_RBRC),                     S(KC_8), KC_SLSH, KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_QUOT, S(KC_1), KC_EQL,  S(KC_9), S(KC_0),                           S(KC_EQL),KC_MINS, S(KC_7),S(KC_BSLS),S(KC_MINUS),KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_GRV, S(KC_3), S(KC_2), KC_LBRC, KC_RBRC, KC_TRNS,         KC_TRNS,KC_PERCENT,KC_DOLLAR,KC_CIRCUMFLEX,KC_TILDE,KC_BSLS,KC_NO,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                           KC_TRNS, KC_TRNS, KC_TRNS,                    KC_TRNS, KC_TRNS, KC_TRNS
        //                                └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    // Arrow keys layout
    [_LAYER3] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
             KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_INS,  KC_NO,   KC_PGUP,  KC_NO,  KC_NO,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_TRNS, KC_TRNS, KC_NO,   KC_NO,   KC_NO,                              KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, KC_TRNS, KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,          KC_TRNS, KC_DEL,  KC_NO,   KC_PGDN, KC_NO,   KC_NO,   KC_NO,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
        //                                └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    // Window switcher layout
    [_LAYER4] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
             KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_TRNS,  KC_NO,LGUI(KC_1),LGUI(KC_2),LGUI(KC_3),KC_NO,                            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
           KC_TRNS,  KC_NO,LGUI(KC_4),LGUI(KC_5),LGUI(KC_6),KC_NO,                            KC_NO,   KC_NO,   KC_NO,  KC_TRNS,  KC_TRNS, KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
           KC_TRNS,  KC_NO,LGUI(KC_7),LGUI(KC_8),LGUI(KC_9),LGUI(KC_0),KC_TRNS,     KC_TRNS,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                           KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
        //                                └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    // F keys layout
    [_LAYER5] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
             KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F12,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_TRNS, KC_F4,   KC_F5,   KC_F6,   KC_F11,                             KC_NO,   KC_NO,   KC_NO,  KC_TRNS,  KC_TRNS, KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_NO,   KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_TRNS,           KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            KC_TRNS, KC_TRNS, KC_TRNS,                  KC_TRNS, KC_TRNS, KC_TRNS
        //                                └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    // Half gaming layout (with a shortcut for starting a recording using Alt + R)
    [_LAYER6] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
             KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,     KC_9,    KC_0,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,                               KC_T,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_QUOT, KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,                               KC_G,    KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             KC_GRV, KC_LCTL,  KC_Z,    KC_X,    KC_C,    KC_V,  LALT(KC_R),        KC_TRNS,  KC_B,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                           TO(0),LALT_T(KC_LGUI),KC_SPC,                 TO(0),  KC_TRNS, KC_TRNS
        //                                └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    // Full gaming layout
    [_LAYER7] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
             KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_CAPS,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   LGUI(KC_D),        TO(0),   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                            MO(8),   LALT_T(KC_LGUI), KC_SPC,            KC_BSPC, MO(2),   KC_MPLY
        //                                └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),

    // Gaming layer 2
    [_LAYER8] = LAYOUT(
        // ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
             KC_TRNS, KC_NO,   KC_NO,   KC_NO,  KC_NO,    KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F12,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_TRNS, KC_F4,   KC_F5,   KC_F6,   KC_F11,                             KC_NO,   KC_NO,   KC_NO,   KC_TRNS, KC_TRNS, KC_NO,
        // ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
             KC_TRNS, KC_NO,   KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_TRNS,          KC_TRNS,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
        // └────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                           KC_TRNS, KC_TRNS, KC_TRNS,                    KC_TRNS, KC_TRNS, KC_TRNS
        //                                └────────┴────────┴────────┘                 └────────┴────────┴────────┘
        ),
};

enum combos { ESC, ENTER, TAB, SPACE, BACKSPACE, GAMING };

const uint16_t PROGMEM esc_combo[]       = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM enter_combo[]     = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM tab_combo[]       = {KC_D, LT(3, KC_F), COMBO_END};
const uint16_t PROGMEM space_combo[]     = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM backspace_combo[] = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM gaming_combo[]    = {KC_E, LALT_T(KC_S), LT(3, KC_F), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {[ESC] = COMBO(esc_combo, KC_ESC), [ENTER] = COMBO(enter_combo, KC_ENTER), [TAB] = COMBO(tab_combo, KC_TAB), [SPACE] = COMBO(space_combo, KC_SPACE), [BACKSPACE] = COMBO(backspace_combo, KC_BACKSPACE), [GAMING] = COMBO(gaming_combo, TG(6))};

layer_state_t prev_state = 0;

// RGB lighting for gaming-related layers
layer_state_t layer_state_set_user(layer_state_t state) {
    if (layer_state_cmp(state, _LAYER7)) {
        //    rgb_matrix_enable();
        //    rgb_matrix_mode(RGB_MATRIX_RAINBOW_BEACON);

        rgblight_enable();
        rgblight_sethsv(HSV_WHITE);
    } else if (layer_state_cmp(state, _LAYER6)) {
        // rgb_matrix_enable();
        // rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR);

        rgblight_enable();
        rgblight_sethsv(HSV_BLUE);
    } else {
        if (prev_state != 0 && prev_state == _LAYER7) {
            // Don't do anything
        } else {
            // rgb_matrix_mode(RGB_MATRIX_NONE);
            // rgb_matrix_disable();
            rgblight_disable();
        }
    }

    prev_state = state;
    return state;
}
