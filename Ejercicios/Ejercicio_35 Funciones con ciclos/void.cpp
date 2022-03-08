#include <iostream>
using namespace std;

void ImprimirCaracteres(char caracter, int ciclos)
{
    for (int i = 0; i < ciclos; i++)
    {
        cout << caracter;
    }

    cout<<"\n";
}

int main(int argc, char const *argv[])
{
    
    ImprimirCaracteres ( '@', 10);
    ImprimirCaracteres ( '#', 5);
    cout << "Hola Mundo (*-*)/ "<< "\n";
    ImprimirCaracteres('*', 1000);


    return 0;
}
