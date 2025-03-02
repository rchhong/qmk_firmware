// clang-format off
#include QMK_KEYBOARD_H
#define COLEMAK_DH 0
#define FUNCTION 1

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [COLEMAK_DH] = LAYOUT_65_ansi_blocker( /* Base */
        QK_GESC,               KC_1,     KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_BSPC,  KC_HOME,
        KC_TAB,                KC_Q,     KC_W,    KC_F,    KC_P,    KC_B,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,  KC_LBRC, KC_RBRC, KC_BSLS,  KC_PGUP,
        LT(FUNCTION, KC_BSPC), KC_A,     KC_R,    KC_S,    KC_T,    KC_G,    KC_M,    KC_N,    KC_E,    KC_I,    KC_O,     KC_QUOT,          KC_ENT,   KC_PGDN,
        KC_LSFT,               KC_X,     KC_C,    KC_D,    KC_V,    KC_Z,    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,          KC_UP,    KC_END,
        KC_LCTL,               KC_LGUI,  KC_LALT,                   KC_SPC,                    KC_RALT,          KC_RCTL,  KC_LEFT,          KC_DOWN,  KC_RIGHT),
    [FUNCTION] = LAYOUT_65_ansi_blocker( /* FN */
        QK_GESC,               KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_DEL,   KC_TRNS,
        KC_TRNS,               KC_MPRV,  KC_MPLY, KC_MNXT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,  KC_TRNS, KC_PSCR,  KC_SCRL, KC_PAUS, QK_BOOT,  KC_TRNS,
        KC_TRNS,               RGB_TOG,  KC_VOLD, KC_VOLU, KC_MUTE, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_GRV,   KC_TRNS,          KC_TRNS,  KC_TRNS,
        KC_LSFT,               RGB_VAI,  RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS,
        KC_TRNS,               KC_TRNS,  KC_TRNS,                   KC_TRNS,                   KC_TRNS,          KC_TRNS,  KC_TRNS,          KC_TRNS,  KC_TRNS),
};



#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
