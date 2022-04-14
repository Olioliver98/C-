#include <iostream>
#include <windows.h> // Para usar Sleep.
#include <time.h> // -> libreria para la hora y fecha.
#include <cstdlib>
#include "Home.h" // -> Pantalla home.

#include "Caja.h" // -> Muestra la factura.
#include "Reloj.h" // -> Muestra la hora.
#include "SAD.h"

using namespace std;


// Asignacion de pedido
void Asignar()
{
    system("cls");
    TiempoActual(); // Muestra la fecha y hora al principio de la ejecucion.

    int pedido, salida, conserje;
    cout<<"Ingrese el numero de pedido"<<endl;
    cin >> pedido;

    cout << "Ingrese la Hora de salida" <<endl;
    cin >> salida;

    cout<<"Ingrese nombre de conserje a asignar"<<endl;
    cin >> conserje;

    Sleep(2000); // Espera 2 segundos antes de mostrar el mensaje.
    cout <<"Pedido asigado exitosamente!"<<endl; // Muestra el mensaje.
    system("pause");
    cout<< endl << endl;

    Sad();
    
}
