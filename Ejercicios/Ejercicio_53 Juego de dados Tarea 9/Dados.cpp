#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int Dado1 = 0, Dado2 = 0, Lanzamiento, Resultado, seguir;

    cout << "intrucciones"<<endl;
    cout << "Programa que lanza dos dados y generan dos numero al azar de manera aleatoria"<<endl;
    cout << "Si el jugado obtiene 4, 6 o 8 gana" <<endl; 
    cout << "De lo contrario si se obtiene 2 o 12 se pierde "<<endl;


    system("cls");
    cout<<"Desea iniciar una partida?"<<endl;
    cout <<"1 --> Continuar" <<endl;  
    cout <<"2 --> Salir" <<endl;
    cin>> Lanzamiento;

    do
    {
        system("cls");
        system("pause");
        if (Lanzamiento == 1)
        {
            srand(time(NULL));

            Dado1 = rand() % 6 + 1;
            Dado2 = rand() % 6 + 1; 
            cout<<endl;

            cout << "Dado 1 = "<< Dado1<< endl;
            cout << "Dado 2 = "<< Dado2<< endl;
            Resultado = Dado1 + Dado2;
            cout<<endl;
            
            cout <<"El resultado es : " << Resultado << endl;

            if (Resultado == 4 || Resultado == 6 || Resultado == 8)
            {
                cout <<"EL JUGADOR GANA, LA CASA PIERDE!" <<endl;
            }
            else
            {
                cout << "La casa gana, el jugador pierde!"<<endl;
            }

            cout <<"¿Desea continuar jugando?"<<endl;
            cout <<"1 --> Continuar" <<endl;  
            cout <<"2 --> Salir" <<endl;
            cin >> seguir;

            if (seguir == 2)
            {
                break;
            }

        }
        else
        {
            break;
        }
        
                
    } while (seguir == 1);

    return 0;
}
