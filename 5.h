#include"keymap_jp.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* new 1 * shiftキーはレイヤー変更 {{{
   * KC_LSHIFT -> NEW_2
   * ,-----------------------------------------.             ,-----------------------------------------.
   * | ESC  |  = ! |  - + |  / * |  \ | |  ~ ^ |             |  < > |  [ ] |  { } |  ( ) |  ' ` | Del  |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------|
   * | Tab  |   q  |   w  |   d  |   f  |   g  |             |   y  |   s  |   t  |   r  |  " # | Bksp |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------|
   * | Ctrl |   a  |   i  |   u  |   e  |   o  |             |   h  |   j  |   k  |   l  |  ; : |Enter |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | Shift|   z  |   x  |   c  |   v  |   b  | ---  | ---  |   n  |   m  |  . , |  @ ? |  _ & | % $  |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | ALT  | ---  | ---  | GUI  | EISU |Space |Lower |Raise |Space | KANA | GUI  | ---  | ---  | ---  |
   * `-------------------------------------------------------------------------------------------------'
   * }}} */
  [_GOB] = LAYOUT( \
      KC_ESC,  KC_EQUAL, KC_MINS, KC_SLASH, KC_BSLASH, KC_TILD,                    KC_LT, KC_LBRC, KC_LCBR, KC_LPRN, KC_QUOTE,  KC_DEL, \
      KC_TAB,  KC_Q,        KC_W,     KC_D,      KC_F,    KC_G,                     KC_Y,    KC_S,    KC_T,    KC_R,   KC_DQT, KC_BSPC, \
      KC_LCTL, KC_A,        KC_I,     KC_U,      KC_E,    KC_O,                     KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_ENT, \
      SHIFT_HOLD, KC_Z,     KC_X,     KC_C,      KC_V,    KC_B, _______, _______,   KC_N,    KC_M,  KC_DOT,   KC_AT,  KC_UNDS, _______, \
      KC_LALT, _______,  _______,  KC_LGUI,      EISU,  KC_SPC,   _LEFT,  _RIGHT, KC_SPC,    KANA, KC_LGUI, _______,  _______,  QWERTY ),

  [_SHFT] = LAYOUT( \
      KC_ESC,  KC_EXLM, KC_PLUS, KC_ASTR, KC_PIPE, KC_CIRC,                     KC_GT, KC_RBRC,  KC_RCBR, KC_RPRN,  KC_GRV,  KC_DEL, \
      KC_TAB,  S(KC_Q), S(KC_W), S(KC_D), S(KC_F), S(KC_G),                   S(KC_Y), S(KC_S),  S(KC_T), S(KC_R),  KC_DQT, KC_BSPC, \
      KC_LCTL, S(KC_A), S(KC_I), S(KC_U), S(KC_E), S(KC_O),                   S(KC_H), S(KC_J),  S(KC_K), S(KC_L), KC_COLN,  KC_ENT, \
      _______, S(KC_Z), S(KC_X), S(KC_C), S(KC_V), S(KC_B), _______, _______, S(KC_N), S(KC_M), KC_COMMA, KC_QUES, KC_AMPR,  KC_DLR, \
      KC_LALT, _______,  ADJUST,  KC_LGUI,   EISU,  KC_SPC, _______, _______,  KC_SPC,    KANA,  KC_LGUI, _______, _______,  QWERTY ),
  [_LEFT] = LAYOUT( \
      KC_ESC,  _______, _______, _______, _______, _______,                  _______, _______, _______, _______, _______,   KC_DEL, \
      KC_TAB,  _______, _______, _______, _______, _______,                     KC_7,    KC_7,    KC_9, KC_ASTR, _______,  KC_BSPC, \
      KC_LCTL, _______, _______, _______, _______, _______,                     KC_4,    KC_5,    KC_6, KC_MINS, _______,   KC_ENT, \
      _______, _______, _______, _______, _______, _______,  L_HOLD, _______,   KC_1,    KC_2,    KC_3, KC_PLUS, _______,  KC_PERC, \
      KC_LALT, NEW_3_HOLD, ADJUST, KC_LGUI,  EISU,  KC_SPC, _______,  ADJUST, KC_SPC,    KC_0, KC_LGUI, _______, _______, QWERTY ),
  [_RIGHT] = LAYOUT( \
      KC_ESC,  _______, _______, _______, _______, _______,                   KC_F10, KC_F11,  KC_F12, _______,  _______,  KC_DEL, \
      KC_TAB,  _______,   KC_UP, _______, _______, _______,                    KC_F7,  KC_F7,   KC_F9, $$$$$$$,  _______, KC_BSPC, \
      KC_LCTL  KC_LEFT, KC_DOWN, KC_RIGHT,_______, _______,                    KC_F4,  KC_F5,   KC_F6, _______,  _______,  KC_ENT, \
      _______, _______, _______, _______, _______, _______, _______,  R_HOLD,  KC_F1,  KC_F2,   KC_F3, _______,  _______, KC_PERC, \
      KC_LALT, NEW_3_HOLD, ADJUST, KC_LGUI,  EISU,  KC_SPC,  ADJUST, _______, KC_SPC,   KANA, KC_LGUI, _______,  _______, QWERTY ),
  /* }}} */

  /* Qwerty {{{
   * ,-----------------------------------------.             ,-----------------------------------------.
   * |   `  |   1  |   2  |   3  |   4  |   5  |             |   6  |   7  |   8  |   9  |   0  | Del  |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------|
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |             |   Y  |   U  |   I  |   O  |   P  | Bksp |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------|
   * | Ctrl |   A  |   S  |   D  |   F  |   G  |             |   H  |   J  |   K  |   L  |   ;  |  '   |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | Shift|   Z  |   X  |   C  |   V  |   B  |   [  |   ]  |   N  |   M  |   ,  |   .  |   /  |Enter |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |Adjust| Esc  | Alt  | GUI  | EISU |Lower |Space |Space |Raise | KANA | Left | Down |  Up  |Right |
   * `-------------------------------------------------------------------------------------------------'
      ),
   */
  [_QWERTY] = LAYOUT( \
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL, \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, \
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LBRC, KC_RBRC, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT , \
      ADJUST,  KC_ESC,  KC_LALT, KC_LGUI, EISU,    LOWER,   KC_SPC,  KC_SPC,  RAISE,   KANA,    _______, _______, _______,    GOB ),
  /* }}} */

  /* Adjust (Lower + Raise) {{{
   * ,-----------------------------------------.             ,-----------------------------------------.
   * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |             |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------|
   * |EEPRST| Reset|RGBRST|      |      |      |             |      |      |      |      |      |  Del |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------|
   * |      |      |      |Aud on|Audoff| Mac  |             | Win  |Qwerty|Colemk|Dvorak|      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      |RGB ON| HUE+ | SAT+ | VAL+ |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      | MODE | HUE- | SAT- | VAL- |
   * `-------------------------------------------------------------------------------------------------'
   */
  [_ADJUST] =  LAYOUT( \
      _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, KC_F12, \
      EEP_RST, RESET,   RGBRST,  _______, _______, _______,                   _______, _______, _______, _______, _______, KC_DEL, \
      _______, _______, _______, AU_ON,   AU_OFF,  AG_NORM,                   AG_SWAP, _______,  _______, _______, _______, _______, \
      _______, _______, _______, _______, _______, _______,   QWERTY, QWERTY, _______, _______,lRGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, \
      _______, _______, _______, _______, _______, _______,      GOB,    GOB, _______, _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD \
      )
  /* }}} */
};

