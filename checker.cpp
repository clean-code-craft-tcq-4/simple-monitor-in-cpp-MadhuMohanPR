#include "checker.h"

bool batteryIsOk(float temperature, float soc, float chargeRate) {
  bool Result = true;
  Result = checkTemp(temperature);
  Result = checkSOC(soc);
  Result = checkTheChargeRate(chargeRate);
  if(soc < 20 || soc > 80) {
    cout << "State of Charge out of range!\n";
    return false;
  } else if(chargeRate > 0.8) {
    cout << "Charge Rate out of range!\n";
    return false;
  }
  return true;
}
