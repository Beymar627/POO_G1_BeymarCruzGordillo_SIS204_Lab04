#include "Fecha.h"
#include <iostream>
Fecha::Fecha(int dd, int mm, int aa) {
	this->dd = dd;
	this->mm = mm;
	this->aa = aa;
}
Fecha::~Fecha() {};

void Fecha::mostrarFecha() {
	std::cout << "fecha: " << dd << "/" << mm << "/" << aa;
}