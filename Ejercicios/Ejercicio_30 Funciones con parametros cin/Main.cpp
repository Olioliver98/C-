#include <iostream>
using namespace std;

int sumar(int a, int b){
    return a + b;
}

int restar(int a, int b){
    return a - b;
}

int main(int argc, char const *argv[])
{
    system ("cls");
    int numero1 = 0, numero2 = 0;

    //Suma
    cout <<"Ingrese el valor de a: ";
    cin>> numero1;
    cout <<"Ingrese el valor de b: ";
    cin>> numero2;
    
    cout <<"\n";

    cout << "La suma es: " << sumar(numero1, numero2) <<endl;
    cout << "La resta es: " << restar(numero1, numero2) <<endl;

    
    return 0;
}
