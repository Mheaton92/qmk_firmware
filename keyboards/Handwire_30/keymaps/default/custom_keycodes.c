// Custom keycodes
				                        // Mod Tap Definitions
				                        // -------------------
                                        //  Tap     Hold
                                        //  ------------------
#define N_H LT(NP, KC_H)                //  H      Layer Numpad
#define N_U LT(NP, KC_U)                //  U      Layer Numpad
#define TAB_ALT MT(MOD_LALT,KC_TAB)     //  TAB    LEFT ALT
#define SFT_SPC MT(MOD_LSFT, KC_SPC)    //  SPACE  SHIFT
#define ALT_SPC MT(MOD_LALT, KC_SPC)    //  SPACE  ALT
#define MIN_ALT MT(MOD_LALT, KC_MINS)   //   -     ALT
#define SFT_MIN MT(MOD_LSFT, KC_MINS)   //   -     SHIFT
#define BK_SFT  MT(MOD_LSFT, KC_BSPC)   //  BKSPC  SHIFT



										// Tap Dance Definitions
										// --------------------
										// Single   Double
#define C_S       TD(CT_CLN)			// :		;

enum custom_keycodes {
  NAS = SAFE_RANGE,
  CHMOD,
};