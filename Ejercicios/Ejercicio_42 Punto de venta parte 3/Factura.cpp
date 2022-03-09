#include <iostream>
using namespace std;

double subtotal;
string ListaProductos;
void AgregarProducto(string descripcion, int cantidad, double precio)
{
    ListaProductos = ListaProductos + descripcion + "\n";
    subtotal = subtotal + (cantidad * precio);
}