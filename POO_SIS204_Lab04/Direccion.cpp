#include "Direccion.h"
Direccion::Direccion() {
	calle="";
	ciudad="";
	numero=0;
}
Direccion::Direccion(string _calle, string _ciudad, int _numero) {
	calle = _calle;
	ciudad = _ciudad;
	numero = _numero;
}
Direccion::~Direccion() {};

//imprimir direccion
void Direccion::printDireccion() {
	cout << "Direccion: " << endl;
	cout << "Calle :" << calle << endl;
	cout << "Ciudad: " << ciudad << endl;
	cout << "Numero: " << numero << endl;
}