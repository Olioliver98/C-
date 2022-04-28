#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Home.h"
#include "facturacion.h" // Duda

#include "Reloj.h" // -> Muestra la hora.
#include "OpciSad.h"

void Sad()
{
    system("cls");
    void TiempoActual(); // -> Me muestra la fecha y hora actual.

    int opci;
    cout<<"         Servicio a Domicilio "<<endl<<endl;

    cout <<"        1. Asignar un pedido"<<endl; // listo
    cout <<"        2. Recibir un pedido"<<endl; // en proceso
    cout <<"        3. Historial"<<endl;
    cout <<"        4. Home"<<endl;
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
   
    case 3:
        {
            History();
            break;
        }   
    case 4:
        {   
            Home();
            break;
        }
        
    default:
        {
            cout<<"Ingrese una opcion valida"<<endl;
            break;
        }
      
    }
    
}



