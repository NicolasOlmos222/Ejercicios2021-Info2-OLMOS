/*  Ej5-SecuenciaLed: Prender secuencialmente 3 leds. En todo momento habrá encendido solamente 1 led.
 *  Utilizar 2 pulsadores para controlar el sentido de encendido. Por ejemplo:
 *  Pulsador A: led1 > led2 > led3 > led1 > …
 *  Pulsador B: led1 > led3 > led2 > led1 > … 
 */
#include "antiRebote.h"

#define PIN_LED2 5
#define PIN_LED1 4
#define PIN_LED0 3

int cuenta = 0;
bool cicloActivo;

void setup() {
  pulsador_config ();
  pinMode(PIN_LED0, OUTPUT);
  pinMode(PIN_LED1, OUTPUT);
  pinMode(PIN_LED2, OUTPUT);
}

void loop() {
  cicloActivo = pulsador_cicloA();
  cicloActivo = pulsador_cicloB();
  
  switch(cicloActivo){
    case 0:
      cicloA();
      break;
    case 1:
      cicloB();
      break;
  }
  delay(500);
}

void cicloA(){
  switch(cuenta){
    case 0:
      digitalWrite(PIN_LED0, HIGH);
      digitalWrite(PIN_LED1, LOW);
      digitalWrite(PIN_LED2, LOW);
      cuenta++;
    break;
    case 1:
      digitalWrite(PIN_LED0, LOW);
      digitalWrite(PIN_LED1, HIGH);
      digitalWrite(PIN_LED2, LOW);
      cuenta++;
    break;
    case 3:
      digitalWrite(PIN_LED0, LOW);
      digitalWrite(PIN_LED1, LOW);
      digitalWrite(PIN_LED2, HIGH);
      cuenta = 0;
    break;
  }
}

void cicloB(){
    switch(cuenta){
    case 0:
      digitalWrite(PIN_LED0, HIGH);
      digitalWrite(PIN_LED1, LOW);
      digitalWrite(PIN_LED2, LOW);
      cuenta++;
    break;
    case 1:
      digitalWrite(PIN_LED0, LOW);
      digitalWrite(PIN_LED1, LOW);
      digitalWrite(PIN_LED2, HIGH);
      cuenta++;
    break;
    case 3:
      digitalWrite(PIN_LED0, LOW);
      digitalWrite(PIN_LED1, HIGH);
      digitalWrite(PIN_LED2, LOW);
      cuenta = 0;
    break;
  }
}
