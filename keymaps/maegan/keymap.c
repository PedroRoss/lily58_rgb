#include QMK_KEYBOARD_H

enum layer_number {
  _DEVO = 0,
  _SECOND,
  _THIRD,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | `    |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |BackSP|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | Del  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LShift|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LCtrl |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |  `   |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |   -  |  +   |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_DEVO] = LAYOUT(
  KC_ESC,   KC_1,      KC_2,    KC_3,    KC_4,    KC_5,                              KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_APP, \
  KC_TAB,   KC_QUOT,   KC_COMM, KC_DOT,  KC_P,    KC_Y,                              KC_F,    KC_G,    KC_C,    KC_R,    KC_L,  KC_SLSH, \
  KC_CAPS,  KC_A,      KC_O,    KC_E,    KC_U,    KC_I,                              KC_D,    KC_H,    KC_T,    KC_N,    KC_S,  KC_MINS, \
  KC_RGUI,  KC_SCLN,   KC_Q,    KC_J,    KC_K,    KC_X, TO(_DEVO),           TO(_SECOND),  KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,  KC_EQL, \
                       KC_LSFT, KC_LCTL, KC_LALT, KC_SPC,            KC_ENT, KC_BSPC, KC_DEL, KC_INS \

),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  |  F10 | Home |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  F11 | F12  |      |      |      |                    |      |      |      |      |      | End  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | CAPS |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |      |
 * |------+------+------+------+------+------|   |   |    |   |   |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |   _  |   +  |   {  |   }  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_SEGUNDA] = LAYOUT(
  KC_ESC),   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                                KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
  KC_F1, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                              XXXXXXX, KC_HOME, KC_UP,   KC_END, KC_PGUP, XXXXXXX, \
  XXXXXXX, XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, XXXXXXX,                              XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, XXXXXXX, \
  XXXXXXX, XXXXXXX, LCTL(KC_X), LCTL(KC_C),  LCTL(KC_V), XXXXXXX, TO(_DEVO),      TO(_THIRD), KC_PSCR, KC_WHOM, KC_FIND, KC_MYCM, XXXXXXX, XXXXXXX, \
                             XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC,             KC_ENT, KC_BSPC, KC_DEL, KC_INS \

),

/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |  Up  |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | Left | Down | Right|      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|   |   |    |    |  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |   \  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_TERCERA] = LAYOUT(
  KC_ESC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                             XXXXXXX, XXXXXXX, KC_PSLS, KC_PAST, KC_PMNS, XXXXXXX, \
  XXXXXXX, KC_P,    KC_A,    KC_O,    KC_T,    KC_PMNS,                             KC_BSPC, KC_P7, KC_P8,KC_P9, KC_PPLS, XXXXXXX, \
  XXXXXXX, XXXXXXX, KC_S,    KC_P,    KC_A,    XXXXXXX,                             KC_DEL, KC_P4, KC_P5, KC_P6, KC_PCMM, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, KC_I,    XXXXXXX, XXXXXXX, TO(_DEVO),     TO(_ADJUST), KC_INS, KC_P1, KC_P2, KC_P3, KC_PEQL, XXXXXXX, \
                             KC_LSFT, KC_LCTL, KC_LALT, KC_SPC,             KC_ENT,  KC_P0,   KC_PDOT, XXXXXXX \

),

/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT( \
  KC_ESC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, KC_MPRV, KC_VOLD, KC_MPLY, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, KC_MNXT, KC_VOLU, KC_MUTE, XXXXXXX,                   XXXXXXX, XXXXXXX, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, TO(_DEVO), TO(_DEVO), XXXXXXX, XXXXXXX, RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,\
                             KC_LSFT, KC_LCTL, KC_LALT, KC_SPC,            KC_ENT, KC_BSPC, KC_DEL, KC_INS \
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
