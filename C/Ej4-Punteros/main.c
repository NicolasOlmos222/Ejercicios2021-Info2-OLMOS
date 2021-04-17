/*Para cada una de las siguientes, escriba una sola instrucción que realice la tarea indicada. 
Suponga que se definieron las variables long integer valor1 y valor2, y que valor1 se inicializó en 200000.*/
#include <stdio.h>

int *valor1;
int *valor2;

int a = 200000;

valor1 = &a;
int ptrL;

main(){
	//A)
	
	printf("Inicialice el valor de ptrL: ");
	scanf("%Lf", ptrL);
	
	//B)
	
	valor1 = &ptrL;
	
	//C)
	
	printf("Valor al que apunta: %Lf",*valor1);
	
	//D)
	
	valor2 = &valor1;
	
	//E)
	
	printf("Valor al que apunta: %Lf",*valor2);
	
	//F)
	
	printf("Dirreccion a que apunta: %Lf",*valor1);
	
	//G)
	
	printf("Valor de ptrL: %Lf",ptrL);
	
	return 0;
}
