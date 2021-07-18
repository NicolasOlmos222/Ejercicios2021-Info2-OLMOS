#include <stdio.h>
#include <stdlib.h>

struct sensores{
    char nombre;    // 1 byte
    int valor;      // 4 byte
    long tiempo;    // 4 byte
}lectura;

main(){
	printf("Ingrese la letra del sensor medido: ");
	scanf("%c", &lectura.nombre);
	printf("Ingrese el valor medido: ");
	scanf("%d", &lectura.valor);
	printf("Ingrese el tiempo desde la ultima medicion (en ms): ");
	scanf("%lu", &lectura.tiempo);
	
	printf("El tamano de la estructura es de: %d bytes", sizeof(lectura));
	
    return 0;
}
