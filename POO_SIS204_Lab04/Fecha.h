#pragma once
class Fecha
{
private:
	int dd;//dia
	int mm;//mes
	int aa;//año
public:
	//Constructores y destructores
	Fecha(int dd,int mm,int aa);
	~Fecha();

	//metodos accesores get y set
	int getDd() { return dd; }
	int getMm() { return mm; }
	int getAa() { return aa; }

	//Otros metodos
	void mostrarFecha();
};

