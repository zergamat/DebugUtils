/*
Funkcja DEBUG_PRINT daje na porcie szerogowym zdefiniowanym jako Serial np.
Serial.begin(115200);
na wyjściu dane (po kolei):
millis: funkcja_w_której_ją_przywołano nazwa_pliku_z_programem: linia_w_pliku podana_zmienna_w_funkcji
*/

#include <Arduino.h>

// Aby DebugUtils.h działał, należy odkomentowac linie #define DEBUG_UTILS i/lub DEBUG_UTILS1
#define DEBUG_UTILS
#define DEBUG_UTILS1
#include <DebugUtils.h>

int zmienna = 0;

// zapowiedz funkcji
void test();

void setup()
{
  Serial.begin(115200);
  Serial.println("\n\nESP8266_TEST_Biblioteka - START");
  // SP i SL są skrótami Serial.print i Serial.println (z lenistwa).
  // są dostępne zawsze w tej bibliotece:
  SP("SP - Odpowiednik Serial.print() Zawsze dostępny w tej bibliotece");
  SL();
  SL("SL - Odpowiednik Serial.println() Zawsze dostępny w tej bibliotece");

  DS("DS - Odpowiednik Serial.print() Wymaga #define DEBUG_UTILS");
  DL();
  DL("DL - Odpowiednik Serial.println() Wymaga #define DEBUG_UTILS");

  DS1("DS1 - Odpowiednik Serial.print() Wymaga #define DEBUG_UTILS1. Kolejny poziom debugowania.");
  DL1();
  DL1("DL1 - Odpowiednik Serial.println() Wymaga #define DEBUG_UTILS1. Kolejny poziom debugowania.");
}

void loop()
{
  test();
  zmienna++;

  delay(30000);
}

void test()
{
  DF("raport");
  DF(zmienna);
  DF1("raport1");
  DF1(zmienna);
}
