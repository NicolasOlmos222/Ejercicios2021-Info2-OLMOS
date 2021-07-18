#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include "rs-232.h"

#define LONG_BUFFER 4096

char letra;
main(){
	int puertoCOM = 3;             //COM DEL ARDUINO
  	int baudios = 9600;            //Velocidad en baudios
 	char modo[]={'8','N','1',0}; // 8 bits de datos, no paridad, 1 bit de parada

  	unsigned char bufferRecepcion[LONG_BUFFER];
  	int cantidadBytes;


  	if(RS232_OpenComport(puertoCOM, baudios, modo, 0)){
    	printf("No se puede abrir el puerto COM\n");
    	return(0);
  	}

	while(TRUE){
		printf("Ingrese un comando: ");
		scanf("%c", &letra);
        RS232_SendByte(puertoCOM, letra);
    	Sleep(1000);
    
    	cantidadBytes = RS232_PollComport(puertoCOM, bufferRecepcion, LONG_BUFFER-1);

    	if(cantidadBytes > 0){
      		bufferRecepcion[cantidadBytes] = 0;   // Pone un NULL al final del string
			printf("%s\n", (char *)bufferRecepcion);
    	}


  }

  return(0);
}
