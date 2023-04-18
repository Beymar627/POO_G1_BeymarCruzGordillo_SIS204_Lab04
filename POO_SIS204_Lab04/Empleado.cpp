#include "Empleado.h"
#include "CategoriasPosibles.h"
Empleado::Empleado() {
	ci = "";
	nombre = "";
	edad = 0;
	salario = 0;
}
Empleado::Empleado(string _ci, string _nombre, int _edad, float _salario,Direccion _direc) {
	ci = _ci;
	nombre = _nombre;
	edad = _edad;
	salario = _salario;
	direc = _direc;
}
Empleado::~Empleado() {};
void Empleado::subirCategoria(string categoria) {
	if ( categoria != "fijo") {
		categoria = "fijo";
		if (salario + 1000 > 15000) {
			salario = 15000;
		}
		else
			salario = salario + 1000;
	}
}

void Empleado::mostrar() {
	cout << "nombre: " << nombre << endl;
	cout << "edad: " << edad << endl;
	cout << "ci: " << ci << endl;;
	cout << "salario: " << salario << endl;
	//printDireccion();
}