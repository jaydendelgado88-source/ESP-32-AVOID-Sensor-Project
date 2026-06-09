int SENSORINPUT = 15;
int BUZZEROUT = 13;

void setup() {
  pinMode(SENSORINPUT, INPUT);
  pinMode(BUZZEROUT, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  digitalRead(SENSORINPUT);
  int value = digitalRead(SENSORINPUT);
  Serial.println(value);

  if (value == 1){
    digitalWrite(BUZZEROUT, LOW);
  }
  else
  {
    digitalWrite(BUZZEROUT, HIGH);
  }
}
