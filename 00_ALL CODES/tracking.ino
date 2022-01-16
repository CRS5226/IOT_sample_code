const int led = 13;
const int tracker = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(tracker, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(tracker);

  if(val == LOW){
    digitalWrite(led, HIGH);
  }else {
    digitalWrite(led, LOW);
  }

}
