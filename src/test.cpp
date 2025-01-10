/*
#include <Arduino.h>
#define VOLUME_P1 36
#define VOLUME_P2 39

// LED Pins
#define LED1_P1 23
#define LED2_P1 19
#define LED3_P1 18
#define LED4_P1 5

#define LED1_P2 17
#define LED2_P2 16
#define LED3_P2 4
#define LED4_P2 0

void setup() {
  // Set LED pins as OUTPUT
  pinMode(LED1_P1, OUTPUT);
  pinMode(LED2_P1, OUTPUT);
  pinMode(LED3_P1, OUTPUT);
  pinMode(LED4_P1, OUTPUT);

  pinMode(LED1_P2, OUTPUT);
  pinMode(LED2_P2, OUTPUT);
  pinMode(LED3_P2, OUTPUT);
  pinMode(LED4_P2, OUTPUT);

  // Initialize LEDs as OFF
  digitalWrite(LED1_P1, LOW);
  digitalWrite(LED2_P1, LOW);
  digitalWrite(LED3_P1, LOW);
  digitalWrite(LED4_P1, LOW);

  digitalWrite(LED1_P2, LOW);
  digitalWrite(LED2_P2, LOW);
  digitalWrite(LED3_P2, LOW);
  digitalWrite(LED4_P2, LOW);

  // Configure volume pins as input
  pinMode(VOLUME_P1, INPUT);
  pinMode(VOLUME_P2, INPUT);
}

void loop() {
  // Read analog values from P1 and P2
  int volumeP1 = analogRead(VOLUME_P1);
  int volumeP2 = analogRead(VOLUME_P2);

  // Check if both volumes are at maximum
  if (volumeP1 > 0 && volumeP2 > 0) {
    // Blink all LEDs alternately
    for (int i = 0; i < 5; i++) { // Blink 5 times
      // Turn on LED group 1
      digitalWrite(LED1_P1, HIGH);
      digitalWrite(LED2_P1, HIGH);
      digitalWrite(LED3_P1, HIGH);
      digitalWrite(LED4_P1, HIGH);

      digitalWrite(LED1_P2, HIGH);
      digitalWrite(LED2_P2, HIGH);
      digitalWrite(LED3_P2, HIGH);
      digitalWrite(LED4_P2, HIGH);

      delay(500); // Wait 500 ms

      // Turn on LED group 2
      digitalWrite(LED1_P1, LOW);
      digitalWrite(LED2_P1, HIGH);
      digitalWrite(LED3_P1, LOW);
      digitalWrite(LED4_P1, HIGH);

      digitalWrite(LED1_P2, LOW);
      digitalWrite(LED2_P2, HIGH);
      digitalWrite(LED3_P2, LOW);
      digitalWrite(LED4_P2, HIGH);

      delay(500); // Wait 500 ms
    }
  } else {
    // Control LEDs for P1
    if (volumeP1 > 3600) {
      digitalWrite(LED1_P1, HIGH);
      digitalWrite(LED1_P2, HIGH);
      digitalWrite(LED3_P1, HIGH);
      digitalWrite(LED3_P2, HIGH);
    } else if (volumeP1 > 2800) {
      digitalWrite(LED1_P1, HIGH);
      digitalWrite(LED1_P2, HIGH);
      digitalWrite(LED3_P1, HIGH);
      digitalWrite(LED3_P2, LOW);
    } else if (volumeP1 > 1600) {
      digitalWrite(LED1_P1, HIGH);
      digitalWrite(LED1_P2, HIGH);
      digitalWrite(LED3_P1, LOW);
      digitalWrite(LED3_P2, LOW);
    } else if (volumeP1 > 600) {
      digitalWrite(LED1_P1, HIGH);
      digitalWrite(LED1_P2, LOW);
      digitalWrite(LED3_P1, LOW);
      digitalWrite(LED3_P2, LOW);
    } else {
      digitalWrite(LED1_P1, LOW);
      digitalWrite(LED1_P2, LOW);
      digitalWrite(LED3_P1, LOW);
      digitalWrite(LED3_P2, LOW);
    }

    // Control LEDs for P2
    if (volumeP2 > 3600) {
      digitalWrite(LED2_P1, HIGH);
      digitalWrite(LED4_P1, HIGH);
      digitalWrite(LED2_P2, HIGH);
      digitalWrite(LED4_P2, HIGH);
    } else if (volumeP2 > 2800) {
      digitalWrite(LED2_P1, HIGH);
      digitalWrite(LED4_P1, HIGH);
      digitalWrite(LED2_P2, HIGH);
      digitalWrite(LED4_P2, LOW);
    } else if (volumeP2 > 1600) {
      digitalWrite(LED2_P1, HIGH);
      digitalWrite(LED4_P1, HIGH);
      digitalWrite(LED2_P2, LOW);
      digitalWrite(LED4_P2, LOW);
    } else if (volumeP2 > 600) {
      digitalWrite(LED2_P1, HIGH);
      digitalWrite(LED4_P1, LOW);
      digitalWrite(LED2_P2, LOW);
      digitalWrite(LED4_P2, LOW);
    } else {
      digitalWrite(LED2_P1, LOW);
      digitalWrite(LED4_P1, LOW);
      digitalWrite(LED2_P2, LOW);
      digitalWrite(LED4_P2, LOW);
    }
  }

  delay(100); // Small delay for stability
}
*/