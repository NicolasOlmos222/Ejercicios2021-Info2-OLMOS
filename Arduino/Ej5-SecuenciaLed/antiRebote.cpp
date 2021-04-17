#include "antiRebote.h"

int estado_anterior;
int estado_anteriorb;
int estado_boton;                                                  //Estado real del boton sin rebotes
int estado_botonb;

unsigned long lastDebounceTime = 0;                                // ultimo momento que el pin ha cambiado
unsigned long debounceDelay = 50;                                  // tiempo de rebote, aumentar si hay rebotes

bool ciclo;

void pulsador_config (){
  //Serial.begin(9600);
  pinMode(PIN_PULSADOR1, INPUT_PULLUP);                        //Selecciona el programa
  pinMode(PIN_PULSADOR0, INPUT_PULLUP);                        //inicia el robot
  estado_anterior = digitalRead(PIN_PULSADOR1);                //Inicializo con el estado del boton al iniciar programa
  estado_boton = estado_anterior;
  estado_anteriorb = digitalRead(PIN_PULSADOR0);                                               //Estado real del boton sin rebotes
  estado_botonb = estado_anteriorb;
}

bool pulsador_cicloA (){
  int sensorValb = digitalRead(PIN_PULSADOR0);
  //Serial.println(sensorVal);
  if (sensorValb != estado_anteriorb) {
    lastDebounceTime = millis();                                    //momento en que detecto un cambio de estado del boton
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    //Cuando ha pasado el tiempo con una señal estable
    if (sensorValb != estado_botonb) {
      estado_botonb = sensorValb;
      if (estado_botonb == HIGH) {                                   //Detecto flanco ascendente, poner LOW para detectar flanco descendente
        //Serial.println("pulso");
        ciclo = 1;
        }
      }
    }
    estado_anteriorb = sensorValb;                                      //Sin esto no funciona, actualizo para el siguente loop
    return (ciclo);
}

bool pulsador_cicloB (){
  int sensorValb = digitalRead(PIN_PULSADOR1);
  //Serial.println(sensorVal);
  if (sensorValb != estado_anteriorb) {
    lastDebounceTime = millis();                                    //momento en que detecto un cambio de estado del boton
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    //Cuando ha pasado el tiempo con una señal estable
    if (sensorValb != estado_botonb) {
      estado_botonb = sensorValb;
      if (estado_botonb == HIGH) {                                   //Detecto flanco ascendente, poner LOW para detectar flanco descendente
        //Serial.println("pulso");
        ciclo = 0;
        }
      }
    }
    estado_anteriorb = sensorValb;                                      //Sin esto no funciona, actualizo para el siguente loop
    return (ciclo);
  }
  
