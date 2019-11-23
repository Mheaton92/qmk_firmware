#include QMK_KEYBOARD_H
#include "layers.c"
#include "custom_keycodes.c"
#include "tap_dance.c"
#include "functions.c"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[BA] = LAYOUT_directional(
	    KC_GRV,  KC_1,       KC_2,    KC_3,    KC_4,    KC_5,   KC_6,  KC_7, KC_8,    KC_9,    KC_0,   KC_LBRC, KC_RBRC, KC_EQL, KC_MUTE,
	    TAB_CTL,  KC_QUOT,   KC_COMM, KC_DOT,  KC_P,    KC_Y,   KC_F,  KC_G, KC_C,    KC_R,    KC_L,   KC_SLSH, KC_BSLS, KC_DEL,
	    ESC_C,   KC_A,    KC_O,    KC_E,    NUMP,    KC_I,   KC_D,  KC_H, KC_T,    KC_N,    KC_S,   KC_MINS, KC_ENT,
	    KC_LSFT, C_S,  KC_Q,    KC_J,    KC_K,    KC_X,   KC_B,  KC_M, KC_W,    KC_V,    KC_Z,   PU_ST, KC_UP, KC_PGDN,
	    KITTY, KC_LALT,    TT(1),   KC_BSPC, KC_RGUI, KC_SPC, TT(5), TERM, KC_LEFT, KC_DOWN, KC_RGHT),

	[LW] = LAYOUT_directional(
	    KC_NO, KC_F1, KC_F2,   KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,  KC_NO, KC_NO,
	    KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_PSCR, KC_SLCK, KC_PAUS, KC_NO,
	    KC_NO, KC_NO, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,
	    DF(0), KC_SCLN, KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  KC_NO,  KC_INS,  KC_HOME, KC_PGUP,
	    DF(4), MO(3), KC_TRNS, KC_NO, KC_COPY, KC_PASTE, KC_CUT, KC_UNDO, KC_DEL, KC_END, KC_PGDN),


	[RS] = LAYOUT_directional(
	    KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_NO, KC_NO, KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_NO, KC_NO, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	     KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),

  [NP] = LAYOUT_directional(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_7, KC_8, KC_9, KC_NO, KC_NO, KC_NO, KC_NO,        
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_4, KC_5, KC_6, KC_NO, KC_NO, KC_NO,               
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_NO, KC_NO, KC_NO, KC_NO, 
      KC_NO, KC_NO, KC_NO, KC_NO, KC_0, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,  ),

	[AD] = LAYOUT_directional(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DEBUG,
	   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_NO, KC_NO,
	   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_NO,
	   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
	   KC_NO, KC_TRNS, KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

  [PD] = LAYOUT_directional(
      SN_1,    SN_2,    SN_3,    SN_4,    SN_5,   SN_6,  SN_7, SN_8,    SN_9,    SN_10,   SN_11, SN_12, KC_HASH, KC_DEL, KC_MUTE,
      TAB_CTL, C_S, KC_COMM, KC_DOT,  KC_P,    KC_Y,   KC_F,  KC_G, KC_C,    KC_R,    KC_L,   KC_SLSH, SN_13, KC_BSLS, 
      ESC_CAPS, KC_A,    KC_O,    KC_E,    NUMP,    KC_I,   KC_D,  KC_H, KC_T,    KC_N,    KC_S,   KC_MINS, KC_ENT,
      KC_LSFT,  KC_QUOT,      KC_Q,    KC_J,    KC_K,    KC_X,   KC_B,  KC_M, KC_W,    KC_V,    KC_Z,   PU_ST, KC_UP, KC_PGDN,
      KITTY, KC_LALT, TT(1),      KC_BSPC,             KC_RGUI,     KC_SPC,      TT(5), TERM, KC_LEFT, KC_DOWN, KC_RGHT)
};

 /*    Use this to make new layers.
 *
 *     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,KC_NO,
 *     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,        
 *     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,               
 *     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
 *     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
 */
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
  /* ,-----------------------------------------------------------.
   * | ~ | |  |  |  |   |   |   |   |   |   |   |   |   |    |
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