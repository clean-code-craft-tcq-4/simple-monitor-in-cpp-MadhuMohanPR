#include "checker.h"

bool batteryIsOk(float temperature, float soc, float chargeRate) {
  bool Result = true;
  Result = checkTemp(temperature);
  Result = checkSOC(soc);
  Result = checkTheChargeRate(chargeRate);
  return true;
}
