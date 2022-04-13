#include <iostream>
#include <cstdlib>
#include "Home.h"
#include "facturacion.h"
#include "Productos.h"
#include "Caja.h"


using namespace std; 

void facturacion()
{

    int opcion;

    // Menu de Facturacion.
    while (true)
    {
        system("cls");
        cout << "       Facturacion            "<<endl;
        cout << "                              "<<endl;
        cout << "1. Agregar Producto           "<<endl;
        cout << "2. Agregar Producto 3ra edad  "<<endl;
        cout << "3. Cobrar factura             "<<endl;
        cout << "4. Home                       "<<endl;
        cout<<  "0. Salir del programa         "<< endl;

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
            Caja();
        }
        else
        {
            productos(opcion);
        }

        // Regresar al menu principal

        if (opcion == 4)
        {
            Home();
        }
        

    }

}