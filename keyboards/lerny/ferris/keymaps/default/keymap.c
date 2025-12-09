#include QMK_KEYBOARD_H

enum {
    GRAPHITE,

    NAV,
    MOUSE,
    MEDIA,

    SYM,
    NUM,
    FUN
};

#define HYPR_Q HYPR_T(KC_Q)
#define CTL_N CTL_T(KC_N)
#define OPT_R OPT_T(KC_R)
#define GUI_T_ CMD_T(KC_T)
#define SFT_S SFT_T(KC_S)

#define SPC_NAV LT(NAV, KC_SPC)
#define TAB_MOUSE LT(MOUSE, KC_TAB)
#define ESC_MEDIA LT(MEDIA, KC_ESC)

#define HYPR_DOT HYPR_T(KC_DOT)
#define CTL_I CTL_T(KC_I)
#define OPT_E OPT_T(KC_E)
#define GUI_A GUI_T(KC_A)
#define SFT_H SFT_T(KC_H)

#define ENT_SYM LT(SYM, KC_ENT)
#define BSPC_NUM LT(NUM, KC_BSPC)
#define DEL_FUN LT(FUN, KC_DEL)

#define CW_CAPS LT(0, KC_NO)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [GRAPHITE] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                  KC_B,         KC_L,         KC_D,         KC_W,         KC_Z,                                     KC_QUOT,         KC_F,         KC_O,         KC_U,         KC_J,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                 CTL_N,        OPT_R,       GUI_T_,        SFT_S,         KC_G,                                        KC_Y,        SFT_H,        GUI_A,        OPT_E,        CTL_I,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                HYPR_Q,         KC_X,         KC_M,         KC_C,         KC_V,                                        KC_K,         KC_P,      KC_SLSH,      KC_COMM,     HYPR_DOT,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                       SPC_NAV,    TAB_MOUSE,         ENT_SYM,     BSPC_NUM
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [NAV] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               QK_BOOT,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                   LSG(KC_Z),      G(KC_V),      G(KC_C),      G(KC_X),      G(KC_Z),
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_LCTL,      KC_LOPT,      KC_LGUI,      KC_LSFT,      XXXXXXX,                                     CW_CAPS,      KC_LEFT,      KC_DOWN,        KC_UP,      KC_RGHT,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_HYPR,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                      KC_INS,      KC_HOME,      KC_PGDN,      KC_PGUP,       KC_END,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                       XXXXXXX,      XXXXXXX,          KC_ENT,      KC_BSPC
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [MOUSE] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                   LSG(KC_Z),      G(KC_V),      G(KC_C),      G(KC_X),      G(KC_Z),
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_LCTL,      KC_LOPT,      KC_LGUI,      KC_LSFT,      XXXXXXX,                                     XXXXXXX,      KC_MS_L,      KC_MS_D,      KC_MS_U,      KC_MS_R,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_HYPR,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                     XXXXXXX,      KC_WH_L,      KC_WH_D,      KC_WH_U,      KC_WH_R,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                       XXXXXXX,      XXXXXXX,         KC_BTN1,      KC_BTN2
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [MEDIA] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_LCTL,      KC_LOPT,      KC_LGUI,      KC_LSFT,      XXXXXXX,                                     XXXXXXX,      KC_MPRV,      KC_VOLD,      KC_VOLU,      KC_MNXT,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_HYPR,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                       XXXXXXX,      XXXXXXX,         KC_MSTP,      KC_MPLY
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [SYM] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_LCBR,      KC_AMPR,      KC_ASTR,      KC_LPRN,      KC_RCBR,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_COLN,       KC_DLR,      KC_PERC,      KC_CIRC,      KC_PLUS,                                     XXXXXXX,      KC_LSFT,      KC_LGUI,      KC_LOPT,      KC_LCTL,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_TILD,      KC_EXLM,        KC_AT,      KC_HASH,      KC_PIPE,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_HYPR,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                       KC_RPRN,      KC_UNDS,         XXXXXXX,      XXXXXXX
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [NUM] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_LBRC,         KC_7,         KC_8,         KC_9,      KC_RBRC,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_SCLN,         KC_4,         KC_5,         KC_6,       KC_EQL,                                     XXXXXXX,      KC_LSFT,      KC_LGUI,      KC_LOPT,      KC_LCTL,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                KC_GRV,         KC_1,         KC_2,         KC_3,      KC_BSLS,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_HYPR,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                          KC_0,      KC_MINS,         XXXXXXX,      XXXXXXX
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [FUN] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                KC_F12,        KC_F7,        KC_F8,        KC_F9,      KC_PSCR,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                KC_F11,        KC_F4,        KC_F5,        KC_F6,      KC_SCRL,                                     XXXXXXX,      KC_LSFT,      KC_LGUI,      KC_LOPT,      KC_LCTL,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                KC_F10,        KC_F1,        KC_F2,        KC_F3,       KC_BRK,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      KC_HYPR,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                        KC_SPC,       KC_TAB,         XXXXXXX,      XXXXXXX
//                                                              |-------------+-------------|  |-------------+-------------|
    )
};
// clang-format on

const uint16_t PROGMEM co_left[]  = {SPC_NAV, TAB_MOUSE, COMBO_END};
const uint16_t PROGMEM co_right[] = {ENT_SYM, BSPC_NUM, COMBO_END};

const uint16_t PROGMEM co_nav[]   = {KC_ENT, KC_BSPC, COMBO_END};
const uint16_t PROGMEM co_mouse[] = {KC_BTN1, KC_BTN2, COMBO_END};
const uint16_t PROGMEM co_media[] = {KC_MSTP, KC_MPLY, COMBO_END};

const uint16_t PROGMEM co_sym[] = {KC_RPRN, KC_UNDS, COMBO_END};
const uint16_t PROGMEM co_num[] = {KC_0, KC_MINS, COMBO_END};
const uint16_t PROGMEM co_fun[] = {KC_SPC, KC_TAB, COMBO_END};

// clang-format off
combo_t key_combos[] = {
    COMBO(co_left, ESC_MEDIA),
    COMBO(co_right, DEL_FUN),

    COMBO(co_nav, KC_DEL),
    COMBO(co_mouse, KC_BTN3),
    COMBO(co_media, KC_MUTE),

    COMBO(co_sym, KC_LPRN),
    COMBO(co_num, KC_DOT),
    COMBO(co_fun, KC_APP),
};
// clang-format on

bool is_flow_tap_key(uint16_t keycode) {
    switch (get_tap_keycode(keycode)) {
        case KC_A ... KC_Z:
        case KC_QUOT:
        case KC_SLASH:
        case KC_COMM:
        case KC_DOT:
            return true;
    }
    return false;
}

bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        case KC_A ... KC_Z:
            add_weak_mods(MOD_BIT(KC_LSFT));
            return true;
        case KC_1 ... KC_0:
        case KC_MINS:
        case KC_UNDS:
        case KC_QUOT:
        case KC_SLSH:
        case KC_COMM:
        case KC_DOT:
        case KC_BSPC:
        case KC_DEL:
            return true;
        default:
            return false;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CW_CAPS:
            if (record->tap.count && record->event.pressed) {
                caps_word_toggle();
            } else if (record->event.pressed) {
                tap_code16(KC_CAPS);
            }
            return false;
        case CTL_N:
        case CTL_I:
            if (record->tap.count == 0) record->event.pressed ? register_mods(MOD_BIT(KC_LCTL)) : unregister_mods(MOD_BIT(KC_LCTL));
            return true;
        case OPT_R:
        case OPT_E:
            if (record->tap.count == 0) record->event.pressed ? register_mods(MOD_BIT(KC_LOPT)) : unregister_mods(MOD_BIT(KC_LOPT));
            return true;
        case GUI_T_:
        case GUI_A:
            if (record->tap.count == 0) record->event.pressed ? register_mods(MOD_BIT(KC_LCMD)) : unregister_mods(MOD_BIT(KC_LCMD));
            return true;
        default:
            return true;
    }
}
