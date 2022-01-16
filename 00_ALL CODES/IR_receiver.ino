#include<IRremote.h>

int receiver = 13;
IRrecv irrecv(receiver);
decode_results results;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop(){
  if(irrecv.decode(&results)){
    //Serial.println(results.value, HEX);
    Serial.println(results.value);
    irrecv.resume();
  }
}
