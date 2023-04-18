#pragma once
#include <iostream>
#include "Empleado.h"
using namespace std;
class CiberEmpleado:public Empleado
{
private:
	string tarjeta;
public:
	//Metodos constructores y destructores
	CiberEmpleado();
	~CiberEmpleado();

	//Metodos accesores seters y geters
	string getTarjeta() { return tarjeta; }
	void setTarjeta(string _tarjeta) { tarjeta = _tarjeta; }

	//Otros Metodos 
	void mostrar();
};

