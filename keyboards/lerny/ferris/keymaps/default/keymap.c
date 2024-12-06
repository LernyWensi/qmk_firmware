#include "keycodes.h"
#include QMK_KEYBOARD_H

#include "features/achordion.h"

enum {
    BASE,

    NAV,
    MOUSE,
    MEDIA,

    SYM,
    NUM,
    FUN,

    GAME,
    GAME_NUM,
    GAME_FUN
};

#define SPC_NAV LT(NAV, KC_SPC)
#define TAB_MOUSE LT(MOUSE, KC_TAB)
#define ESC_MEDIA LT(MEDIA, KC_ESC)

#define GUI_N GUI_T(KC_N)  
#define ALT_R ALT_T(KC_R)  
#define CTRL_T CTL_T(KC_T)  
#define SFT_S SFT_T(KC_S)

#define ENT_SYM LT(SYM, KC_ENT)
#define BSPC_NUM LT(NUM, KC_BSPC)
#define DEL_FUN LT(FUN, KC_DEL)

#define SFT_H SFT_T(KC_H)
#define CTL_A CTL_T(KC_A)
#define ALT_E ALT_T(KC_E)
#define GUI_I GUI_T(KC_I)

#define ESC_GAME_NUM LT(GAME_NUM, KC_ESC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                  KC_B,         KC_L,         KC_D,         KC_W,         KC_Z,                                     KC_QUOT,         KC_F,         KC_O,         KC_U,         KC_J,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                 GUI_N,        ALT_R,       CTRL_T,        SFT_S,         KC_G,                                        KC_Y,        SFT_H,        CTL_A,        ALT_E,        GUI_I,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                  KC_Q,         KC_X,         KC_M,         KC_C,         KC_V,                                        KC_K,         KC_P,      KC_SLSH,      KC_COMM,       KC_DOT,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                       SPC_NAV,    TAB_MOUSE,         ENT_SYM,     BSPC_NUM
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [MEDIA] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_LGUI,      KC_LALT,      KC_LCTL,      KC_LSFT,      XXXXXXX,                                     XXXXXXX,      KC_MPRV,      KC_VOLD,      KC_VOLU,      KC_MNXT,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                       XXXXXXX,      XXXXXXX,         KC_MSTP,      KC_MPLY
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [NAV] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               QK_BOOT,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                     C(KC_Y),    S(KC_INS),    C(KC_INS),      C(KC_X),      C(KC_Z),
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_LGUI,      KC_LALT,      KC_LCTL,      KC_LSFT,     TG(GAME),                                     CW_TOGG,      KC_LEFT,      KC_DOWN,        KC_UP,      KC_RGHT,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                      KC_INS,      KC_HOME,      KC_PGDN,      KC_PGUP,       KC_END,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                       XXXXXXX,      XXXXXXX,          KC_ENT,      KC_BSPC
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [MOUSE] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                     C(KC_Y),    S(KC_INS),    C(KC_INS),      C(KC_X),      C(KC_Z),
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_LGUI,      KC_LALT,      KC_LCTL,      KC_LSFT,      XXXXXXX,                                     XXXXXXX,      KC_MS_L,      KC_MS_D,      KC_MS_U,      KC_MS_R,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,                                     XXXXXXX,      KC_WH_L,      KC_WH_D,      KC_WH_U,      KC_WH_R,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                       XXXXXXX,      XXXXXXX,         KC_BTN1,      KC_BTN2
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [SYM] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_LCBR,      KC_AMPR,      KC_ASTR,      KC_LPRN,      KC_RCBR,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_COLN,       KC_DLR,      KC_PERC,      KC_CIRC,      KC_PLUS,                                     XXXXXXX,      KC_LSFT,      KC_LCTL,      KC_LALT,      KC_LGUI,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_TILD,      KC_EXLM,        KC_AT,      KC_HASH,      KC_PIPE,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                       KC_RPRN,      KC_UNDS,         XXXXXXX,      XXXXXXX
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [NUM] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_LBRC,         KC_7,         KC_8,         KC_9,      KC_RBRC,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      QK_BOOT,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_SCLN,         KC_4,         KC_5,         KC_6,       KC_EQL,                                     XXXXXXX,      KC_LSFT,      KC_LCTL,      KC_LALT,      KC_LGUI,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                KC_GRV,         KC_1,         KC_2,         KC_3,      KC_BSLS,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                          KC_0,      KC_MINS,         XXXXXXX,      XXXXXXX
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [FUN] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                KC_F12,        KC_F7,        KC_F8,        KC_F9,      KC_PSCR,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                KC_F11,        KC_F4,        KC_F5,        KC_F6,      KC_SCRL,                                     XXXXXXX,      KC_LSFT,      KC_LCTL,      KC_LALT,      KC_LGUI,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                KC_F10,        KC_F1,        KC_F2,        KC_F3,       KC_BRK,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                        KC_SPC,       KC_TAB,         XXXXXXX,      XXXXXXX
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [GAME] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                KC_TAB,         KC_Q,         KC_W,         KC_E,         KC_R,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_LSFT,         KC_A,         KC_S,         KC_D,         KC_F,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
               KC_LCTL,         KC_Z,         KC_X,         KC_C,         KC_V,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                        KC_SPC, ESC_GAME_NUM,         XXXXXXX,      XXXXXXX
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [GAME_NUM] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
              KC_EQUAL,         KC_7,         KC_8,         KC_9,      XXXXXXX,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
              KC_MINUS,         KC_4,         KC_5,         KC_6,     TG(GAME),                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                  KC_0,         KC_1,         KC_2,         KC_3,      XXXXXXX,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                       XXXXXXX,      XXXXXXX,         XXXXXXX,      XXXXXXX
//                                                              |-------------+-------------|  |-------------+-------------|
    ),

    [GAME_FUN] = LAYOUT(
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                KC_F12,        KC_F7,        KC_F8,        KC_F9,      XXXXXXX,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                KC_F11,        KC_F4,        KC_F5,        KC_F6,      XXXXXXX,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------|                              |-------------+-------------+-------------+-------------+-------------|
                KC_F10,        KC_F1,        KC_F2,        KC_F3,      XXXXXXX,                                     XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,
//      |-------------+-------------+-------------+-------------+-------------+-------------|  |-------------+-------------+-------------+-------------+-------------+-------------|
                                                                       XXXXXXX,      XXXXXXX,         XXXXXXX,      XXXXXXX
//                                                              |-------------+-------------|  |-------------+-------------|
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (!process_achordion(keycode, record)) {
        return false;
    }

    return true;
}

void matrix_scan_user(void) {
    achordion_task();
}

uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
    switch (tap_hold_keycode) {
        case SPC_NAV:
        case TAB_MOUSE:
        case ENT_SYM:
        case BSPC_NUM:
            return 0;
    }

    return 800;
}

bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record, uint16_t other_keycode, keyrecord_t* other_record) {
    if (
        other_record->event.key.row % (MATRIX_ROWS / 2) == 3 ||
        tap_hold_record->event.key.row % (MATRIX_ROWS / 2) == 3
    ) {
        return true;
    }

    return achordion_opposite_hands(tap_hold_record, other_record);
}

uint16_t achordion_streak_chord_timeout(uint16_t tap_hold_keycode, uint16_t next_keycode) {
    if (IS_QK_LAYER_TAP(tap_hold_keycode)) {
        return 0;
    }

    uint8_t mod = mod_config(QK_MOD_TAP_GET_MODS(tap_hold_keycode));
    if ((mod & MOD_LSFT) != 0 || (mod & MOD_LCTL) != 0 || (mod & MOD_LALT) != 0) {
        return 100;
    } else {
        return 250;
    }
}

bool achordion_eager_mod(uint8_t mod) {
    switch (mod) {
        case MOD_LALT:
        case MOD_LCTL:
        case MOD_LSFT:
            return true;
        default:
            return false;
    }
}

const uint16_t PROGMEM co_base_left[]  = {SPC_NAV, TAB_MOUSE, COMBO_END};
const uint16_t PROGMEM co_base_right[] = {ENT_SYM, BSPC_NUM, COMBO_END};

const uint16_t PROGMEM co_nav[]   = {KC_ENT, KC_BSPC, COMBO_END};
const uint16_t PROGMEM co_mouse[] = {KC_BTN1, KC_BTN2, COMBO_END};
const uint16_t PROGMEM co_media[] = {KC_MSTP, KC_MPLY, COMBO_END};

const uint16_t PROGMEM co_sym[] = {KC_RPRN, KC_UNDS, COMBO_END};
const uint16_t PROGMEM co_num[] = {KC_0, KC_MINS, COMBO_END};
const uint16_t PROGMEM co_fun[] = {KC_SPC, KC_TAB, COMBO_END};

const uint16_t PROGMEM co_game_alt[] = {KC_LSFT, KC_TAB, COMBO_END};
const uint16_t PROGMEM co_game_fun[] = {KC_SPC, ESC_GAME_NUM, COMBO_END};

combo_t key_combos[] = {
    COMBO(co_base_left, ESC_MEDIA),
    COMBO(co_base_right, DEL_FUN),

    COMBO(co_nav, KC_DEL),
    COMBO(co_mouse, KC_BTN3),
    COMBO(co_media, KC_MUTE),

    COMBO(co_sym, KC_LPRN),
    COMBO(co_num, KC_DOT),
    COMBO(co_fun, KC_APP),

    COMBO(co_game_alt, KC_LALT),
    COMBO(co_game_fun, MO(GAME_FUN)),
};
