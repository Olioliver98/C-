#include <iostream>
using namespace std;


int sumar(){

    return 5 + 7;
}

string nombrecompleto(){
string nombre = "Juan";
string apellido = "Perez";

return nombre + "  " + apellido;

}


int main(int argc, char const *argv[])
{
    
    int resultado = sumar();
    cout<<resultado<<endl;

    string nombreyapelliido = nombrecompleto();
    cout<<nombreyapelliido;

    return 0;
}
