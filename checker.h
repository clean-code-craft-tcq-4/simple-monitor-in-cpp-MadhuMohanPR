#ifndef CHECKER_HPP
#define CHECKER_HPP

#include <iostream>
#include <assert.h>

using namespace std;

#define LOWER_TEMPERATURE_LIMIT 0
#define UPPER_TEMPERATURE_LIMIT 45
#define LOWER_SOC_LIMIT 20
#define UPPER_SOC_LIMIT 80
#define CHARGE_RATE_LIMIT 0.8

bool isTemperatureOutOfRange(float temperature);
bool isStateOfChargeOutOfRange(float soc);
bool isChargeRateOutOfRange(float chargeRate);

bool isLessThanOrEqualLimit(float value, float limit);
bool isGreaterThanOrEqual(float value, float limit);
bool isInRange(float value, float lowerlimit, float upperlimit);

bool isTemperatureOutOfRange(float temperature);
bool isStateOfChargeOutOfRange(float soc);
bool isChargeRateOutOfRange(float chargeRate);

#endif
