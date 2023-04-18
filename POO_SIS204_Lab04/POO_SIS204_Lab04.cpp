#include <iostream>
#include "Empleado.h"
#include "CiberEmpleado.h"
#include "CategoriasPosibles.h"
#include "Direccion.h"
#include "Fecha.h"
int main()
{
    Direccion direccion_1("Pando", "Sucre", 243);
    Empleado empleado_1("24653464","Joel",35,6700,direccion_1);
    Fecha fecha_1(22,10,1985);
    CategoriasPosibles categoria_1;
    
   
    cout << "Soy Empleado: " << endl;
    empleado_1.mostrar();
    direccion_1.printDireccion();
    cout << "Categoria: " << categoria_1.getFijo() << endl;
    fecha_1.mostrarFecha();

    empleado_1.subirCategoria("fijo");
}
