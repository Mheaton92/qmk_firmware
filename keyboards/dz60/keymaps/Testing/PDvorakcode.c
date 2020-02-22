#include QMK_KEYBOARD_H
#include "version.h"

#include "keymap_german.h"

#include "keymap_nordic.h"

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here

  // Programmer's Dvorak "macros" : 
  //  To be paired with get_mods to enable both
  //  Shift functionality and Programmer's Dvorak

  DVP_ESC, // Grave escape basically i think
  DVP_AMPR,
  DVP_LBRACKET,
  DVP_LCBR,
  DVP_RCBR,
  DVP_LPRN,
  DVP_AT,

  DVP_EQUAL,
  DVP_ASTERISK,
  DVP_RPRN,
  DVP_PLUS,
  DVP_RBRACKET,
  DVP_EXLM,
  DVP_HASH,

  RU_2,
  RU_3,
  RU_4,
  RU_6,
  RU_7,
  RU_DOT,

  SHFT_COMMA,
  SHFT_DOT,

  RGB_SLD,
  RGB_FF0000,
  RGB_008000,
  RGB_0000FF,
  RGB_FFFFFF,
  RGB_800080
};


void led_set_keymap(uint8_t usb_led) {
  
}

void matrix_init_user (void) {
 
}


bool left_shift_down = false;
bool right_shift_down = false;

bool numlock = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
 
  switch (keycode) {
    case KC_LSHIFT:
    if (record->event.pressed)
      {
        left_shift_down = true;
      return true;
      }
      else
      {
        left_shift_down = false;
        return true;
      }
    break;
    case KC_RSHIFT:

      if (record->event.pressed)
      {
        right_shift_down = true;
      return true;
      }
      else
      {
        right_shift_down = false;
        return true;
      }
    break;
    case KC_NUMLOCK:

      if (record->event.pressed) 
      {
        numlock = !numlock;
    }
    break;

    case DVP_ESC:
    if (left_shift_down || right_shift_down)
    {  
      if(record->event.pressed)
        SEND_STRING("~");
      return false;
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING(SS_DOWN(X_ESCAPE));
      else
        SEND_STRING(SS_UP(X_ESCAPE));
      return false;
    }
    break;

    case DVP_AMPR:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        SEND_STRING("%");

      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("&");
    }
    return false;

    break; 

    case SHFT_DOT:
      if(record->event.pressed)
        SEND_STRING(">");
      break;

    case SHFT_COMMA:
      if(record->event.pressed)
        SEND_STRING("<");
      break;

    case DVP_LBRACKET:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
        {
          if(left_shift_down)
            unregister_code(KC_LSHIFT);
          if(right_shift_down)
            unregister_code(KC_RSHIFT);

          register_code(KC_7);
          unregister_code(KC_7);

          if(left_shift_down)
            register_code(KC_LSHIFT);
          if(right_shift_down)
            register_code(KC_RSHIFT);
        }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("[");
    }
    return false;

        return false;
        break; 
    
    case DVP_LCBR:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
       { 
          if(left_shift_down)
            unregister_code(KC_LSHIFT);
          if(right_shift_down)
            unregister_code(KC_RSHIFT);

          register_code(KC_5);
          unregister_code(KC_5);
          
          if(left_shift_down)
            register_code(KC_LSHIFT);
          if(right_shift_down)
            register_code(KC_RSHIFT);
        }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("{");
    }
    return false;
    break; 
    
    case DVP_RCBR:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_3);
        unregister_code(KC_3);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("}");
    }
    return false;
    break; 
    
    case DVP_LPRN:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_1);
        unregister_code(KC_1);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("(");
    }
    return false;
    break; 
    
    case DVP_AT:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_LSHIFT);
        register_code(KC_6);
        unregister_code(KC_6);
        unregister_code(KC_LSHIFT);
          
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("@");
    }
    return false;
    break; 

    
    case DVP_EQUAL:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_9);
        unregister_code(KC_9);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("=");
    }
    return false;
    break; 
    
    case DVP_ASTERISK:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_0);
        unregister_code(KC_0);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("*");
    }
    return false;
    break; 
    
    case DVP_RPRN:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_2);
        unregister_code(KC_2);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING(")");
    }
    return false;
    break; 
    
    case DVP_PLUS:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_4);
        unregister_code(KC_4);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("+");
    }
    return false;
    break; 
    
    case DVP_RBRACKET:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_6);
        unregister_code(KC_6);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("]");
    }
    return false;
    break; 
    
    case DVP_EXLM:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_8);
        unregister_code(KC_8);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("!");
    }
    return false;
    break; 
    
    case DVP_HASH:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_GRAVE);
        unregister_code(KC_GRAVE);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("#");
    }
    return false;
    break; 

    // Russian 
    case RU_2:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_GRAVE);
        unregister_code(KC_GRAVE);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("#");
    }
    return false;
    break; 
case RU_3:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_GRAVE);
        unregister_code(KC_GRAVE);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("#");
    }
    return false;
    break; 
case RU_4:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_GRAVE);
        unregister_code(KC_GRAVE);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("#");
    }
    return false;
    break; 
case RU_6:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_GRAVE);
        unregister_code(KC_GRAVE);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("#");
    }
    return false;
    break; 
case RU_7:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_GRAVE);
        unregister_code(KC_GRAVE);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("#");
    }
    return false;
    break; 

  case RU_DOT:
    if (left_shift_down || right_shift_down) 
    {
      if(record->event.pressed)
      {
        if(left_shift_down)
          unregister_code(KC_LSHIFT);
        if(right_shift_down)
          unregister_code(KC_RSHIFT);

        register_code(KC_GRAVE);
        unregister_code(KC_GRAVE);
        
        if(left_shift_down)
          register_code(KC_LSHIFT);
        if(right_shift_down)
          register_code(KC_RSHIFT);
      }
    }
    else
    {
      if(record->event.pressed)
        SEND_STRING("#");
    }
    return false;
    break; 

};
