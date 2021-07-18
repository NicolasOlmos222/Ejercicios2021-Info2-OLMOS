#include <stdio.h>

struct complejo {
    float real;
    float imaginario;
};

main (){
    struct complejo x = { 1.3, -2.2};
    
    struct complejo *px;

    px = &x;																		//Accinacion de ubicacion al puntero.

    px->real += 2;
    px->imaginario -=2;

    printf("El numero complejo es %.2f + (%.2f) i \n",px->real,px->imaginario);

    struct complejo cx[100];

    cx[17].real = 22;
    cx[17].imaginario = 23;
    printf("%.2f , %.2f  \n",cx[17].real,cx[17].imaginario);
   
    return 0;
}
