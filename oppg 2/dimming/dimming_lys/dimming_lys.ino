int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    val = Serial.read();

    Serial.print("I received: ");
    Serial.println(val);
    analogWrite(9, val);
  }
}
