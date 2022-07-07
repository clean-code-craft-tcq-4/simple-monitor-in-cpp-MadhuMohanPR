#include "checkChargeRate.h"
using namespace std;

bool checkTheChargeRate(float chargeRate){
  bool Result = false;
  if(chargeRate > THRESHOLD_CHARGE_RATE) {
    cout << "Charge Rate out of range!\n";
    Result = true;
  }
  return Result;
}
