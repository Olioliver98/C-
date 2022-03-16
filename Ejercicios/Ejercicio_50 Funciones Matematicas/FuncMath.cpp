#include <iostream>
#include <math.h>
#define Pi 3.1416

using namespace std;



int main(int argc, char const *argv[])
{
    double nuemero = 0;
    double seno = 0;
    double coseno = 0;
    double tangente = 0;
 
    nuemero = 2 * Pi;
    seno = sin(nuemero); /// Se llama "Sin" a la funcion de Seno de la libreria math.h
    coseno = cos(nuemero);  /// Se llama "Cos" a la funcion de coseno de la libreria math.h
    tangente = tan(nuemero);  /// Se llama "Tan" a la funcion de Tangente de la libreria math.h

    cout <<"Numero " << nuemero << endl;
    cout <<"Seno " << seno << endl;
    cout <<"Coseno " << coseno  << endl;
    cout <<"Tangente " << tangente  << endl;

    return 0;
}
