#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // declaracion de arrelo unidimencional
    int numeros[5];

    /*int indice = 3;
    numeros[indice] = 50;

    cout << numeros[indice] <<endl; */
 

//asinacion de valores al arreglo
for (int i = 0; i < 5; i++)
    {
        numeros[i] = i;
    }
     
for ( int i = 0; i < 5; i++)
    {
        cout << numeros[i] <<endl;
    }


    //Lectura de arreglo
    

    return 0;
}
