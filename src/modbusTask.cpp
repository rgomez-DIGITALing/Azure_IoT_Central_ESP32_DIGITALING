#include "weidosTasks.h"


#include <Arduino.h>


void weidosSetup(){
  Serial.begin(115200);
  delay(5000);
  Serial.println("Welcome");
  Serial.println("End of set up");    
};
