#include <iostream>
#include <cstdlib>
#include "facturacion.h"
#include "Productos.h"

#include "Caja.h"

void Home()
{
    // Declaracion de varables
    system("cls");
    int home;

    cout <<"        SUPER FARMACIAS EN SALUD      "<<endl;

    cout <<"         Seleccione una opcion        "<<endl;
    cout <<"                                      "<<endl;
    cout <<" 1. Facturacion                       "<<endl;
    cout <<" 2. Caja                              "<<endl;
    cout <<" 3. Servicio a domicilio              "<<endl;
    cout <<" 4. Reservacion                       "<<endl;
    cout <<" 5. Opciones adicionales              "<<endl;
    cin >> home;


    if (home == 1)
    {
        facturacion();
    }

    if (home == 2)
    {
        Caja();
    }
}