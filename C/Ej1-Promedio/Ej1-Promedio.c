/*Escriba un programa que calcule e imprima el promedio de varios enteros.
  Debe pedir al usuario que primero ingrese los n�meros que desea uno a uno. 
  Cuando haya ingresado los n�meros deseados debe ingresar la letra P, para as� proceder al c�lculo.*/
#include <stdio.h>
#include <stdlib.h>

char valor = 0;
float resultado = 0;
int contador = 0;
  
int main(){
while(1){
	printf("Ingrese un numero (Para finalizar envie P): ");
	scanf("%s", &valor);
	if(valor == 'p'){
		resultado = resultado/contador;
		contador = 0;
		break;
	}else resultado += (valor-48);
	contador++;
}
printf ("El resultado es: %f", resultado);
return 0;
}
