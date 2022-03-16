#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero = 0;

    //Es la funcion que inicializa o declara el numero al azar o random.
    srand(time(NULL));

    for (int i = 0; i < 20; i++)
    {
        // Sirve para generar un numero entre 1 y 10
         numero = rand() % 10 + 1;

        //Muestra el numero generado al azar.
        cout<< "Numero al azar: " << numero;
        cout<<endl;
    }

    return 0;
}


/*Para mostrar un segundo numero al azar.
    numero = rand() % 10 + 1; // ---> se debe volver a escribir la linea de comandos.
    cout<<"Segundo numero al azar: " << numero; // --> se debe volver a imprir en pantalla.
    */