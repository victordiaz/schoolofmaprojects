/*
* http://dev.mikamai.com/post/78652180658/how-to-program-an-attiny85-or-attiny45-with-an
*/ 

int led = 8;

void setup() {                
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
