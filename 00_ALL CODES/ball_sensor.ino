void setup()
{
    // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(9, INPUT);
    digitalWrite(9, HIGH);
}

void loop()
{
    // put your main code here, to run repeatedly:
    if( digitalRead(9) == LOW)
    {
        Serial.println("Sensor Detect");
    }
    else
    {
        Serial.print(" -- ");
    }

    delay(100);
}
