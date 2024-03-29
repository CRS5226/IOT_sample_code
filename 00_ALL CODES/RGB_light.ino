
int redPin= 7;
int greenPin = 6;
int bluePin = 5;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  setColor(255, 0, 0); // Red Color
  delay(1000);
  setColor(0, 255, 0); // Green Color
  delay(1000);
  setColor(0, 0, 255); // Blue Color
  delay(1000);
  setColor(255, 255, 255); // White Color
  delay(1000);
  setColor(170, 0, 255); // Purple Color
  delay(1000);
}

void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}


//new code
/*
//----Begin Code (copy from here)----
//Includes:
//Variables:
int redPin = 7; //Pin that the red LED leg is connected to.
int greenPin = 6; //Pin that the green LED leg is connected to.
int bluePin = 5; //Pin that the blue LED leg is connected to.

int rVal = 0; //Variable to store the PWM value to run the red LED at.
int gVal = 0; //Variable to store the PWM value to run the red LED at.
int bVal = 0; //Variable to store the PWM value to run the red LED at.
String serialIn = ""; //Variable to store serial input from pc to arduino
int changed = 1; //variable to tell when the values have changed, so we dont flood the serial output with useless data.
int random_values = 0; //If set to 1 the channels will randomly change every period.
unsigned long lastRand = 0; //Store the last time we randomized.
int period = 1000; //period between randomizations. 1000 = 1 second.
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
Serial.print("RGB LED Test Code (C) Tyson Popynick. Free to use without notification, renumeration or attribution. \n(Although you are welcome to attribute if you wish).\n\nPlease do NOT look directly at the LED modules when they are powered, as they are extremely bright!\nEnter the following commands into the box above, then press enter to send.\n\nOne letter per send please.\n\nR = Large increase to red channel. \nr = Small increase to red channel.\nG = Large increase to green channel. \ng = Small increase to green channel.\nB = Large increase to blue channel. \nb = Small increase to blue channel. \n! = Toggle randomised lights\n'.' to clear all channels.\n\n");
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
}
void loop() {
// put your main code here, to run repeatedly:
//Serial In
if (Serial.available()) { //If there is a serial connection
serialIn = Serial.readString(); //store any incoming (from the pc to arduino) data
if (serialIn == "r") { //if we send the letter r (lowercase)
rVal += 10; //Increase red value by 10
}
if (serialIn == "R") { //if we send the letter R (uppercase)
rVal += 30; //Increase red value by 30
}
if (rVal >= 256) { //If the value goes above 255, reset to 0. (255 is max value for PWM)
rVal = 0;
}
if (serialIn == "g") { //if we send the letter g (lowercase)
gVal += 10; //Increase green value by 10
}
if (serialIn == "G") { //if we send the letter G (uppercase)
gVal += 30; //Increase green value by 30
}
if (gVal >= 256) { //If the value goes above 255, reset to 0. (255 is max value for PWM)
gVal = 0;
}
if (serialIn == "b") { //if we send the letter b (lowercase)
bVal += 10; //Increase blue value by 10
}
if (serialIn == "B") { //if we send the letter B (uppercase)
bVal += 30; //Increase blue value by 30
}
if (bVal >= 256) { //If the value goes above 255, reset to 0. (255 is max value for PWM)
bVal = 0;
}
if (serialIn == ".") { //if we send a "."
rVal = 0; //Clear all values
gVal = 0; //Clear all values
bVal = 0; //Clear all values
}
if (serialIn == "?") { //if we send a "?"
Serial.print("RGB LED Test Code (C) Tyson Popynick. Free to use without notification, renumeration or attribution. \n(Although you are welcome to attribute if you wish).\n\nPlease do NOT look directly at the LED modules when they are powered, as they are extremely bright!\nEnter the following commands into the box above, then press enter to send.\n\nOne letter per send please.\n\nR = Large increase to red channel. \nr = Small increase to red channel.\nG = Large increase to green channel. \ng = Small increase to green channel.\nB = Large increase to blue channel. \nb = Small increase to blue channel. \n! = Toggle randomised lights\n'.' to clear all channels.\n\n");
}
if (serialIn == "!") { //if we send a "!"
random_values = !random_values;
}
serialIn = "";
changed = 1;
}
//loop continues
if (random_values && (lastRand + period) <= millis()) {
rVal = random(0,255); //Randomize red channel
gVal = random(0,255); //Randomize green channel
bVal = random(0,255); //Randomize blue channel
lastRand = millis();
changed = 1;
Serial.println("Randomized! Send '!' to stop randomization or '?' for the command list.");
}
if (changed) {
Serial.print("Red: ");
Serial.print(rVal);
Serial.print(" Green: ");
Serial.print(gVal);
Serial.print(" Blue: ");
Serial.print(bVal);
Serial.print(" Randomize: ");
Serial.println(random_values);
changed = 0;
analogWrite(redPin, rVal);
analogWrite(greenPin, gVal);
analogWrite(bluePin, bVal);
}
}
//Custom functions
//----End Code (copy to here)----
*/
