#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  
  //Informacion del programa.
  
  cout <<"Este programa realizara las operaciones aritmeticas basicas tomando 2 numeros"<<endl;
  cout <<"escogidos por el usuarios y procesandolos para dar los resultado esperados" <<endl;
  
  
    // Se declaran las variables
    int A = 0, B = 0, Suma= 0, Resta= 0, Multip= 0, division= 0;

    //Se pide al usuario que ingrese los datos.

    cout << "Ingrese el primero numero deseado" <<endl;
    cin >> A; 
    cout <<endl;

    cout << "Ingrese el segundo numero deseado" <<endl;
    cin >> B;
    cout << endl;

    //Procesamiento de los datos
    Suma = A + B;
    Resta = A - B;
    Multip = A * B;
    division = A / B;

    //Se imprime en pantalla los datos
    
    cout << "La suma es: " << Suma <<endl;
    cout << "La resta es: " << Resta <<endl;
    cout << "La multiplicacion es: " << Multip <<endl;
    cout << "La division es: " << division << endl;
    cout << "\nFin del programa...";

    return 0;
}
