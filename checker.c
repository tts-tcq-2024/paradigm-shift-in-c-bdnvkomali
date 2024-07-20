#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int temperature_check(float temperature) { 
    return (temperature >= 0 && temperature <= 45);
}
 
int soc_check(float soc) {
    return (soc >= 20 && soc <=80);
}
int charge_rate_check(float chargeRate) {   
 return (chargeRate <= 0.8);

}
int battery_check(float temperature, float soc, float chargeRate){
    if {(temperature_check(temperature) && soc_check(soc) && charge_rate_check(chargeRate))
   printf("Battery is okay\n");
return 1;
}
else {
   printf("Battery is Not  okay\n");
    return 0;
}
int main() {
  assert(battery_check(25, 70, 0.7) == true);
  assert(battery_check(50, 85, 0) == false);

  
}

