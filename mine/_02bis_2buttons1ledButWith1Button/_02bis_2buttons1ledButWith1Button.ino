
#define LED 5
#define BUTTON 9

bool is_on = false;
bool pressed = false;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);

  digitalWrite(LED, LOW);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  if (digitalRead(BUTTON) == LOW) {
    if (!pressed) {
      pressed = true;
    
      if (is_on) {
        digitalWrite(LED, LOW);
        digitalWrite(LED_BUILTIN, LOW);
      } else {
        digitalWrite(LED, HIGH);
        digitalWrite(LED_BUILTIN, HIGH);  
      }
      is_on = !is_on;
    }
  } else {
    pressed = false;
  }
  
}
