#pragma once
#include <iostream>
#include "Direccion.h"
#include "CategoriasPosibles.h"
using namespace std;
class Empleado
{
//private:
protected:
	string ci;
	string nombre;
	int edad;
	CategoriasPosibles categoria;
	float salario;
	Direccion direc;
public:
	//Metodos constructores y destructores

	Empleado();
	//Sobrecarga de funiones
	Empleado(string _ci,string _nombre,int _edad,float _salario,Direccion direc);
	~Empleado();

	//Metodos accesores get y set (se usa metodos o funciones inline)

	string getCi() { return ci; }
	string getNombre() { return nombre; }
	int getEdad() { return edad; }
	CategoriasPosibles getCategoria() { return categoria; }
	float getSalario() { return salario; }
	Direccion getDireccion() { return direc; }

	void setCi(string _ci) { ci = _ci; }
	void setNombre(string _nombre) { nombre = _nombre; }
	void setEdad(int _edad) { edad = _edad; }
	//void setCategoria(CategoriasPosibles _categoria) { categoria = _categoria; }
	void setSalario(float _salario) { salario = _salario; }
	void setDireccion(Direccion _direc) { direc = _direc; }

	//otros Metodos
	void subirCategoria(string categoria);
	
	//Polimorfismo
	virtual void mostrar();

};

