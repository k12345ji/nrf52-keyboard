/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * 键盘矩阵基配置文件
 * 
 * 定义各个按键的位置，方便编写Keymap
 */
#pragma once

#include <stdint.h>
#include "keymap.h"
#include "config.h"

extern const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS];
extern const action_t fn_actions[];

/* 
 * @brief 按键阵列
 * 第一组为实际布局
 * 第二组为按键实际矩阵
 */
#define KEYMAP( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
    K30, K31, K32, K33, K34,           K37, K38, K39, K3A, K3B  \
) { \
    { K05, K04, K03, K02, K01, K00 }, \
    { K15, K14, K13, K12, K11, K10 }, \
    { K25, K24, K23, K22, K21, K20 }, \
    { KC_NO, K34, K33, K32, K31, K30 }, \
    { K06, K07, K08, K09, K0A, K0B }, \
    { K16, K17, K18, K19, K1A, K1B }, \
    { K26, K27, K28, K29, K2A, K2B }, \
    { KC_NO, K37, K38, K39, K3A, K3B }  \
}

#define KEYMAP_ROT( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, \
    K30, K31, K32, K33, K34,           K37, K38, K39, K3A, K3B  \
    R0P, R0N \
) { \
    { K05, K04, K03, K02, K01, K00 }, \
    { K15, K14, K13, K12, K11, K10 }, \
    { K25, K24, K23, K22, K21, K20 }, \
    { R0P, K34, K33, K32, K31, K30 }, \
    { K06, K07, K08, K09, K0A, K0B }, \
    { K16, K17, K18, K19, K1A, K1B }, \
    { K26, K27, K28, K29, K2A, K2B }, \
    { R0N, K37, K38, K39, K3A, K3B }  \
}
