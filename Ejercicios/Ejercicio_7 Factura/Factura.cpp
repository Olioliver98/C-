#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Datos de entrada
    double subtotal = 0, total = 0, Impuesto = 0.15;
     
    cout<< "Ingrese el subtotal de la factura:  ";
    cin>> subtotal;

    cout<<endl;

    // Proceso
    total = subtotal + (subtotal * 0.15);

    // Salida
    cout<<endl;
    cout<< "Total a pagar es:  " << total;


    return 0;
}
