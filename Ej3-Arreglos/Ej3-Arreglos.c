//Prueba programando en linux
#include <stdio.h>

float arreglo[100];
float contador = 1.0;
int i;

int main(){
	for(i = 0;i<=99;i++){
		arreglo[i] = contador;
		contador++;
	}
	
	//A)
	
	printf("%f\n", arreglo[7]);	
	
	//B)
	
	printf("Ingrese un valor para el arreglo 4: ");
	scanf("%f", &arreglo[4]);

return 0;
}
