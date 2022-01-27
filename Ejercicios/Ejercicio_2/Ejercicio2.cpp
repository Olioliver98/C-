#include <iostream>

using namespace std;

int main() {

    // Se declara la variable en tipo caracter
    string name;
    
    //Muestra en pantalla una peticion de nombre
    cout <<"ingrese su nombre"<<endl; 

    // Se almacena la variable
    cin >> name;

    //Se muestra la variable junto con un salto de linea y el mennsaje Fin del programa.
    cout <<"Su nombre es: " << name <<endl << "Fin del programa" <<endl;


    return 0;
}