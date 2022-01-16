/*7 Color Flash LED
Modified By,

Technical Team, REES52*/


/* The setup() function is called when a sketch starts. It is used to initialize variables, pin modes, start using libraries, etc. This function will only run once, after each power up or reset of the Arduino board. */


void setup () 

{

  // Initialize the digital pin as an output.

  // Pin 13 has an LED connected on most Arduino boards:

  pinMode (13, OUTPUT);

}


/* The loop() function executes the program repeatedly until Specified. */


void loop () 

{

  digitalWrite (13, HIGH); // set the LED on

  delay (2000); // wait for a second

  digitalWrite (13, LOW); // set the LED off

  delay (2000); // wait for a second

}
