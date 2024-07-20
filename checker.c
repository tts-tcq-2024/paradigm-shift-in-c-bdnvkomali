#include <stdio.h>
#include <assert.h>

int temperature_check(float temperature) { 
    return (temperature >= 0 && temperature <= 45);
}
 
int soc_check(float soc) {
    return (soc >= 20 && soc <=84);
}
int charge_rate_check(float chargeRate) {   
 return (chargeRate <= 0.8);

}
int battery_check(float temperature, float soc, float chargeRate){
    if (temperature_check(temperature) && soc_check(soc) && charge_rate_check(chargeRate))
    return 1;
  else 
   return 0;
    }
int main() {
  assert(batteryIsOk(25, 70, 0.7) == 1);
  assert(batteryIsOk(50, 85, 0) == 0);

  
}

