/*
DebugUtils.h - Simple debugging utilities.
Copyright (C) 2011 Fabio Varesano <fabio at varesano dot net>

Ideas taken from:
http://www.arduino.cc/cgi-bin/yabb2/YaBB.pl?num=1271517197

This program is free software: you can redistribute it and/or modify
it under the terms of the version 3 GNU General Public License as
published by the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef DEBUGUTILS_H
#define DEBUGUTILS_H

#include <Arduino.h>

#ifdef DEBUG_UTILS
#define DF(str)                      \
  Serial.print(millis());            \
  Serial.print(": ");                \
  Serial.print(__PRETTY_FUNCTION__); \
  Serial.print(' ');                 \
  Serial.print(__FILE__);            \
  Serial.print(':');                 \
  Serial.print(__LINE__);            \
  Serial.print(' ');                 \
  Serial.println(str);
#else
#define DF(str)
#endif

#ifdef DEBUG_UTILS
#define DS(info) \
  Serial.print(info);
#define DL(info) \
  Serial.println(info);
#else
#define DS(x)
#define DL(x)
#endif

#ifdef DEBUG_UTILS1
#define DF1(str)                     \
  Serial.print(millis());            \
  Serial.print(": ");                \
  Serial.print(__PRETTY_FUNCTION__); \
  Serial.print(' ');                 \
  Serial.print(__FILE__);            \
  Serial.print(':');                 \
  Serial.print(__LINE__);            \
  Serial.print(' ');                 \
  Serial.println(str);
#else
#define DF1(str)
#endif

#ifdef DEBUG_UTILS1
#define DS1(info) \
  Serial.print(info);
#define DL1(info) \
  Serial.println(info);
#else
#define DS1(x)
#define DL1(x)
#endif

#define SP(info) \
  Serial.print(info);
#define SL(info) \
  Serial.println(info);

#endif
