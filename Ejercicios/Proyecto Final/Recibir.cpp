#include <iostream>
#include <windows.h> // Para usar Sleep.
#include <time.h> // -> libreria para la hora y fecha.
#include <cstdlib>
#include "Home.h" // -> Pantalla home.

#include "Caja.h" // -> Muestra la factura.
#include "Reloj.h" // -> Muestra la hora.
#include "SAD.h"

using namespace std;


// Recibir Pedido
void Recibir()
{

    system("cls");
    int dame;

    cout<< "Ingrese numero de pedido"<<endl;
    cin >> dame;

    Sleep(2000); // Espera 2 segundos antes de mostrar el mensaje.
    cout <<"Pedido recibido exitosamente!"<<endl; // Muestra el mensaje.
    system("pause");
    cout<< endl << endl;

    Sad();
}