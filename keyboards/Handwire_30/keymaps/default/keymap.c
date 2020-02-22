#include QMK_KEYBOARD_H
#include "layers.c"
#include "custom_keycodes.c"
#include "tap_dance.c"
#include "functions.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BA] = LAYOUT(
    TAB_ALT,  KC_QUOT, KC_COMM, KC_DOT,  KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH,  \
    KC_GESC,  KC_A,    KC_O,    KC_E,    N_U,  KC_I, KC_D, N_H,  KC_T, KC_N, KC_S, KC_ENT,\
    KC_LCPO,  KC_SCLN, KC_Q,    KC_J,    KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, SFT_MIN,  \
                                TT(1), BK_SFT, KC_LCMD, KC_SPC, TT(2) \
    ),

  [LW] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_PSCR, KC_SLCK,  KC_PAUS, KC_TRNS, KC_TRNS, KC_PGUP, KC_UP,   KC_PGDN, KC_TRNS, KC_TRNS,  \
    KC_TRNS, KC_TRNS, KC_INS,  KC_HOME,  KC_DEL,  KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS, KC_TRNS,  \
    KC_TRNS, KC_TRNS, KC_END,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  \
                                    KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO \
    ),

  [RS] = LAYOUT(
    KC_1,    KC_2,    KC_3,    KC_4,     KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_LBRC, KC_RBRC,  \
    KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_ASTG, KC_TRNS, KC_TRNS, KC_TRNS,  \
                                        KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO \
    ),

  [NP] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_MINS, KC_LPRN, KC_RPRN, KC_7, KC_8, KC_9, KC_0,    KC_TRNS,  \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_EQL,  KC_LBRC, KC_RBRC, KC_4, KC_5, KC_6, KC_TRNS, KC_TRNS,  \
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_BSLS, KC_TRNS, KC_0,    KC_1, KC_2, KC_3, KC_TRNS, KC_TRNS,  \
                        KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO \
    ),

};
