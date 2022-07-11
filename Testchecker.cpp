#include "checker.hpp"

static inline bool isLessThanOrEqualLimit(float value, float limit)
{
   bool result = ((value <= limit)?(true):(false));
   if (!result)
   {
     cout<<"value is greater than limit"<<endl;
   }
   return result;
}

bool isGreaterThanOrEqual(float value, float limit)
{
   bool result = ((value >= limit)?(true):(false));
   if (!result)
   {
      cout<<"value is less than limit"<<endl;
   }
   return result;
}

bool isInRange(float value, float lowerlimit, float upperlimit)
{
   return (isLessThanOrEqualLimit(value, upperlimit) && isGreaterThanOrEqual(value, lowerlimit));
}

bool isTemperatureOutOfRange(float temperature)
{
   bool result = isInRange(temperature, LOWER_TEMPERATURE_LIMIT, UPPER_TEMPERATURE_LIMIT);
   if(!result)
   {
      cout << "Temperature "<<temperature<< " is out of range!"<<endl;
   }
   return result;
}

bool isStateOfChargeOutOfRange(float soc)
{
    bool result = isInRange(soc, LOWER_SOC_LIMIT, UPPER_SOC_LIMIT);
    if(!result)
    {
       cout << "State of Charge "<<soc<< " is out of range!"<<endl;
    }
    return result;
}

bool isChargeRateOutOfRange(float chargeRate)
{
   bool result = isLessThanOrEqualLimit(chargeRate, CHARGE_RATE_LIMIT);
   if(!result)
   {
      cout << "Charge Rate "<<chargeRate<< " is out of range!" <<endl;
   }
   return result;
}

int main()
{
  assert(isTemperatureOutOfRange(LOWER_TEMPERATURE_LIMIT) == true);
  assert(isTemperatureOutOfRange(LOWER_TEMPERATURE_LIMIT - 1) == false);
  assert(isTemperatureOutOfRange(LOWER_TEMPERATURE_LIMIT + 1) == true);

  assert(isTemperatureOutOfRange(UPPER_TEMPERATURE_LIMIT) == true);
  assert(isTemperatureOutOfRange(UPPER_TEMPERATURE_LIMIT - 1) == true);
  assert(isTemperatureOutOfRange(UPPER_TEMPERATURE_LIMIT + 1) == false);

  assert(isStateOfChargeOutOfRange(LOWER_SOC_LIMIT) == true);
  assert(isStateOfChargeOutOfRange(LOWER_SOC_LIMIT - 1) == false);
  assert(isStateOfChargeOutOfRange(LOWER_SOC_LIMIT + 1) == true);

  assert(isStateOfChargeOutOfRange(UPPER_SOC_LIMIT) == true);
  assert(isStateOfChargeOutOfRange(UPPER_SOC_LIMIT - 1) == true);
  assert(isStateOfChargeOutOfRange(UPPER_SOC_LIMIT + 1) == false);

  assert(isChargeRateOutOfRange(CHARGE_RATE_LIMIT) == true);
  assert(isChargeRateOutOfRange(CHARGE_RATE_LIMIT - 1) == true);
  assert(isChargeRateOutOfRange(CHARGE_RATE_LIMIT +1) == false);
}
