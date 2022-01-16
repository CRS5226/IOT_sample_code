const int lightBlocking = A0; //define sensor to pin A0

const int led = 9;//define led to pin 9

int val;//create sensor value variable



void setup() {
 

  pinMode(lightBlocking,INPUT);//set the sensor to an input

  pinMode(led, OUTPUT);//set led as output

  Serial.begin(9600);//begin the serial monitor
 

}

void loop() {

int val = analogRead(lightBlocking);//read the sensor

if (val < 400){

  digitalWrite(led, HIGH);//turn led on
 

}

if(val > 600){

  digitalWrite(led, HIGH);//turn led on

}

else{

  digitalWrite(led, LOW);//turn led off

}

  Serial.println(val);//print the sensor value to the serial monitor

  delay(200);//wait 200 milliseconds

}
