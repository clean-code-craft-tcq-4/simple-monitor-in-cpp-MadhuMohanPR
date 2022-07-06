#include "checkStateOfCharge.h"
using namespace std;

bool checkSOC(float soc){
   bool Result = false;
   if(soc < 20 || soc > 80) {
    cout << "State of Charge out of range!\n";
    Result = true;
  }
  return Result;
}
