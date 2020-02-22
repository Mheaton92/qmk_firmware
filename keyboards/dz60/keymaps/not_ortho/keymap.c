#include QMK_KEYBOARD_H

#define BASE 0
#define LOWER 1
#define RAISE 2
#define ADJUST  3


#define BA BASE
#define LW LOWER
#define RS RAISE
#define AD ADJUST


enum {
 CT_CLN =0,
 ESC_CAPS,

};


void dance_cln_finished (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    register_code (KC_RSFT);
    register_code (KC_SCLN);
  } else {
    register_code (KC_SCLN);
  }
}

void dance_cln_reset (qk_tap_dance_state_t *state, void *user_data) {
  if (state->count == 1) {
    unregister_code (KC_RSFT);
    unregister_code (KC_SCLN);
  } else {
    unregister_code (KC_SCLN);
  }
}



qk_tap_dance_action_t tap_dance_actions[] = {
 [CT_CLN] = ACTION_TAP_DANCE_FN_ADVANCED (NULL, dance_cln_finished, dance_cln_reset),
 [ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),

};

#define ESC_C     TD(ESC_CAPS)
#define C_S       TD(CT_CLN)
#define TERM      G(KC_ENT)
#define TAB_CTL   MT(MOD_LCTL,KC_TAB)
#define PU_ST     LSFT_T(KC_PGUP)
#define TEST      KC_A
#define KITTY     (LCTL(KC_LSFT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BA] = LAYOUT_directional(
	    KC_GRV,  KC_1,       KC_2,    KC_3,    KC_4,    KC_5,   KC_6,  KC_7, KC_8,    KC_9,    KC_0,   KC_LBRC, KC_RBRC, KC_EQL, KC_MUTE,
	    TAB_CTL,  KC_Q,    KC_W, KC_E,  KC_R,    KC_T,   KC_Y,  KC_U, KC_I,    KC_O,    KC_P,   KC_SLSH, KC_BSLS, KC_DEL,
	    ESC_C,   KC_A,       KC_S,    KC_D,    KC_F,    KC_G,   KC_J,  KC_K, KC_L,   C_S,    KC_S,   KC_MINS, KC_ENT,
	    KC_LSFT, C_S,  KC_Q,    KC_J,    KC_K,    KC_X,   KC_B,  KC_M, KC_W,    KC_V,    KC_Z,   PU_ST, KC_UP, KC_PGDN,
	    KITTY, KC_LALT,    TT(1),   KC_BSPC, KC_RGUI, KC_SPC, TT(2), TERM, KC_LEFT, KC_DOWN, KC_RGHT),

  /* ,-----------------------------------------------------------.
   * | ` | 1|  2|  3|  4|  5|  6|  7|  8|  9|  0| [ | ] | = |Mute|
   * |-----------------------------------------------------------|
   * | Tab |  '|  ,|  .|  p|  y|  f|  g|  c|  r|  l|  /|  \| DEL |
   * |-----------------------------------------------------------|
   * |ESC CAP|  A|  o|  e|  u|  i|  d|  h|  t|  n|  s|  -|Return |
   * |-----------------------------------------------------------|
   * |Shift   | : | q | j |  k|  x|  b|  M|  w|  v|  z| PU| ^ |PD|
   * |-----------------------------------------------------------|
   * |Ctrl| alt | lw| Bckspc |MOD| space     | Ra |TERM|< | v |> |
   * `-----------------------------------------------------------'
   */
	[LW] = LAYOUT_directional(
	    KC_NO, KC_F1, KC_F2,   KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_NO, KC_NO,
	    KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_PSCR, KC_SLCK, KC_PAUS, KC_NO,
	    KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
	    KC_NO, KC_SCLN, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_INS,  KC_HOME, KC_PGUP,
	    KC_NO, MO(3), KC_TRNS, KC_NO, KC_COPY, KC_PASTE, KC_CUT, KC_UNDO, KC_DEL, KC_END, KC_PGDN),


	[RS] = LAYOUT_directional(
	    KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	     KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),


	[AD] = LAYOUT_directional(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DEBUG,
	    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO, KC_NO,
	    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_NO,
	     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	     KC_NO, KC_TRNS, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
};

    LEADER_EXTERNS();
    void matrix_scan_user(void) {
      LEADER_DICTIONARY() {
        leading = false;
        leader_end();

        // Replace the sequences below with your own sequences.
        SEQ_ONE_KEY(KC_T) {
          // When I press KC_LEAD and then T, this sends CTRL + SHIFT + T
          SEND_STRING(SS_LCTRL(SS_LSFT("t")));
        }

        // Note: This is not an array, you don't need to put any commas
        // or semicolons between sequences.
        SEQ_TWO_KEYS(KC_N, KC_T) {
          // When I press KC_LEAD and then N followed by T, this sends CTRL + T
          SEND_STRING("This is a macro");
        }

    SEQ_TWO_KEYS(KC_COMM, KC_COMM) {
          // When I press KC_LEAD and then N followed by T, this sends CTRL + T
          SEND_STRING("#define");
        }

      }
    }
