#include "quantum_keycodes.h"
#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _MEDIA_ARROWS 1
#define _MOUSE 2
#define _BRACKETS 3
#define _GAME 4

// #include "features/layers.c"
// #include "features/combos.c"
// #include "features/overrides.c"
// #include "features/rgb.c"

/**
 *  Layer maps
 * */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    // Default
    [_QWERTY] = LAYOUT(
        //┌─────────┬───────────────┬────────┬───────┬───────┬────────┐                                   ┌────────┬────────┬───────┬────────┬─────────────────────┬────────┐
            KC_ESC,    KC_1,           KC_2,   KC_3,   KC_4,   KC_5,                                         KC_6,     KC_7,   KC_8,   KC_9,         KC_0,          KC_BSPC,
        //├─────────┼───────────────┼────────┼───────┼───────┼────────┤                                   ├────────┼────────┼───────┼────────┼─────────────────────┼────────┤
            KC_TAB,    KC_Q,            KC_W,   KC_E,   KC_R,   KC_T,                                         KC_Y,     KC_U,   KC_I,   KC_O,        KC_P,          KC_EQL,
        //├─────────┼───────────────┼────────┼───────┼───────┼────────┤                                   ├────────┼────────┼───────┼────────┼─────────────────────┼────────┤
            KC_LSFT,   KC_A,           KC_S,   KC_D,   KC_F,   KC_G,                                         KC_H,    KC_J,    KC_K,   KC_L,        KC_SCLN,        KC_QUOT,
        //├─────────┼───────────────┼────────┼───────┼───────┼────────┼─────────────────┐       ┌─────────┼────────┼────────┼───────┼────────┼─────────────────────┼────────┤
            KC_GRV,  LCTL_T(KC_GRV),   KC_Z,   KC_X,   KC_C,   KC_V,    KC_HYPR,                   KC_MEH,  KC_B,     KC_N,   KC_M,  KC_COMM, MT(MOD_RCTL, KC_DOT),  KC_SLSH,
        //└─────────┴───────────────┴────────┴──┬────┴───┬───┴─────┬──┼─────────────────┤       ├─────────┼────┬───┴────────┴──┬────┴───┬────┴─────────────────────┴────────┘
                                                  SC_LAPO, KC_LGUI,  LT(_BRACKETS, KC_ENT),       KC_SPC,    MO(_MEDIA_ARROWS),  SC_RAPC
        //                                      └────────┴─────────┘  └─────────────────┘       └─────────┘    └───────────────┴────────┘
        ),
    //
    [_MEDIA_ARROWS] = LAYOUT(
        //┌──-───────┬────────┬────────┬────────┬────────┬────────┐                           ┌────────┬─────────┬────────┬────────┬────────┬─────────┐
           KC_GRAVE, KC_F1,   KC_F2,    KC_F3,  KC_F4,    CG_TOGG,                             KC_TRNS, KC_MPRV,  KC_MPLY, KC_MNXT, KC_RBRC,   KC_DEL,
        //├──────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼─────────┼────────┼────────┼────────┼─────────┤
            KC_TRNS,  KC_F5,   KC_F6,  KC_F7,  KC_F8,   TT(_MOUSE),                            KC_VOLU,  KC_PGUP,  KC_UP,  KC_PGDN, KC_TRNS, KC_MINUS,
        //├──────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼─────────┼────────┼────────┼────────┼─────────┤
            KC_TRNS,   KC_F9,   KC_F10, KC_F11,   KC_F12, KC_TRNS,                             KC_VOLD,  KC_LEFT, KC_DOWN, KC_RGHT, KC_TRNS,  KC_PAST,
        //├──────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌─────────┼────────┼─────────┼────────┼────────┼────────┼─────────┤
            KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,         TG(_GAME),KC_MINUS, KC_HOME, KC_TRNS, KC_END, KC_TRNS, KC_BACKSLASH,
        //└──────────┴────────┴───┬────┴────────┴───┬────┴───┬────┤        ┤        ├─────────┼────┬───┴────┬────┴───┬────┴────────┴────────┴─────────┘
                                    LALT_T(KC_LBRC), KC_TRNS,      KC_TRNS,           KC_TRNS,      KC_TRNS, RALT_T(KC_RBRC)
        //                        └─────────────────┴────────┘    └────────┘        └─────────┘    └────────┴────────┘
        ),
    [_MOUSE] = LAYOUT(
        //┌────────────┬────────┬────────┬────────┬────────┬────────┐                           ┌───────────┬─────────────┬────────┬────────────────┬────────┬─────────┐
           TO(_QWERTY), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_TOG,                             KC_TRNS,     KC_TRNS,      KC_TRNS, KC_TRNS,        KC_TRNS, KC_TRNS,
        //├────────────┼────────┼────────┼────────┼────────┼────────┤                           ├───────────┼─────────────┼────────┼────────────────┼────────┼─────────┤
            KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                             KC_MS_WH_UP, KC_MS_BTN1,  KC_MS_UP, KC_MS_BTN2,     KC_TRNS, KC_TRNS,
        //├────────────┼────────┼────────┼────────┼────────┼────────┤                           ├───────────┼─────────────┼────────┼────────────────┼────────┼─────────┤
            KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                           KC_MS_WH_DOWN,  KC_MS_L,     KC_MS_D, KC_MS_R,        KC_TRNS, KC_TRNS,
        //├────────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌─────────┼───────────┼─────────────┼────────┼────────────────┼────────┼─────────┤
            KC_TRNS,    QK_LEAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS,  KC_TRNS,   KC_MS_WH_LEFT, KC_TRNS, KC_MS_WH_RIGHT, KC_TRNS, KC_TRNS,
        //└────────────┴────────┴────────┴───┬────┴────┬───┴─────┬──┤        ┤        ├─────────┼────┬──────┴─┬────────┬──┴────┬───┴────────────────┴────────┴─────────┘
                                               KC_TRNS, RGB_RMOD,    KC_TRNS,           KC_TRNS,      RGB_MOD,  KC_TRNS
        //                                   └─────────┴─────────┘  └────────┘        └─────────┘    └────────┴────────┘
        ),
    [_BRACKETS] = LAYOUT(
        //┌──────────┬────────┬────────┬────────┬────────┬────────┐                           ┌────────┬────────┬────────┬────────┬────────┬─────────┐
            KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,                            KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        //├──────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼────────┼────────┼────────┼────────┼─────────┤
            KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        //├──────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼────────┼────────┼────────┼────────┼─────────┤
            KC_TRNS,  KC_LPRN, KC_LCBR, KC_LBRC,  KC_LT,  KC_TRNS,                             KC_TRNS,  KC_GT,  KC_RBRC, KC_RCBR, KC_RPRN, KC_TRNS,
        //├──────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌─────────┼────────┼────────┼────────┼────────┼────────┼─────────┤
            KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        //└──────────┴────────┴────────┴───┬────┴───┬────┴───┬────┤        ┤        ├─────────┼────┬───┴────┬───┴────┬───┴────────┴────────┴─────────┘
                                            KC_TRNS, KC_TRNS,      KC_TRNS,           KC_TRNS,      KC_TRNS, KC_TRNS
        //                                 └────────┴────────┘    └────────┘        └─────────┘    └────────┴────────┘
    ),
    [_GAME] = LAYOUT(
        //┌──────────┬────────┬────────┬────────┬────────┬────────┐                           ┌────────┬────────┬────────┬────────┬────────┬─────────┐
            KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                             KC_TRNS, KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC,  KC_TRNS,
        //├──────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼────────┼────────┼────────┼────────┼─────────┤
            KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,                           KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        //├──────────┼────────┼────────┼────────┼────────┼────────┤                           ├────────┼────────┼────────┼────────┼────────┼─────────┤
            KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                             KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        //├─────────┼────────┼────────┼────────┼────────┼─────────┼────────┐        ┌─────────┼────────┼────────┼────────┼────────┼────────┼─────────┤
            KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_ENT,            KC_SPC,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        //└────────┴────────┴────────┴───┬────┴───┬────┴───┬──────┤        ┤        ├─────────┼────┬───┴────┬───┴────┬───┴────────┴────────┴─────────┘
                                        SC_LAPO,   KC_LCTL,        KC_SPC,            KC_ENT,       KC_TRNS, KC_TRNS
        //                               └────────┴────────┘      └────────┘        └─────────┘    └────────┴────────┘
        ),
    // clang-format on
};
