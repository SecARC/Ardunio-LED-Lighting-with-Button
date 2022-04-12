int deger = 0;

void setup()
{
  pinMode(13, INPUT);
  Serial.begin(9600);

  pinMode(3, OUTPUT);
}

void loop()
{
  if (digitalRead(13) == 1) {
    while (digitalRead(13) == 1) {
    }
    deger += 42.5;
    if (deger > 255) {
      deger = 0;
    }
    Serial.println(deger);
    analogWrite(3, deger);
  }
  delay(10);
}
