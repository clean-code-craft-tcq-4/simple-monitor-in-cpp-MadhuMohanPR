#include "checkChargeRate.h"
using namespace std;

bool checkTheChargeRate(float chargeRate){
  bool Result = false;
  if(chargeRate > 0.8) {
    cout << "Charge Rate out of range!\n";
    Result = true;
  }
  return Result;
}
