//
//    FILE: test_printfloat.ino
//  AUTHOR: Rob Tillaart
// VERSION: 0.1.0
// PURPOSE: test decimal point for floats.
//     URL: http://www.adafruit.com/products/1002
//     URL: https://github.com/RobTillaart/HT16K33

#include "HT16K33.h"

HT16K33 seg(0x70);

void setup()
{
  Serial.begin(115200);
  Serial.println(__FILE__);

  seg.begin();
  Wire.setClock(100000);

  seg.displayOn();
}

void loop()
{
  test_printfloat();
  Serial.println("---------------");
  delay(1000);
}

void test_printfloat()
{
  for (int i = 9990; i < 10005; i++)
  {
    float f = i * 0.001;
    seg.displayFloat(f);
    delay(250);
  }
  for (int i = 930; i < 1020; i++)
  {
    float f = i * 0.1;
    seg.displayFloat(f);
    delay(250);
  }
  for (int i = 9995; i < 10020; i++)
  {
    float f = i * 0.1;
    seg.displayFloat(f);
    delay(250);
  }
}

// -- END OF FILE --
