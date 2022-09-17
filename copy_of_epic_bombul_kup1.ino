// C++ code
//
void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  Serial.println(digitalRead(7));
  if (digitalRead(7) == 1) {
    tone(5, 29, 500); // play tone 10 (A#0 = 29 Hz)
    digitalWrite(11, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}