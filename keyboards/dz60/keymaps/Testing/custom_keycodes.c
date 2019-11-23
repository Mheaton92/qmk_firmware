#define TERM      G(KC_ENT)
#define TAB_CTL   MT(MOD_LCTL,KC_TAB)
#define PU_ST     LSFT_T(KC_PGUP)
#define KITTY     (LCTL(KC_LSFT))
#define SHIFT_MOD MOD_BIT(KC_LSFT)
#define ESC_C     TD(ESC_CAPS)
#define C_S       TD(CT_CLN)
#define NUMP      LT(5, KC_U)

enum custom_keycodes
{
  CT_CLN = 0,
  ESC_CAPS,
  SN_1 = SAFE_RANGE,
  SN_2,
  SN_3,
  SN_4,
  SN_5,
  SN_6,
  SN_7,
  SN_8,
  SN_9,
  SN_10,
  SN_11,
  SN_12,
  SN_13
};