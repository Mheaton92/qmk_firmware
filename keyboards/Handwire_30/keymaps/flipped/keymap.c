#include QMK_KEYBOARD_H

#define BASE 0
#define LOWER 1
#define RAISE 2
#define NUMPAD 3

#define BA BASE
#define LW LOWER
#define RS RAISE
#define NP NUMPAD


// Mod Tap Definitions
// -------------------
                                      //  Tap     Hold
                                      //  ------------------
    #define N_H LT(NP, KC_H)     //  H     Layer Numpad
    #define N_U LT(NP, KC_U)     //  U     Layer Numpad

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BA] = LAYOUT(
    KC_SLSH,   KC_L, KC_R, KC_C, KC_G, KC_F, KC_Y, KC_P, KC_DOT, KC_COMM, KC_QUOT, KC_GESC, \
    KC_SFTENT, KC_S, KC_N, KC_T, N_H,  KC_D, KC_I, N_U,  KC_E,   KC_O,    KC_A,    KC_TAB,\
    KC_RAPC,   KC_Z, KC_V, KC_W,  KC_M, KC_B, KC_X, KC_K, KC_J,   KC_Q,    KC_V,    KC_LCPO,  \
                                KC_A, KC_SPC, KC_LCMD, KC_BSPC, KC_H\
    ),
/*
  [LW] = LAYOUT(
    KC_, KC_, KC_, KC_,  KC_, KC_, KC_, KC_,     KC_UP,     KC_,     KC_, KC_,  \
    KC_, KC_, KC_, KC_,  KC_, KC_, KC_, KC_LEFT, KC_DOWN, KC_RGHT, KC_, KC_,  \
    KC_, KC_, KC_, KC_,  KC_, KC_, KC_, KC_,     KC_,     KC_,     KC_, KC_,  \
                        KC_ KC_, KC_, KC_, KC_ \
    ),

  [RS] = LAYOUT(
    KC_1, KC_2, KC_3, KC_4,  KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_, KC_,  \
    KC_, KC_, KC_, KC_,  KC_, KC_, KC_, KC_, KC_, KC_, KC_, KC_,  \
    KC_, KC_, KC_, KC_,  KC_, KC_, KC_, KC_, KC_, KC_, KC_, KC_,  \
                        KC_ KC_, KC_, KC_, KC_ \
    ),

  [NP] = LAYOUT(
    KC_, KC_, KC_, KC_,  KC_, KC_, KC_, KC_7, KC_8, KC_9, KC_, KC_,  \
    KC_, KC_, KC_, KC_,  KC_, KC_, KC_, KC_4, KC_5, KC_6, KC_, KC_,  \
    KC_, KC_, KC_, KC_,  KC_, KC_, KC_0, KC_1, KC_2, KC_3, KC_, KC_,  \
                        KC_ KC_, KC_, KC_, KC_ \
    ),
*/
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  // If console is enabled, it will print the matrix position and status of each key pressed
#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);
#endif
  return true;
}
