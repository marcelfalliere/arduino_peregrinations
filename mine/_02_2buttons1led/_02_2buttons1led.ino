
#define LED 5
#define ON_BUTTON 9
#define OFF_BUTTON 8


void setup() {
  pinMode(LED, OUTPUT);
  pinMode(ON_BUTTON, INPUT_PULLUP);
  pinMode(OFF_BUTTON, INPUT_PULLUP);

  pinMode(LED_BUILTIN, OUTPUT);

  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(ON_BUTTON) == LOW) {
    digitalWrite(LED, HIGH);
    
    digitalWrite(LED_BUILTIN, HIGH);
  } 
  if (digitalRead(OFF_BUTTON) == LOW) {
    digitalWrite(LED, LOW);

    digitalWrite(LED_BUILTIN, LOW);
  }
}
