#include "checkTemperature.h"
using namespace std;

bool checkTemp(float temperature)
{
   bool Result = false;
   if(temperature < 0 || temperature > 45){
     cout << "Temperature out of range!\n";
     Result = true;
   }
   return Result;
}
