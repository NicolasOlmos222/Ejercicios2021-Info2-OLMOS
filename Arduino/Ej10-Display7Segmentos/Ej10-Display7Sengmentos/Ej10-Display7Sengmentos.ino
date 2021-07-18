#define ESPERA 500                                          //Se define el tiempo de espera

int desplazamientoC = 0b00000001;                           //Desplazamiento
unsigned long tiempo;
unsigned long tiempoActual;

void setup() {
  DDRC = 0b11111111;                                        //PINES: 30 = A, 31 = B, 32 = C, 33 = D, 34 = E, 35 = F, 36 = G, 37 = PUNTO.
  tiempo = millis();
}

void loop() {
  PORTC = desplazamientoC;                                  //Configura la salida correspondiente.
  if (((tiempoActual = millis()) - tiempo) >= ESPERA){
    tiempo = tiempoActual;
    desplazamientoC = desplazamientoC << 1;                 //0b00000001 -> 0b00000010 -> 0b00000100 -> etc
  }
  if (desplazamientoC == 0b00000000){                       //Reinicia Columna si termino su ciclo.
    desplazamientoC = 0b00000001;
  }
}
