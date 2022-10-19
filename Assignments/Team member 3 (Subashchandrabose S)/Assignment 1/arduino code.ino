const int ain = A0;
const int aout = 9;
int sensorValue = 0;
int outputValue = 0;
const int din = 8;
const int ledPin =  10;
int buttonState = 0;

void setup() {

  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(din, INPUT);
}
void loop() {

  sensorValue = analogRead(ain);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(aout, outputValue);
  buttonState = digitalRead(din);
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
