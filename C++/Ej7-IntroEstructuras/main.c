#include <stdio.h>

struct cliente {
	char apellido[15];
	char nombre[15];
	int numeroCliente;
	struct personal{
		char numeroTelefonico[11];
		char direccion[50];
		char ciudad[15];
		char estado[15];
		char codigoPostal[6];
	} personal;
} registroCliente, *ptrCliente;


main(){
	ptrCliente = &registroCliente;
	
	struct cliente registroCliente;
	//Carga de variables:
	printf("Apellido: "); 			scanf("%s", &registroCliente.apellido);
	printf("Nombre: "); 			scanf("%s", &registroCliente.nombre);
	printf("Numero cliente: "); 	scanf("%d", &registroCliente.numeroCliente);
	printf("Numero telefonico: ");	scanf("%s", &registroCliente.personal.numeroTelefonico);
	printf("Direccion: "); 			scanf("%s", &registroCliente.personal.direccion);
	printf("Ciudad: "); 			scanf("%s", &registroCliente.personal.ciudad);
	printf("Estado: "); 			scanf("%s", &registroCliente.personal.estado);
	printf("Codigo postal: "); 		scanf("%s", &registroCliente.personal.codigoPostal);
	
	//lectura:
	printf("Datos de: %s %s\n", registroCliente.apellido, registroCliente.nombre);
	printf("Numero de cliente: %d\n", registroCliente.numeroCliente);
	printf("Telefono: %s\n", registroCliente.personal.numeroTelefonico);
	printf("Direccion: %s\n", registroCliente.personal.direccion);
	printf("Ciudad: %s\n", registroCliente.personal.ciudad);
	printf("Estado: %s\n", registroCliente.personal.estado);
	printf("Codigo postal: %s\n", registroCliente.personal.codigoPostal);
	
return 0;
}
