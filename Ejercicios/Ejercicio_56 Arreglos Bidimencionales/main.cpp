#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Primero fila y luego Columna

    string nombres[3][2];

    nombres[0][0] = "Juan";
    nombres[0][1] = "Perez";
    
    nombres[1][0] = "Maria";
    nombres[1][1] = "Martinez";

    nombres[2][0] = "Pero";
    nombres[2][1] = "Jimenez";

    // Para no hacer un Cout a cada arrelgo

    // Hay 2 formas de mostrar el arreglo bidimencional
    // forma 1
    for (int i = 0; i < 3; i++)
    {
        cout<< nombres[i][0] << " " << nombres[i][1] <<endl;
    }
    

    //Forma 2

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 2; j++)
        {
            cout<< nombres[i][j];
        }
        cout << endl;
    }

    return 0;
}
