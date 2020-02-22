
//Leader function
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

bool left_shift_down = false;
bool right_shift_down = false;


// Makes all the number keys there shifted counterparts come first and the numbers get sent when you press shift.
    // (Programmers dvorak)
bool process_record_user(uint16_t keycode, keyrecord_t* record)
{
    if (record->event.pressed) {
        switch (keycode) {
            case SN_1:
                if (record->event.pressed) {
                    uint8_t current_mods = get_mods();
                    if (current_mods & SHIFT_MOD) {
                        clear_mods();
                        SEND_STRING("~");
                        set_mods(current_mods);
                    } else {
                        SEND_STRING("$");
                    }
                }
                return false;
            case SN_2:
                if (record->event.pressed) {
                    uint8_t current_mods = get_mods();
                    if (current_mods & SHIFT_MOD) {
                        clear_mods();
                        SEND_STRING("%");
                        set_mods(current_mods);
                    } else {
                        SEND_STRING("&");
                    }
                }
                return false;
     
            case SN_3:
                if (record->event.pressed) {
                    uint8_t current_mods = get_mods();
                    if (current_mods & SHIFT_MOD) {
                        clear_mods();
                        SEND_STRING("7");
                        set_mods(current_mods);
                    } else {
                        SEND_STRING("[");
                    }
                }
                return false;
            case SN_4:
                if (record->event.pressed) {
                    uint8_t current_mods = get_mods();
                    if (current_mods & SHIFT_MOD) {
                        clear_mods();
                        SEND_STRING("5");
                        set_mods(current_mods);
                    } else {
                        SEND_STRING("{");
                    }
                }
                return false;
            case SN_5:
                if (record->event.pressed) {
                    uint8_t current_mods = get_mods();
                    if (current_mods & SHIFT_MOD) {
                        clear_mods();
                        SEND_STRING("3");
                        set_mods(current_mods);
                    } else {
                        SEND_STRING("}");
                    }
                }
                return false;
            case SN_6:
                if (record->event.pressed) {
                    uint8_t current_mods = get_mods();
                    if (current_mods & SHIFT_MOD) {
                        clear_mods();
                        SEND_STRING("1");
                        set_mods(current_mods);
                    } else {
                        SEND_STRING("(");
                    }
                }
                return false;
            case SN_7:
                if (record->event.pressed) {
                    uint8_t current_mods = get_mods();
                    if (current_mods & SHIFT_MOD) {
                        clear_mods();
                        SEND_STRING("9");
                        set_mods(current_mods);
                    } else {
                        SEND_STRING("=");
                    }
                }
                return false;
            case SN_8:
                if (record->event.pressed) {
                    uint8_t current_mods = get_mods();
                    if (current_mods & SHIFT_MOD) {
                        clear_mods();
                        SEND_STRING("0");
                        set_mods(current_mods);
                    } else {
                        SEND_STRING("*");
                    }
                }
                return false;
            case SN_9:
                if (record->event.pressed) {
                    uint8_t current_mods = get_mods();
                    if (current_mods & SHIFT_MOD) {
                        clear_mods();
                        SEND_STRING("2");
                        set_mods(current_mods);
                    } else {
                        SEND_STRING(")");
                    }
                }
                return false;
            case SN_10:
                if (record->event.pressed) {
                    uint8_t current_mods = get_mods();
                    if (current_mods & SHIFT_MOD) {
                        clear_mods();
                        SEND_STRING("4");
                        set_mods(current_mods);
                    } else {
                        SEND_STRING("+");
                    }
                }
                return false;
            case SN_11:
                if (record->event.pressed) {
                    uint8_t current_mods = get_mods();
                    if (current_mods & SHIFT_MOD) {
                        clear_mods();
                        SEND_STRING("6");
                        set_mods(current_mods);
                    } else {
                        SEND_STRING("]");
                    }
                }
                return false;
            case SN_12:
                if (record->event.pressed) {
                    uint8_t current_mods = get_mods();
                    if (current_mods & SHIFT_MOD) {
                        clear_mods();
                        SEND_STRING("8");
                        set_mods(current_mods);
                    } else {
                        SEND_STRING("!");
                    }
                }
                return false;
            case SN_13:
                if (record->event.pressed) {
                    uint8_t current_mods = get_mods();
                    if (current_mods & SHIFT_MOD) {
                        clear_mods();
                        SEND_STRING("@");
                        set_mods(current_mods);
                    } else {
                        SEND_STRING("^");
                    }
                }
                return false;
            case NAS:
                if (record->event.pressed) {
                    SEND_STRING("192.168.1.");
                } else {

                }
                break;
            case CHMOD:
                if (record->event.pressed) {
                    SEND_STRING("chmod 775 ");
                } else {

                }
                break;                

        }
    }
    return true;
};

