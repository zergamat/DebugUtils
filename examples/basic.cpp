#include <Arduino.h>

#define DEBUG_UTILS  // uncomment to enable primary debugging (DS and DL)
#define DEBUG_UTILS1 // uncomment to enable secoundary debugging (DS1 and DL1)
#include <DebugUtils.h>

int Counter = 0;

void test();

void setup()
{
  Serial.begin(115200);
  Serial.println("\n\nbasic.cpp - START");
  // SP() works as Serial.print() - always available
  // SL() works an Serial.println() - always available
  SP("SP - substitute of Serial.print() - allways available");
  SL();
  SL("SL - substitute of Serial.println() - allways available");

  DS("DS - substitute of Serial.print() - requires #define DEBUG_UTILS");
  DL();
  DL("DL - substitute of Serial.println() - requires #define DEBUG_UTILS");

  DS1("DS1 - substitute of Serial.print() - requires #define DEBUG_UTILS1. Intended to be secound level of debugging.");
  DL1();
  DL1("DL1 - substitute of Serial.println() - requires #define DEBUG_UTILS1. Intended to be secound level of debugging.");
}

void loop()
{
  test();
  Counter++;

  delay(5000);
}

void test()
{
  /*
  Function DF and DF1 prints on serial monitor:
  actual millis: function_in_witch_DF_was_called name_of_the_file_it_was_called: line_it_was_called data_given_as_DF_variable
  for example:
  DF("example");
  could give sth like this:
  5000: void test() basic.cpp:44 example
  */
  DF("report");
  DF(Counter);
  DF1("report1");
  DF1(Counter);
}
