#ifndef CHECKER_H
#define CHECKER_H

#include "checkTemperature.h"
#include "checkStateOfCharge.h"
#include "checkChargeRate.h"

bool checkAll(bool tempResult, bool socResult, bool chargerateResult);
bool batteryIsOk(float temperature, float soc, float chargeRate);

#endif
