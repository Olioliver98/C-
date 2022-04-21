#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{/*
    // Primero fila y luego Columna

    string nombres[3][2];

    nombres[0][0] = "Juan";
    nombres[0][1] = "Perez";
    
    nombres[1][0] = "Maria";
    nombres[1][1] = "Martinez";

    nombres[2][0] = "Pero";
    nombres[2][1] = "Jimenez";*/


    //Otra forma de inicializarlo
    int Filas = 3;
    int Columnas = 2;


    string nombres[Filas][Columnas] =
    {
        {"Juan", "Perez"},
        {"Maria", "Martinez"},
        {"Pabo", "Hernandez"}
    };


    // Mostrar arreglos
    for (int i = 0; i < Filas; i++)
    {
        for (int j = 0; i < Columnas; j++)
        {
            cout << nombres[i][j] << " ";
        }
    }

    return 0;
}
