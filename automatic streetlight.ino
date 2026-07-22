const int LDR_PIN = A0;
const int LED_PIN = 13;
const int THRESHOLD = 500; // 969 in dark is well above 500

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);
  
  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  // FLIPPED LOGIC: Turn ON LED when value goes ABOVE 500 (Darkness = 969)
  if (ldrValue > THRESHOLD) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  delay(200);
}
