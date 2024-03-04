/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 3908 K, 4.7 kOhm pull-up,
// ITMAX Thermistor
// ./createTemperatureLookup.py --r0=100000 --t0=25 --r1=0 --r2=4700 --beta=3950
// r0: 100000
// t0: 25
// r1: 0 (parallel with rTherm)
// r2: 4700 (series with rTherm)
// beta: 3908
// min adc: 1 at 0.0048828125 V
// max adc: 1023 at 4.9951171875 V
constexpr temp_entry_t temptable_62[] PROGMEM = {
  { OV(   1), 958 },
  { OV(  15), 391 },
  { OV(  29), 323 },
  { OV(  43), 288 },
  { OV(  57), 265 },
  { OV(  71), 249 },
  { OV(  85), 235 },
  { OV(  99), 225 },
  { OV( 113), 215 },
  { OV( 127), 208 },
  { OV( 141), 201 },
  { OV( 155), 194 },
  { OV( 169), 189 },
  { OV( 183), 183 },
  { OV( 197), 179 },
  { OV( 211), 174 },
  { OV( 225), 170 },
  { OV( 239), 166 },
  { OV( 253), 163 },
  { OV( 267), 159 },
  { OV( 281), 156 },
  { OV( 295), 153 },
  { OV( 309), 150 },
  { OV( 323), 147 },
  { OV( 337), 144 },
  { OV( 351), 141 },
  { OV( 365), 139 },
  { OV( 379), 136 },
  { OV( 393), 134 },
  { OV( 407), 131 },
  { OV( 421), 129 },
  { OV( 435), 127 },
  { OV( 449), 124 },
  { OV( 463), 122 },
  { OV( 477), 120 },
  { OV( 491), 118 },
  { OV( 505), 116 },
  { OV( 519), 114 },
  { OV( 533), 111 },
  { OV( 547), 109 },
  { OV( 561), 107 },
  { OV( 575), 105 },
  { OV( 589), 103 },
  { OV( 603), 101 },
  { OV( 617),  99 },
  { OV( 631),  97 },
  { OV( 645),  95 },
  { OV( 659),  93 },
  { OV( 673),  91 },
  { OV( 687),  89 },
  { OV( 701),  87 },
  { OV( 715),  85 },
  { OV( 729),  83 },
  { OV( 743),  81 },
  { OV( 757),  78 },
  { OV( 771),  76 },
  { OV( 785),  74 },
  { OV( 799),  71 },
  { OV( 813),  69 },
  { OV( 827),  66 },
  { OV( 841),  64 },
  { OV( 855),  61 },
  { OV( 869),  58 },
  { OV( 883),  55 },
  { OV( 897),  52 },
  { OV( 911),  48 },
  { OV( 925),  44 },
  { OV( 939),  40 },
  { OV( 953),  35 },
  { OV( 967),  30 },
  { OV( 981),  23 },
  { OV( 995),  14 },
  { OV( 999),  10 },
  { OV(1004),   5 }
};
