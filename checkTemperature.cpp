#include "checkTemperature.h"
using namespace std;

bool checkTemp(float temperature)
{
   bool Result = false;
   if(temperature < LOWER_TEMPERATURE_LIMIT || temperature > UPPER_TEMPERATURE_LIMIT){
     cout << "Temperature out of range!\n";
     Result = true;
   }
   return Result;
}
