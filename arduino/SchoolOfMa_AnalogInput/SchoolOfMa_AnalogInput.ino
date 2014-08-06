
int pinSnd = 12;
int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
int pinLed = 5;
int pinButton = 8;
int mainDelay = 0; 
int noteDuration = 0;

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(pinSnd, OUTPUT);
  pinMode(pinLed, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  
  if (digitalRead(pinButton)) {
    noteDuration = map(analogRead(A2), 0, 1023, 0, 500);
  } else {
    mainDelay = analogRead(A2);
  }
  
  // read the value from the sensor:
  digitalWrite(pinLed, HIGH);
  sensorValue = analogRead(sensorPin);
  int freq = map(sensorValue, 0, 1023, 30, 1050);
  Serial.println("---------");
  Serial.println(freq);
  Serial.println(noteDuration);
  Serial.println(mainDelay);
  tone(pinSnd, freq, noteDuration);
  digitalWrite(pinLed, LOW);
  delay(mainDelay);
  
}
