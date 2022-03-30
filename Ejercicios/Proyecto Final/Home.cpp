#include <iostream>
#include <cstdlib>
#include "facturacion.h"

using namespace std;

int main(int argc, char const *argv[])
{
    // Declaracion de varables

    int home;

    // Menu principal
    system("cls"); 
    system("color 9"); // Cambia el color de fuente a cian
    cout<< "____________________________________" <<endl;
    cout<< "                                    " <<endl;
    cout<< "             XION POS               " <<endl;
    cout<< "____________________________________" <<endl <<endl;
    cout<< "Bienvenidos" <<endl << "Iniciando..."<<endl;
    system("pause"); // Pausa el programa

    // Si no se realiza un system("pause") el color de fuente no cambia a blanco

    // Menu Home
    system("color 7"); //  Cambia el color de letra a blanco
    system("cls");
    cout <<"         Seleccione una opcion        "<<endl;
    cout <<"                                      "<<endl;
    cout <<" 1. Caja                              "<<endl;
    cout <<" 2. Facturacion                       "<<endl;
    cout <<" 3. Servicio a domicilio              "<<endl;
    cout <<" 4. Reservacion                       "<<endl;
    cout <<" 5. Opciones adicionales              "<<endl;
    cin >> home;


    //Seleccion de proceso 
    switch (home)
    {
        case 1:
            

        case 2:
        {
            facturacion();
        }
                
        break;
    
    default:
        cout<<"Ingrese una opcion valida";
        break;
    }
    

    return 0;
}

