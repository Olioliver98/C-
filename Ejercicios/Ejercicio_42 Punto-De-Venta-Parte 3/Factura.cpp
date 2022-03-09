#include <iostream>
using namespace std;

double subtotal;
string ListaProducto;
void AgregarProducto(string descripcion, int cantidad, double precio)
{

    ListaProducto = ListaProducto + descripcion + "\n";
    subtotal = subtotal + (cantidad * precio);
    

}