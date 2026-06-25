include <SoftwareSerial.h>
const int PIN_HELMET   = 2;
const int PIN_BUZZER   = 3;
const int PIN_ALCOHOL  = A0;
const int PIN_ACCIDENT = A1;

const int THRESH_ALCOHOL  = 400;   // >400 ⇒ alcohol detected
const int THRESH_ACCIDENT = 500;   // >500 ⇒ accident detected

void setup() {
  pinMode(PIN_HELMET,  INPUT_PULLUP);
  pinMode(PIN_BUZZER,  OUTPUT);

  Serial.begin(9600);
  Serial.println("Smart-Helmet simulation (no LED) started.");
}

void loop() {
  /* --- read sensors --- */
  bool helmetOn      = (digitalRead(PIN_HELMET) == LOW);  // pressed = worn
  int  alcoholValue  = analogRead(PIN_ALCOHOL);
  int  accidentValue = analogRead(PIN_ACCIDENT);

  /* --- safety evaluation --- */
  bool safeToRide = helmetOn && (alcoholValue <= THRESH_ALCOHOL);

  if (!helmetOn) {
    Serial.println("Helmet NOT worn!");
  } else if (alcoholValue > THRESH_ALCOHOL) {
    Serial.println("Alcohol detected!");
  } else {
    Serial.println("Safe to start vehicle.");
  }

  /* --- buzzer behaviour --- */
  if (safeToRide) {
    digitalWrite(PIN_BUZZER, LOW);   // buzzer off
  } else {
    digitalWrite(PIN_BUZZER, HIGH);  // buzzer on
  }

  /* --- accident detection --- */
  if (accidentValue > THRESH_ACCIDENT) {
    Serial.println("Accident detected!  (Simulated SMS)");
    Serial.println("SMS ► Accident Detected! Please help.");
    delay(10000);   // cooldown to prevent spamming
  }

  delay(50);  // short loop delay
}
