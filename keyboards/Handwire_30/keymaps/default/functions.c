bool process_record_user(uint16_t keycode, keyrecord_t* record)
{

if (record->event.pressed) {
        switch (keycode) {
            
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

