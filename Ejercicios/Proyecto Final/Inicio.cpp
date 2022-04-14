#include <iostream>
#include <cstdlib>

#include "Home.h"

using namespace std;

int main(int argc, char const *argv[])
{

    int Start;

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

    cout<<"DESEA INICIAR EL PROGRAMA?"<<endl;
    cout<<" 1. Si   2. No"<<endl;
    cin>> Start;

    switch (Start)
    {
    case 1:
            Home();
        break;
    
    default:
            cout<<" Xion is turning off"<<endl;
        break;
    }

    
}  