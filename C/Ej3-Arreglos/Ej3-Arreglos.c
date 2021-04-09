//Prueba programando en linux
#include <stdio.h>

float arreglo[100];
float arreglob[100];
float contador = 1.0;
float suma = 0.0;
int i;

int main(){
	for(i = 0;i<=99;i++){
		arreglo[i] = contador;
		contador++;
	}
	
	//A)
	
	printf("%0.2f\n", arreglo[7]);	
	
	//B)
	
	printf("Ingrese un valor para el arreglo 4: ");
	scanf("%f", &arreglo[4]);
	
	//C)
	
	for(i = 0;i<=4;i++){
		arreglo[i] = 8;
		printf ("%0.2f\n", arreglo[i]);
	}
	
	//D)
	
	for(i = 0;i<=99;i++){
		suma += arreglo[i];
	}
	printf ("Resultado de la suma: %0.2f\n", suma);
	
	//E)
	
	printf("Arreglo a:\n");
	for(i = 0;i<=99;i++){
		printf("%0.2f - ", arreglo[i]);
	}
	printf("\nArreglo b:\n");
	for(i = 0;i<=99;i++){
		arreglob[i] = arreglo[i];
		printf("%0.2f - ", arreglob[i]);
	}
	
return 0;
}
