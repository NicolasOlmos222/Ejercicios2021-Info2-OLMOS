#include "antiRebote.h"                                                                                           //Libreria local

#define ESPERA 500

unsigned long tiempo;
unsigned long tiempoActual;

int desplazamientoC = 0b00000000;
int desplazamientoB = 0b11111101;
int contador = 0;

bool primerLoop = 0;

void setup() {
  tiempo = millis();
  DDRC = 0b11111111;                                                                                                //DEL 30 AL 37
  DDRB = 0b11111111;                                                                                                //DEL 10 AL 13 Y 50 AL 53                                                                                           //Funcion de libreria local para setup
}

void loop() {
  PORTC = desplazamientoC;
  PORTB = desplazamientoB;
  
  if (((tiempoActual = millis()) - tiempo) >= ESPERA){
    tiempo = tiempoActual;
    if (desplazamientoC == 0b00000000){                                       
      desplazamientoC = 0b00000001;
      if(contador == 7){
        desplazamientoC = 0b00000001;
        desplazamientoB = 0b11111110;
        contador = 0;
      }else desplazamientoB = desplazamientoB << 1 | desplazamientoB >> 7; contador++;
    }else desplazamientoC = desplazamientoC << 1;
  }
}
