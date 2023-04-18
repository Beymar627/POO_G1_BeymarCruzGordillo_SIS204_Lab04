#include "CiberEmpleado.h"

CiberEmpleado::CiberEmpleado() {
	tarjeta = "";
}
CiberEmpleado::~CiberEmpleado() {};

void CiberEmpleado::mostrar() {
	Empleado::mostrar();
	cout << "Tarjea: " << tarjeta << endl;
}