#include "checkStateOfCharge.h"
using namespace std;

bool checkSOC(float soc){
   bool Result = true;
   if(soc < 20 || soc > 80) {
    cout << "State of Charge out of range!\n";
    Result = false;
  }
  return Result;
}
