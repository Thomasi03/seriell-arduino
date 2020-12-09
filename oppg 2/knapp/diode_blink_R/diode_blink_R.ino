void setup() {
Serial.begin(9600);
pinMode(8,OUTPUT);
}

int buttonstate = 0;

void loop() {
if (Serial.available() > 0) {

  buttonstate = Serial.read();

  Serial.print("I received: ");
  Serial.println(buttonstate, DEC);
}

if (buttonstate == 1) {
  digitalWrite(8, HIGH);
}
else {
  digitalWrite(8, LOW);
  }
}
