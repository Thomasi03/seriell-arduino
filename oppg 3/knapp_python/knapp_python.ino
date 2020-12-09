const int button = 11;
int buttonstate = 0;

void setup() {
Serial.begin(9600);
pinMode(button, INPUT);
}

void loop() {
buttonstate = digitalRead(button);
if (buttonstate == HIGH) {
    Serial.write("knapp ");
} else {
    Serial.write("");
  }
  delay(100);
}
