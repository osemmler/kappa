#include <Monster.h>

class Kappa : public Monster
{
public:
  Kappa()
  {
    partCount = 2;
    partArray = new Part*[partCount];
    partArray[0] = new Part_Light_LM393(PIN_A0, PIN2);
    partArray[1] = new Part_DHT(PIN_A1, DHT11);
  }
};

Kappa kappa;

void setup()
{
  kappa.setup();
}

void loop()
{
  kappa.readAllProps();
  delay(3000);
}
