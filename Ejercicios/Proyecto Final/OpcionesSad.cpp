#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Home.h"
#include "facturacion.h" // Duda
#include "Productos.h"

#include "Reloj.h" // -> Muestra la hora.
#include "SAD.h"
#include "Caja.h"


// Se declaran las variables
int dame, numerodepedido, salida, conserje, compara, volver, horarecibe, Cobrar;

//Asignacion de pedidos
void Asignar()
{
    
    system("cls");
    TiempoActual(); // Muestra la fecha y hora al principio de la ejecucion.

    cout<<"Ingrese el numero de pedido"<<endl;
    cin >> dame;
    
    cout << "Ingrese la Hora de salida" <<endl;
    cin >> salida;

    cout<<"Ingrese el numero de id del conserje a asignar"<<endl;
    cin >> conserje;

    Sleep(2000); // Espera 2 segundos antes de mostrar el mensaje.
    cout <<"Pedido asigado exitosamente!"<<endl; // Muestra el mensaje.
    cout<< endl;

    cout<<"Dsesea volver al menu de Servicio A Domicilio 1. Si 2. No?" <<endl;
    cin>>volver;

     if (volver == 1)
        {
            Sad();
        }
    if (volver == 2)
        {
            Home();
        }

    
}


// Recepcion de pedidos
void Recibir()
{
    system("cls");
    TiempoActual(); // Muestra la fecha y hora al principio de la ejecucion.

    cout<< "Numero de pedido"<<endl;
    cin >> numerodepedido;

    cout<<"Ingrese la hora de recepcion"<<endl;
    cin>> horarecibe;
    
    if (numerodepedido == dame)
    {
        Sleep(2000); // Espera 2 segundos antes de mostrar el mensaje.
        cout <<"Pedido recibido exitosamente!"<<endl; // Muestra el mensaje.
        system("pause");
        cout<< endl << endl;

        Sad();
    }
    if (numerodepedido != dame)
    {
        cout<<"Pedido inexistente, vuelva a intentar" <<endl;
    }
    
}

//Historial de pedidos
void History()
{
    system("cls");

    // Declara las variables
    int mostrar;

    cout<<"Ingrese numero de pedido "<< endl;
    cin>>compara;
    if (compara == dame)
    {
        cout<<"Numero de pedido: "<< dame <<endl;;
        cout<<"Conserje asignado: "<< conserje <<endl;
        cout<<"Hora de salida: "<< salida <<endl;
        cout<<"Hora de recepcion: "<< horarecibe << endl;
        
        cout<<"Dsesea volver al menu de Servicio A Domicilio 1. Si 2. No?" <<endl;
        cin>>volver;

        if (volver == 1)
        {
            Sad();
        }

        if (volver == 2)
        {
            Home();
        }
        
    }
}