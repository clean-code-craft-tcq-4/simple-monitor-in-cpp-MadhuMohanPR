#include "checkStateOfCharge.h"
using namespace std;

bool checkSOC(float soc){
   bool Result = false;
   if(soc < LOWER_CHARGE_LIMIT || soc > UPPER_CHARGE_LIMIT) {
    cout << "State of Charge out of range!\n";
    Result = true;
  }
  return Result;
}
