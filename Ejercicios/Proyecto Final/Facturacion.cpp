#include <iostream>
#include <cstdlib>
#include "facturacion.h"
#include "Productos.h"
#include "Recibo.h"


using namespace std; 

void facturacion()
{

    int opcion;

    // Menu de Facturacion.
    while (true)
    {
        system("cls");
        cout << "       Facturacion         "<<endl;
        cout << "                           "<<endl;
        cout << "1. Agregar Producto         "<<endl;
        cout << "2. Agregar Producto 3ra edad   "<<endl;
        cout << "3. Imprimir Factura        "<<endl;
        cout<<  "0. Salir                   "<< endl;

        cout<< endl;
        cout<<"Ingrese una opcion"<<endl;
        cin >> opcion;


        if (opcion == 0)
        {
            cout<<"Hasta Luego!"<<endl;
            break;
        }

         if (opcion == 3)
        {
            ImprimirFactura();
        } 
        else
        {
            productos(opcion);
        }
        

    }

}