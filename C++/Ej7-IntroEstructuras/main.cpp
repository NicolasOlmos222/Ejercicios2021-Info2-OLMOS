#include "iostream"
using namespace std;

struct cliente {
	char apellido[15];
	char nombre[15];
	int numeroCliente;
	struct personal{
		char numeroTelefonico[11];
		char direccion[50];
		char ciudad[15];
		char estado[3];
		char codigoPostal[6];
	} personal;
} registroCliente, *ptrCliente;


main(){
	ptrCliente = &registroCliente;
	
	struct cliente registro;
	//Carga de variables:
	cout << "Apellido: ";
	cin >> registro.apellido;
	cout << "Nombre: ";
	cin >> registro.nombre;
	cout << "Numero Cliente: ";
	cin >> registro.numeroCliente;
	cout << "Numero Telefonico: ";
	cin >> registro.personal.numeroTelefonico;
	cout << "Direccion: ";
	cin >> registro.personal.direccion;
	cout << "Ciudad: ";
	cin >> registro.personal.ciudad;
	cout << "Estado: ";
	cin >> registro.personal.estado;
	cout << "Codigo Postal: ";
	cin >> registro.personal.codigoPostal;
	
return 0;
}
