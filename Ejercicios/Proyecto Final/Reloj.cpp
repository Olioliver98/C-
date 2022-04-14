#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

//Muestra la Fecha y Hora actual del sistema
void TiempoActual()
{
    system("cls");
    time_t TiempoActual;
    time(&TiempoActual);
    cout << "La Fecha y Hora actual es: " <<(ctime(&TiempoActual))<<endl;
}