#include <iostream>
#include <cstdlib>
#include "Home.h"
#include "facturacion.h"
#include "Productos.h"

#include "Caja.h"
#include "Reloj.h"
#include "SAD.h"


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
    cout<<"                 RECIBO DE PAGO                   "<<endl;
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


// Se meustra la opcion de caja en pantalla e imprime los valores
void Caja()
{
    int imprimir;
    double cant = 0, cambio = 0;
    
    // Nuevamente se debe volver a calcular el total para mostarlo en este void
    Total = impuesto + subtotal;
    cout << "El total a pagar es de L. "<< Total <<endl<<endl;
    cout << "Ingrese la cantidad recibida"<<endl;
    cin >> cant;

    cambio = cant - Total;
    cout<<"El cambio es de: L. "<< cambio <<endl;


    cout<<"Desea impimir la factura en transito?"<<endl;
    cout<<" 1. Si   2. No"<<endl;
    cin>> imprimir;


    // Opcion de imprimir o no la factura.
    switch (imprimir)
    {
        case 1:
        {
            ImprimirFactura();
            break;
        }
        
    case 2:
        {
            break;
        }
        
    default:
        {
            cout<<"Seleccione una opcion valida"<<endl;
        }
        
    } //Cierra switch
    
}// Cierra Void Caja

