#include "checker.h"

bool checkAll(bool tempResult, bool socResult, bool chargerateResult) {
  bool Result = true;
  if (tempResult || socResult || chargerateResult){
    Result = false;
  }
  return Result;
}
bool batteryIsOk(float temperature, float soc, float chargeRate) {
  bool Result = true;
  bool tempResult = checkTemp(temperature);
  bool socResult = checkSOC(soc);
  bool chargerateResult = checkTheChargeRate(chargeRate);
  Result = checkAll(tempResult, socResult, chargerateResult);
  return Result;
}
