#include <iostream>
using namespace std;

string nombrecompleto(string nombre, string apellido)
{
    return nombre + " " + apellido;

}

int main(int argc, char const *argv[])
{
    string primernombre = "", primerapellido = "";

    cout<< "Ingrese su primer nombre: ";
    cin>> primernombre;
    cout<< "INgrese su primer apellido: ";
    cin>> primerapellido;

    cout <<"\n";
    cout << "Su nombre completo es:  " << nombrecompleto(primernombre, primerapellido);

    return 0;
}
