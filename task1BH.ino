int PIR = 4;
int value = 0;
int LED = 7;

void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(PIR, INPUT);
}

void loop()
{
  value = digitalRead(PIR);
  if (value)
  {
    digitalWrite(LED, HIGH);
    Serial.println("Motion Detected");
  }
  else
  {
    digitalWrite(LED, LOW);
    Serial.println("No Movement!");
  }
  delay(1000);
}
