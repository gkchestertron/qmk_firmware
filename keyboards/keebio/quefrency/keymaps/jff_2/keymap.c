#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _FN1 1

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_60_with_macro(
    KC_DEL, KC_ESC, KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,  KC_CAPS, \
    KC_DOWN, KC_UP, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, \
    KC_LEFT, KC_RIGHT, KC_RCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT, \
    KC_PGDN, KC_PGUP, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP, \
    KC_HOME, KC_INS, KC_LCTL, KC_LALT, KC_LGUI, KC_BSPC, MO(_FN1),          KC_SPC, MO(_FN1), KC_RGUI, KC_RALT, KC_RALT, KC_RALT, KC_RCTL
  ),

  [_FN1] = LAYOUT(
    KC_ESC, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_BSPC, \
    RGB_TOG, RGB_MOD, KC_MS_BTN1, KC_MS_UP,   KC_MS_BTN2, _______, _______, _______, _______, _______, _______, KC_PGDN, KC_PGUP, _______, \
    _______, _______, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______, _______,\
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    KC_TILD, _______, _______, KC_DEL, KC_DEL, KC_DEL, KC_DEL,          _______, _______, _______, KC_PSTE, _______
  )
};
