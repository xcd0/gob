#include"keymap_jp.h"

#define JA_CLON KC_QUOT  // : and +
#define JA_AT   KC_LBRC  // @ and `
#define JA_HAT  KC_EQL   // ^ and ~
#define JA_ENUN KC_RO    // \ and _ (EN mark and UNder score)
#define JA_ENVL KC_JYEN  // \ and | (EN mark and Vertical Line)
#define JA_LBRC KC_RBRC  // [ and {
#define JA_RBRC KC_BSLS  // ] and }
#define JA_LCBR KC_RCBR  // {
#define JA_RCBR KC_PIPE  // }
#define JA_LPRN KC_ASTR  // (
#define JA_RPRN KC_LPRN  // )
#define JA_DQT  KC_AT    // "
#define JA_AMPR KC_CIRC  // &
#define JA_QUOT KC_AMPR  // '
#define JA_TILD KC_PLUS  // ~"
#define JA_UNDS S(KC_RO) // _
#define JA_BKQT S(KC_LBRC) // `
#define JA_VSPP S(KC_JYEN) // |
#define JA_BKLS KC_RO    // back slash
#define JA_PLUS KC_COLN  // +
#define JA_ASTR KC_DQT   // *
#define JA_EXLM S(KC_MINS) // !
#define JA_COLN KC_QUOT  // :

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* new 1 * shiftキーはレイヤー変更 {{{
   * KC_LSHIFT -> NEW_2
   * ,-----------------------------------------.             ,-----------------------------------------.
   * | ESC  |  = ! |  - + |  / * |  \ | |  ~ ^ |             |  < > |  [ ] |  { } |  ( ) |  ' ` | Del  |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------|
   * | Tab  |   q  |   w  |   d  |   f  |   g  |             |   y  |   s  |   t  |   r  |   p  | Bksp |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------|
   * | Ctrl |   a  |   i  |   u  |   e  |   o  |             |   h  |   j  |   k  |   l  |  ; : | Enter|
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | Shift|   z  |   x  |   c  |   v  |   b  | " #  | % $  |   n  |   m  |  . , |  @ ? |  _ & | ---  |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | ALT  | ---  |ADJUST| GUI  | EISU |Space | LEFT |RIGHT |Space | KANA | GUI  | ---  | ---  | QWRTY|
   * `-------------------------------------------------------------------------------------------------'
   * }}} */
  [_GOB] = LAYOUT( \
      KC_ESC, JA_EXLM, KC_MINS, KC_SLASH, JA_BKLS, JA_TILD,                   KC_LT, JA_LBRC, JA_LCBR, JA_LPRN, JA_QUOT,  KC_DEL, \
      KC_TAB,  KC_Q,    KC_W,     KC_D,      KC_F,    KC_G,                    KC_Y,    KC_S,    KC_T,    KC_R,    KC_P, KC_BSPC, \
      KC_LCTL, KC_A,    KC_I,     KC_U,      KC_E,    KC_O,                    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_ENT, \
      SHIFT,   KC_Z,    KC_X,     KC_C,      KC_V,    KC_B, JA_DQT, KC_PERC,   KC_N,    KC_M,  KC_DOT,   JA_AT, JA_UNDS, _______, \
      KC_LALT, _______, ADJUST, KC_LGUI,     EISU,  KC_SPC,   LEFT,   RIGHT, KC_SPC,    KANA, KC_LGUI, _______,  QWERTY,  GOB ),
  [_SHIFT] = LAYOUT( \
      KC_ESC,  KC_EXLM, JA_PLUS, JA_ASTR, JA_VSPP, JA_HAT,                      KC_GT, JA_RBRC,  JA_RCBR, JA_RPRN, JA_BKQT,  KC_DEL, \
      KC_TAB,  S(KC_Q), S(KC_W), S(KC_D), S(KC_F), S(KC_G),                   S(KC_Y), S(KC_S),  S(KC_T), S(KC_R), S(KC_P), KC_BSPC, \
      KC_LCTL, S(KC_A), S(KC_I), S(KC_U), S(KC_E), S(KC_O),                   S(KC_H), S(KC_J),  S(KC_K), S(KC_L), JA_COLN,  KC_ENT, \
      _______, S(KC_Z), S(KC_X), S(KC_C), S(KC_V), S(KC_B), KC_HASH,  KC_DLR, S(KC_N), S(KC_M), KC_COMMA, KC_QUES, JA_AMPR, _______, \
      KC_LALT, _______,  ADJUST, KC_LGUI,    EISU,  KC_SPC, _______, _______,  KC_SPC,    KANA,  KC_LGUI, _______, _______, _______ ),
  [_LEFT] = LAYOUT( \
      KC_ESC,  _______, _______, _______, _______, _______,                  _______, _______, _______, KC_SLASH, _______,   KC_DEL, \
      KC_TAB,  _______, _______, _______, _______, _______,                     KC_7,    KC_8,    KC_9, JA_ASTR, _______,  KC_BSPC, \
      KC_LCTL, _______, _______, _______, _______, _______,                     KC_4,    KC_5,    KC_6, KC_MINS, _______,   KC_ENT, \
      _______, _______, _______, _______, _______, _______,  L_HOLD, _______,   KC_1,    KC_2,    KC_3, JA_PLUS, _______,  KC_PERC, \
      KC_LALT, _______,  ADJUST, KC_LGUI,    EISU,  KC_SPC, _______,  ADJUST, KC_SPC,    KC_0, KC_LGUI, _______, _______, _______ ),
      /*KC_LALT, NEW_3_HOLD, ADJUST, KC_LGUI,  EISU,  KC_SPC, _______,  ADJUST, KC_SPC,    KC_0, KC_LGUI, _______, _______, QWERTY ),*/
  [_RIGHT] = LAYOUT( \
      KC_ESC,  _______, _______, _______, _______, _______,                   KC_F10, KC_F11,  KC_F12, _______,  _______,  KC_DEL, \
      KC_TAB,  _______,   KC_UP, _______, _______, _______,                    KC_F7,  KC_F8 ,   KC_F9, _______,  _______, KC_BSPC, \
      KC_LCTL, KC_LEFT, KC_DOWN, KC_RIGHT,_______, _______,                    KC_F4,  KC_F5,   KC_F6, _______,  _______,  KC_ENT, \
      _______, _______, _______, _______, _______, _______, _______,  R_HOLD,  KC_F1,  KC_F2,   KC_F3, _______,  _______, KC_PERC, \
      KC_LALT, _______,  ADJUST, KC_LGUI,    EISU,  KC_SPC,  ADJUST, _______, KC_SPC,   KANA, KC_LGUI, _______,  _______, _______ ),
     /* KC_LALT, NEW_3_HOLD, ADJUST, KC_LGUI,  EISU,  KC_SPC,  ADJUST, _______, KC_SPC,   KANA, KC_LGUI, _______,  _______, QWERTY ),*/
  /* }}} */

  /* Qwerty {{{
   * ,-----------------------------------------.             ,-----------------------------------------.
   * |   `  |   1  |   2  |   3  |   4  |   5  |             |   6  |   7  |   8  |   9  |   0  | Del  |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------|
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |             |   Y  |   U  |   I  |   O  |   P  | Bksp |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------|
   * | Ctrl |   A  |   S  |   D  |   F  |   G  |             |   H  |   J  |   K  |   L  |   ;  |Enter |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | Shift|   Z  |   X  |   C  |   V  |   B  |   [  |   ]  |   N  |   M  |   ,  |   .  |   /  |   '  |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * | ALT  | ---  |ADJUST| GUI  | EISU |Space |LOWER |RAISE |Space | KANA | GUI  | ---  | ---  | QWRTY|
   * `-------------------------------------------------------------------------------------------------'
      ),
   */
  [_QWERTY] = LAYOUT( \
      KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_DEL, \
      KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC, \
      KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_ENT, \
      KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC, KC_RBRC,   KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_QUOT, \
      KC_LALT, _______, ADJUST, KC_LGUI,  EISU,  KC_SPC,   LOWER,   RAISE, KC_SPC,    KANA, KC_LGUI, _______, QWERTY,  GOB ),
  /* }}} */

  /* Adjust (Lower + Raise) {{{
   * ,-----------------------------------------.             ,-----------------------------------------.
   * |      |      |      |      |      |      |             |      |      |      |      |      |      |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------|
   * |EEPRST|      |RGBRST|      |      |      |             |      |      |      |      |      |      |
   * |------+------+------+------+------+------|             |------+------+------+------+------+------|
   * |      |      |      |Aud on|Audoff| Mac  |             | Win  |      |      |      |      |      |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |Reset |      |      |      |      |      |      |      |RGB ON| HUE+ | SAT+ | VAL+ |
   * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
   * |      |      |      |      |      |      |      |      |      |      | MODE | HUE- | SAT- | VAL- |
   * `-------------------------------------------------------------------------------------------------'
   */
  [_ADJUST] = LAYOUT( \
      _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
      EEP_RST, _______,   RGBRST,  _______, _______, _______,                   _______, _______, _______, _______, _______, _______, \
      _______, _______, _______, AU_ON,   AU_OFF,  AG_NORM,                   AG_SWAP, _______, _______, _______, _______, _______, \
      _______, _______,   RESET, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD )
  /* }}} */
};

