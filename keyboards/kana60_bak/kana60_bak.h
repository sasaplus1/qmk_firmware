/* Copyright 2019 sasaplus1
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
// #ifndef KANA60_H
// #define KANA60_H

#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A, k0B, k0C, k0D, k0E, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A, k1B, k1C, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A, k2B, k2C, k2D, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3A, k3B, k3C, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4A, k4B \
) \
{ \
    { k00, k02, k04, k06, k08, k0A, k0C }, \
    { k01, k03, k05, k07, k09, k0B, k0D }, \
    { k10, k12, k14, k16, k18, k1A, k1C }, \
    { k11, k13, k15, k17, k19, k1B, k0E }, \
    { k20, k22, k24, k26, k28, k2A, k2C }, \
    { k21, k23, k25, k27, k29, k2B, k2D }, \
    { k30, k32, k34, k36, k38, k3A, k3C }, \
    { k31, k33, k35, k37, k39, k3B }, \
    { k40, k42, k44, k46, k48, k4A }, \
    { k41, k43, k45, k47, k49, k4B } \
}

// #endif
