
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

#endif
