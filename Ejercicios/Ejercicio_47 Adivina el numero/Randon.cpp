#include <iostream>
#include <stdlib.h> // sirve para srand y rand (la "s" es de seed (semilla))
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int NumeroSecreto = 0, MiNumero = 0;

    //Inicializa el numero randon.
    srand(time(NULL));
    
    //Genera un numero entre 1 y 10.
    NumeroSecreto = rand() % 10 + 1;

    do
    {
        cout << "Adivina el numero (1 a 10): ";
        cin>> MiNumero;

        //Pista para el jugador
        if (NumeroSecreto < MiNumero)
        {
            cout << "El numero secreto puede ser menor " <<endl;
        }
        else
        {
            if (NumeroSecreto > MiNumero)
            {
                cout << "El numero secreto puede ser mayor " <<endl;
            }

        }

    } while (MiNumero != NumeroSecreto);
    
    cout << endl << endl;
    cout << "Adivinaste! ";

    return 0;
}
