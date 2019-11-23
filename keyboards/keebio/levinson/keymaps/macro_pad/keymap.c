#include QMK_KEYBOARD_H



extern keymap_config_t keymap_config;

#define _BASE 0


/* short layer aliases */
#define _BA _BASE

enum custom_keycodes {
  IRON = SAFE_RANGE,
};

#define VOLUU  LGUI(LSFT(KC_EQL))
#define VOLU   LGUI(KC_EQL)
#define VOLD   LGUI(KC_MINS)
#define VOLDD  LGUI(LSFT(KC_MINS))
#define PLAY   LGUI(LSFT(KC_P))
#define MUTE   LGUI(KC_F1)
#define MOUNT  LGUI(KC_F9)
#define NEXT   LGUI(KC_RIGHT)
#define PREV   LGUI(KC_LEFT)
#define RES    LGUI(KC_F2)
#define LOCK   LGUI(KC_X)
#define SPOT   LGUI(LSFT(KC_M))
#define CALC   LGUI(KC_A)

// Mod Tap Definitions
// -------------------
                                      //  Tap     Hold
                                      //  ------------------



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    [_BA] = LAYOUT_ortho_4x12(
 	 VOLU,  VOLUU,  MOUNT,  KC_NO, IRON, RES,        _______, _______, _______, _______, _______, _______,
	 VOLD,  VOLDD,  PREV,   NEXT,  LOCK,  CALC,       _______, _______, _______, _______, _______, _______,
	 KC_NO, KC_NO,  KC_NO,  KC_NO, KC_NO, KC_NO,      _______, _______, _______, _______, _______, _______,
	 SPOT,  KC_NO,  MUTE,   KC_NO, PLAY,  KC_NO,      _______, _______, _______, _______, _______, _______
   )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case IRON:
      if (record->event.pressed) {
        SEND_STRING("ironcity92" SS_TAP(X_ENTER));
      } else {
      }
      break;

  }
  return true;
};