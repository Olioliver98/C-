#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

int main(int argc, char const *argv[])
{
    //Se declaran sran para generar numeros aleatorios
    srand(time(NULL));

    int suma = 0;

    //asignacion de matriz
    int numero[5][5] =
    {
        //Numeros aleatorios
        {rand() % 10 + 50, rand() % 10 + 60, rand() % 10 + 60, rand() % 10 + 60, rand() % 10 + 60},
        {rand() % 10 + 50, rand() % 10 + 60, rand() % 10 + 60, rand() % 10 + 60, rand() % 10 + 60},
        {rand() % 10 + 50, rand() % 10 + 60, rand() % 10 + 60, rand() % 10 + 60, rand() % 10 + 60},
        {rand() % 10 + 50, rand() % 10 + 60, rand() % 10 + 60, rand() % 10 + 60, rand() % 10 + 60},
        {rand() % 10 + 50, rand() % 10 + 60, rand() % 10 + 60, rand() % 10 + 60, rand() % 10 + 60}
        
    };

    //Imprimir
    for (int i = 0; i < 5; i++) // Fila
    {
        for (int a = 0; a < 5; a++) //Columna
        {
            cout <<numero[i][a]<< " ";
        }
        cout<<endl;
    }
    
    
    //Sumar
    for (int i = 0; i <5; i++)
    {
        for (int a = 0; a < 5; a++)
        {
            suma += numero[i][a];
        }
        
    }
    
    cout<<endl<<endl;
    cout<< "Total Suma: "<< suma;
    return 0;
}
