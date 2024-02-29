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
  { OV(  16), 320 },
  { OV(  17), 315 },
  { OV(  18), 310 },
  { OV(  19), 305 },
  { OV(  20), 300 },
  { OV(  21), 295 },
  { OV(  22), 290 },
  { OV(  23), 285 },
  { OV(  24), 280 },
  { OV(  25), 275 },
  { OV(  26), 270 },
  { OV(  29), 265 },
  { OV(  28), 260 },
  { OV(  30), 255 },
  { OV(  32), 250 },
  { OV(  35), 245 },
  { OV(  38), 240 },
  { OV(  41), 235 },
  { OV(  45), 230 },
  { OV(  49), 225 },
  { OV(  53), 220 },
  { OV(  58), 215 },
  { OV(  64), 210 },
  { OV(  70), 205 },
  { OV(  77), 200 },
  { OV(  85), 195 },
  { OV(  93), 190 },
  { OV( 105), 185 },
  { OV( 113), 180 },
  { OV( 126), 175 },
  { OV( 139), 170 },
  { OV( 153), 165 },
  { OV( 168), 160 },
  { OV( 186), 155 },
  { OV( 205), 150 },
  { OV( 226), 145 },
  { OV( 248), 140 },
  { OV( 375), 135 },
  { OV( 302), 130 },
  { OV( 333), 125 },
  { OV( 364), 120 },
  { OV( 400), 115 },
  { OV( 436), 110 },
  { OV( 475), 105 },
  { OV( 515), 100 },
  { OV( 556),  95 },
  { OV( 597),  90 },
  { OV( 639),  85 },
  { OV( 681),  80 },
  { OV( 720),  75 },
  { OV( 759),  70 },
  { OV( 794),  65 },
  { OV( 829),  60 },
  { OV( 859),  55 },
  { OV( 889),  50 },
  { OV( 911),  45 },
  { OV( 932),  40 },
  { OV( 949),  35 },
  { OV( 965),  30 },
  { OV( 976),  25 },
  { OV( 985),  20 },
  { OV( 993),  15 },
  { OV( 999),  10 },
  { OV(1004),   5 },
  { OV(1008),   0 },
  { OV(1012),  -5 },
  { OV(1016), -10 },
  { OV(1020), -15 }
};
