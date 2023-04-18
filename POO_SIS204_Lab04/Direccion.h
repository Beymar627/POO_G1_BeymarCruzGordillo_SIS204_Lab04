#pragma once
#include <iostream>
using namespace std;
class Direccion
{
protected:
	string calle;
	string ciudad;
	int numero;
public:
	//Metodos constructores y destructores
	Direccion();
	Direccion(string _calle,string _ciudad,int _numero);
	~Direccion();

	//Metodos accesores get y set
	string getCalle() { return calle; }
	string getCiudad() { return ciudad; }
	int getNumero() { return numero; }

	void setCalle(string _calle) { calle = _calle; }
	void setCiudad(string _ciudad) { ciudad=_ciudad; }
	void setNumero(int _numero) { numero = _numero; }

	//Otros Metodos
	void printDireccion();
};

