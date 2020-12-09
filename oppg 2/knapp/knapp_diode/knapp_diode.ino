const int button = 7;
int buttonstate = 0;

void setup() {
  Serial.begin(9600);
  pinMode(button, INPUT);
}

void loop() {
  buttonstate = digitalRead(button);
  if (buttonstate == HIGH){
    Serial.write(1);
  } else {
    Serial.write(0);
  }
  delay(100);
}
