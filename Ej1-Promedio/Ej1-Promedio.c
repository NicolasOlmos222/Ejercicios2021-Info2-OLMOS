/*Escriba un programa que calcule e imprima el promedio de varios enteros.
  Debe pedir al usuario que primero ingrese los n�meros que desea uno a uno. 
  Cuando haya ingresado los n�meros deseados debe ingresar la letra P, para as� proceder al c�lculo.*/
#include <stdio.h>
  
char valor;
int numeros = 0;
  
int main(){
	printf("Ingrese los numeros que se desee, al finalizar ingrese P.\n");
	
	while(1){
		printf ("Ingrese un valor: ");
		valor = getc(stdin);
		if(valor != 'p' && valor != 'P'){
			numeros += (valor - '0');
			printf("%d", numeros);
		}else break;
		//putc (valor, stdout);
	}
	printf("%d", numeros);
	
	return(0);
}
