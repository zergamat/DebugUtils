/*
Przykład ze zdefiniowaną funkcją urzytkownika bezpośrednio programie.
*/
#include <Arduino.h>

//Aby debug działał, należy odkomentowac linie #define DEBUG
#define DEBUG_UTILS
//Poniższy przykład nie wymaga #include <DebugUtils.h>
//#include <DebugUtils.h>

int zmienna = 0;

//Przykład funkcji użytkownika do pracy z DEBUG
#ifdef DEBUG_UTILS
#define DEBUG_USER(x)                    \
  Serial.print("ERROR: Test, millis: "); \
  Serial.print(millis());                \
  Serial.print(" ,zmienna: ");           \
  Serial.println(x);
#else
  #define DEBUG_USER(x)
#endif

void setup() {
  Serial.begin(9600);
  Serial.print("Start DebugTest");
}

void loop() {
  zmienna++;
  DEBUG_USER(zmienna);
  delay(1000);
}
