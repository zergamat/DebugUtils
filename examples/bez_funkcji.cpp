/*
Przykład z warunkami bezpośrednio w kodzie programu.
*/

#include <Arduino.h>

//Aby debug działał, należy odkomentowac linie #define DEBUG
#define DEBUG_UTILS
//Poniższy przykład nie wymaga #include <DebugUtils.h>
//#include <DebugUtils.h>

int zmienna = 0;

//zapowiedz funkcji
void test();


void setup() {
  Serial.begin(9600);
  Serial.print("Start DebugTest");
}

void loop() {

#ifdef DEBUG_UTILS
  Serial.print("ERROR: Test, millis: ");     \
  Serial.print(millis()); \
  Serial.print(" ,zmienna: ");      \
  Serial.println(zmienna);
  #endif

  zmienna++;
  delay(1000);
}
