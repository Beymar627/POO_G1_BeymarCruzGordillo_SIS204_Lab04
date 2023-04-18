#pragma once
#include <iostream>
using namespace std;
class CategoriasPosibles
{
private:
	const string contratado="contratado";
	const string temporal="temporal";
	const string privado = "privado";
	const string fijo = "fijo";
public:
	//Constructores y destructores
	CategoriasPosibles();
	~CategoriasPosibles();
	 
	//Metodos accesores get y set
	string getContratado() { return contratado; }
	string getTemporal() { return temporal; }
	string getPrivado() { return privado; }
	string getFijo() { return fijo; }

	//Otros metodos
	void mostrarCategoriasPosibles();
};

