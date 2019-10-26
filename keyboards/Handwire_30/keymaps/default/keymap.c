#include QMK_KEYBOARD_H

#define BASE 0
#define LOWER 1 
#define RAISE 2
#define NUMPAD 3

#define BA BASE
#define LW LOWER
#define RS RAISE
#define NP NUMPAD

enum custom_keycodes {
};

// Mod Tap Definitions
// -------------------
                                      //  Tap     Hold
                                      //  ------------------
    #define N_H LT(NP, KC_H)     //  H     Layer Numpad
    #define N_U LT(NP, KC_U)     //  U     Layer Numpad

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [BA] = LAYOUT( 
    KC_GESC, KC_QUOT, KC_COMM, KC_DOT,  KC_P, KC_Y, KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH,  \
    KC_,     KC_A,    KC_O,    KC_E,    N_U, KC_I, KC_D, N_H, KC_T, KC_N, KC_S, KC_SFTENT,\
    KC_LCPO, KC_SCLN, KC_Q,    KC_J,    KC_K, KC_X, KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RAPC,  \
                                TT(1), KC_BSPC, KC_LCMD, KC_SPC, TT(2) \
    ),

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

};