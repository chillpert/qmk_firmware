// Copyright 2023 Danny Nguyen (@nooges)
// SPDX-License-Identifier: GPL-2.0-or-later

// Required combinations:

// (Shift) Ctrl + Tab
// (Shift) Alt + Tab

// Gui + Tab

#include QMK_KEYBOARD_H

enum custom_layer {
    _MAIN,
    _NUMPAD,
    _SYMBOLS,
    _WINDOWSWITCHER,
    _ARROWS,
    _FKEYS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MAIN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_CAPS,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_A,    KC_S,    KC_D,   LT(4,KC_F), KC_G,                             KC_H,    LT(1,KC_J),    LT(5,KC_K),    MT(MOD_LALT,KC_L),    MT(MOD_LSFT,KC_SCLN), KC_TAB,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, LT(3,KC_Z), KC_X,  KC_C,    KC_V,    KC_B,    KC_MPLY,          KC_MNXT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_LALT,  KC_SPC,                    KC_BSPC,  MO(2),  KC_ENT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_NUMPAD] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRNS,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   RGB_TOG,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,    KC_NO,   KC_1,   KC_2,   KC_3,   KC_DOT,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,    KC_NO,   KC_4,   KC_5,   KC_6,   KC_COMM,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,    KC_NO,   KC_7,   KC_8,   KC_9,   KC_0,   KC_TRNS,            KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS,    KC_TRNS,   KC_TRNS,              KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_SYMBOLS] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, S(KC_QUOT), S(KC_COMM), S(KC_DOT), S(KC_LBRC), S(KC_RBRC),              S(KC_8), KC_SLSH, KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_QUOT, S(KC_1), KC_EQL,  S(KC_9), S(KC_0),                           S(KC_EQL), KC_MINS, S(KC_7), S(KC_BSLS), S(KC_MINUS), KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS, KC_GRV,  S(KC_3), S(KC_2), KC_LBRC, KC_RBRC, KC_TRNS,        KC_TRNS, KC_PERCENT, KC_DOLLAR, KC_CIRCUMFLEX, KC_TILDE, KC_BSLS, KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS,  KC_TRNS, KC_TRNS,                  KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_WINDOWSWITCHER] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRNS,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,    KC_NO,   G(KC_1), G(KC_2), G(KC_3),   KC_NO,                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,    KC_NO,   G(KC_4), G(KC_5), G(KC_6),   KC_NO,                          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,    KC_NO,   G(KC_7), G(KC_8), G(KC_9), G(KC_0), KC_TRNS,        KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_ARROWS] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRNS,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                            KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                            KC_INS, KC_NO,   KC_PGUP,  KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                            KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO, KC_TRNS,          KC_TRNS, KC_DEL, KC_NO,  KC_PGDN,   KC_NO,   KC_NO,  KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [_FKEYS] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TRNS,    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,    KC_NO,   KC_F1,   KC_F2,   KC_F3,   KC_F12,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,    KC_NO,   KC_F4,   KC_F5,   KC_F6,   KC_F11,                             KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TRNS,    KC_NO,   KC_F7,   KC_F8,   KC_F9,   KC_F10, KC_TRNS,        KC_TRNS,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_TRNS,  KC_TRNS, KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
};

enum combos {
  ESC,
  ENTER,
  TAB,
  SPACE,
  BACKSPACE
//   GAMING
};

const uint16_t PROGMEM esc_combo[] = { KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM enter_combo[] = { KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM tab_combo[] = { KC_D, LT(4,KC_F), COMBO_END};
const uint16_t PROGMEM space_combo[] = { KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM backspace_combo[] = { KC_U, KC_I, COMBO_END};
// const uint16_t PROGMEM gaming_combo[] = { KC_E, LALT_T(KC_S), LT(3, KC_F), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [ESC] = COMBO(esc_combo, KC_ESC),
  [ENTER] = COMBO(enter_combo, KC_ENTER),
  [TAB] = COMBO(tab_combo, KC_TAB),
  [SPACE] = COMBO(space_combo, KC_SPACE),
  [BACKSPACE] = COMBO(backspace_combo, KC_BACKSPACE),
//   [GAMING] = COMBO(gaming_combo, TG(6))
};