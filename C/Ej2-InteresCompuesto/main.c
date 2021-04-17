/*Lea y pruebe el siguiente ejemplo: (Deitel, p.97)
Luego modifique el programa para repetir sus pasos para tasas de interés del 5 por ciento, 6 por ciento, 8 por ciento, 9 por ciento, y 10 por ciento. 
Utilice un for para crear un ciclo que varíe la tasa de interés.
*/
#include <stdio.h>
#include <math.h>

double monto;
double principal = 1000.0;
double tasa[5] = {.05, .06, .08, .09, .10};
int anio;
int i;
//PROBANDO LINUX
int main(){
	for(i = 0; i <= 4;i++){
		printf("Tasa del %0.0f: \n", tasa[i]*100.0);
		printf("%4s %21s\n", "Anio", "Monto del deposito");
		for(anio = 1;anio <= 10; anio++){
			monto = principal * pow(1.0 + tasa[i], anio);
			printf("%4d %21.2f\n", anio, monto);
		}
	}
	return 0;
}
