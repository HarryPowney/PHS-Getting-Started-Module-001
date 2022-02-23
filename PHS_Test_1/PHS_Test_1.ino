//   More examples here... https://www.arduino.cc/en/Tutorial/BuiltInExamples


// YES IT'S A BLINK TEST, BUT IT DOES DEMONSTRATE THAT EVERYTHING IS WORKING

// USE A BREADBOARD
// CONNECT AN LED 'Anode+ve long wire' TO ESP32 PIN 2 AND THE 'Cathode-ve short wire' TO A RESISTOR (OF AROUND 450 OHMS) AND GROUND 
// PLUG IN THE USB CABLE AND HIT 'UPLOAD'

// OPEN YOUR SERIAL MONITOR AND SET THE SPEED TO '115200' BAUD

void setup() {

  #define ledPin 2

  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  Serial.print("Well done! it's working and we're on the move\n");  // something to learn just here
  for (int this1 = 0; this1 < 3; this1++) {
      digitalWrite(ledPin, HIGH);
      delay(100);
      digitalWrite(ledPin, LOW);
      delay(200);
  }
  delay(600);
  for (int this1 = 0; this1 < 3; this1++) {
      digitalWrite(ledPin, HIGH);
      delay(600);
      digitalWrite(ledPin, LOW);
      delay(300);
  }
  for (int this1 = 0; this1 < 3; this1++) {
      digitalWrite(ledPin, HIGH);
      delay(100);
      digitalWrite(ledPin, LOW);
      delay(200);
  }
  delay(2000);
}
