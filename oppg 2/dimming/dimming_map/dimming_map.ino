int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
}

void loop() {
  val = map(analogRead(A0), 0, 1023, 0, 255);
  Serial.write(val);

  delay(100);
}
  
  
