/*
Funkcja DEBUG_PRINT daje na porcie szerogowym zdefiniowanym jako Serial np.
Serial.begin(9600);
na wyjściu dane (po kolei):
millis:
funkcja_w_której_ją_przywołano
nazwa_pliku_z_programem:
linia_w_pliku
podana zmienna w funkcji
*/

#include <Arduino.h>

//Aby debug działał, należy odkomentowac linie #define DEBUG
#define DEBUG_UTILS
#define DEBUG_UTILS1
#include <DebugUtils.h>

int zmienna = 0;

//zapowiedz funkcji
void test();

void setup() {
  Serial.begin(115200);

  // SP i SL są skrótami Serial.print i Serial.println (z lenistwa).
  // są dostępne zawsze w tej bibliotece:
  SL("DebugTest"); //odpowiednik Serial.println("Start DebugTest");
  SP("Start"); //odpowiednik Serial.print("Start DebugTest");
  SL(); //odpowiednik Serial.println();

}

void loop() {
  test();
  zmienna++;
  delay(3000);

  DS("Odpowiednik Serial.print() Wymaga #define DEBUG");
  DL();
  DL("Odpowiednik Serial.println() Wymaga #define DEBUG");

  DS1("Odpowiednik Serial.print() Wymaga #define DEBUG1");
  DL1();
  DL1("Odpowiednik Serial.println() Wymaga #define DEBUG1");

}

void test() {
  DEBUG_UTILS_PRINT("raport");
  DEBUG_UTILS_PRINT(zmienna);
  DEBUG_UTILS_PRINT1("raport1");
  DEBUG_UTILS_PRINT1(zmienna);
}
