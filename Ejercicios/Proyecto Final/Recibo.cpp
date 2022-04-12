#include <iostream>
#include "facturacion.h"
#include "Productos.h"
#include "Recibo.h"

using namespace std;

double subtotal, Total, impuesto = 0.15;
string ListaProducto;

// Los productos y subtotales se iran sumando conforme los agrega el usuario
void AgregarProducto(string descripcion, int cantidad, double precio)
{
    ListaProducto = ListaProducto + descripcion + "\n";
    subtotal = subtotal + (cantidad * precio);
}   


// Recibo de pago o Factura.
void ImprimirFactura()
{
    system("cls");
    cout<<"**************************************************"<<endl;
    cout<<"                     RECIBO DE PAGO                      "<<endl;
    cout<<"**************************************************"<<endl;
    cout<<endl;




    // Muestra los productos agregados
    cout<< "Productos:  "<< endl;
    cout<< ListaProducto << endl;

    // Calculo del subtotal
    cout<<"Subtotal: L. "<< subtotal <<endl;
    cout<<endl;

    // Calculo del impuesto
    impuesto = subtotal * impuesto;
    cout << "Impuesto: L. "<< impuesto <<endl;
    cout<< endl;

    // Calculo del total del reibo de pago
    Total = impuesto + subtotal;
    cout << "Total a pagar: L. "<< Total <<endl;
    cout<< endl;


    // Notas al final de la fatura
    cout<< "____________________________________________"<<endl<<endl;
    cout<< "  LA FACTURA ES BENEFICIO DE TODOS EXIJALA  " <<endl << endl;

    cout<< "        Gracias por su compra              "<<endl;
    cout<< "____________________________________________"<<endl<<endl;;
    system("pause");
}