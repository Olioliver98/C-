#include <iostream>
using namespace std;

int NumeroSecreto = 7;

// Una funcion recursiva es aquella que se ivoca a si misma. // 

void AdivinarNumeroSecreto (int MiNumero)
{
    if (MiNumero == NumeroSecreto)
    {
        cout <<" Adivinaste! "<<endl;
    }
    else
    {
        int OtroNumero = 0;
        cout<<"Intento Fallido con: "<<MiNumero <<endl;; 
        cout<<"Ingrese otro numero"<<endl;
        cin >> OtroNumero;
        AdivinarNumeroSecreto(OtroNumero);
    }
  

}


int main(int argc, char const *argv[])
{
    AdivinarNumeroSecreto(5);
    return 0;
}
