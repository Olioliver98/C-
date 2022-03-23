#include <iostream>
#include <math.h>
#include "calculo.h"

using namespace std;

int raizcuadrada (double a);

int main(int argc, char const *argv[])
{
    system("cls");
    system("color 3");
    cout <<"_____________________________________________________________"<<endl;
    cout <<"                                                         "<<endl;
    cout <<" Prrograma que calcula la raiz cuadrada de un numero dado"<<endl;
    cout <<"                                                         "<<endl;
    cout <<"______________________________________________________________"<<endl;
    

    double a;
    cout<<"\nIngrese el numeo deseado"<<endl;
    cin >> a;

    cout << "\nLa raiz cuadrada de "<< a <<" es "<< sqrt(a);

    return 0;
}
