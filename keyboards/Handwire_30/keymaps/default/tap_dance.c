enum {
 CT_CLN =0,
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