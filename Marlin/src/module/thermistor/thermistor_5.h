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

// R25 = 100 kOhm, beta25 = 4267 K, 4.7 kOhm pull-up
// 100k ParCan thermistor (104GT-2)
// ATC Semitec 104GT-2/104NT-4-R025H42G (Used in ParCan)
// Verified by linagee. Source: https://www.mouser.com/datasheet/2/362/semitec%20usa%20corporation_gtthermistor-1202937.pdf
// Calculated using 4.7kohm pullup, voltage divider math, and manufacturer provided temp/resistance
constexpr temp_entry_t temptable_5[] PROGMEM = {
  { OV(   1), 713 },
  { OV(  27), 300 }, // top rating 300C
  { OV(  32), 290 },
  { OV(  37), 280 },
  { OV(  44), 270 },
  { OV(  50), 260 },
  { OV(  56), 250 },
  { OV(  66), 240 },
  { OV(  75), 230 },
  { OV(  88), 220 },
  { OV( 113), 210 },
  { OV( 141), 200 },
  { OV( 169), 190 },
  { OV( 213), 180 },
  { OV( 253), 170 },
  { OV( 294), 160 },
  { OV( 333), 150 },
  { OV( 381), 140 },
  { OV( 438), 130 },
  { OV( 499), 120 },
  { OV( 569), 110 },
  { OV( 650), 100 },
  { OV( 722),  90 },
  { OV( 783),  80 },
  { OV( 838),  70 },
  { OV( 888),  60 },
  { OV( 923),  50 },
  { OV( 951),  40 },
  { OV( 972),  30 },
  { OV( 987),  20 },
  { OV(1000),  10 },
  { OV(1010),   0 }
};
