#include <iostream>
#include <cstdlib>
#include "Home.h"
#include "facturacion.h" // -> Facturacion
#include "Caja.h" // -> Caja

#include "SAD.h" // -> Servicio a

void Home()
{
    // Declaracion de varables
    system("cls");
    int home;



    cout <<"        SUPER FARMACIAS EN SALUD      "<<endl;

    cout <<"         Seleccione una opcion        "<<endl;
    cout <<"                                      "<<endl;
    cout <<"         1. Facturacion                       "<<endl;
    cout <<"         2. Caja                              "<<endl;
    cout <<"         3. Servicio a domicilio              "<<endl;
    cout <<"         4. Reservacion                       "<<endl;
    cout <<"         5. Opciones adicionales              "<<endl;
    cin >> home;

    switch (home)
    {

        // Lleva a la funcion de Facturacion.
        case 1:
        {
            facturacion();
            break;
        }

        // Lleva a la funcin de Caja.   
        case 2:
            {
                Caja();
                break;
            }

        // Lleva a la funcion de Servicio a Domiciolio ( SAD ).
        case 3:
            {
                Sad();
                break;

            } 


        // Por si se selecciona una opcion que no valida.
        default:
            {
                cout<<"Seleccione una de opciones validas"<<endl;
                break;
            }
            
    }

   

    
}