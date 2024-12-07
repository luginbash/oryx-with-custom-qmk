#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_245_245,
  HSV_74_255_206,
  HSV_152_255_255,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_LBRC,                                        KC_RBRC,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_GRAVE,                                       KC_DQUO,        KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_LEFT_GUI,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_DELETE,                                                                      KC_BSPC,        KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_HOME,        KC_END,         KC_SPACE,       KC_MEH,                                                                                                         OSL(1),         KC_SPACE,       KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       
    KC_ESCAPE,      KC_F6,          KC_F5,                          KC_F12,         KC_F11,         KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_LCBR,                                        KC_RCBR,        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLS,        KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_COMMA,       HSV_0_245_245,  HSV_74_255_206, HSV_152_255_255,RGB_MODE_FORWARD,                                                                                                RGB_TOG,        KC_TRANSPARENT, KC_0,           KC_DOT,         KC_EQUAL,       KC_TRANSPARENT, 
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                KC_TRANSPARENT, KC_TRANSPARENT, KC_HYPR
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    MU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MU_NEXT,        KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_F11,                         KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {152,255,255}, {86,13,210}, {0,245,245}, {86,13,210}, {208,255,255}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {151,218,204}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {84,218,204}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {84,218,204}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {0,0,255}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {0,255,255}, {86,13,210}, {86,13,210}, {0,245,245}, {86,13,210}, {86,13,210}, {86,13,210}, {0,255,255}, {94,247,168}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {94,247,168}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {94,247,168}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {94,247,168}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {0,0,255}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {86,13,210}, {0,245,245}, {86,13,210}, {41,255,255}, {152,255,255} },

    [1] = { {0,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {41,241,226}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,254}, {0,0,254}, {0,0,254}, {0,0,246}, {152,255,255}, {0,0,254}, {0,0,254}, {0,0,254}, {0,0,254}, {152,255,255}, {0,0,254}, {0,0,254}, {0,0,254}, {0,0,246}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {41,241,226}, {152,255,255}, {152,255,255}, {197,255,255}, {0,0,255}, {152,255,255}, {152,255,255} },

    [2] = { {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255}, {48,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_0_245_245:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(0,245,245);
        }
        return false;
    case HSV_74_255_206:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(74,255,206);
        }
        return false;
    case HSV_152_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(152,255,255);
        }
        return false;
  }
  return true;
}



