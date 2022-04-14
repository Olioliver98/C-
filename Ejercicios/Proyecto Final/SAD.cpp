#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Home.h"
#include "facturacion.h" // Duda

#include "Reloj.h" // -> Muestra la hora.
#include "Asignar.h"
#include "Recibir.h"

void Sad()
{
    system("cls");
    void TiempoActual(); // -> Me muestra la fecha y hora actual.

    int opci;
    cout<<"         Servicio a Domicilio "<<endl<<endl;

    cout <<"        1. Asignar un pedido"<<endl; // listo
    cout <<"        2. Recibir un pedido"<<endl; // en proceso
    cout <<"        3. Historial de pedido"<<endl;
    cout <<"        4. Home"<<endl;
    cout <<"        5. Salir"<<endl;
    cin >> opci;

    switch (opci)
    {
    case 1:
        {
            Asignar();
            break;
        }
    case 2:
        {
            Recibir();
            break;
        }

    // Falta el 3.
    case 4:
        {
            Home();
            break;
        }   
    case 5:
        {   
            break;
        }
        
    default:
        {
            cout<<"Ingrese una opcion valida"<<endl;
            break;
        }
      
    }
    
}



