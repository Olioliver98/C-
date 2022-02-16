#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
//Se declaran ambas variables con un valor inicial en 0
    int pares = 0, pares2 = 0;

//Procedimiento para los nueros pares
   cout<<"Procedimiento de numeros Pares "<<endl;
   for(int i = 1; i <= 10; i++)
    {
        
        if (i % 2 == 0 )
        {
            pares = pares + i;
        }

        cout<< i << " ";

    }
    
    cout<<endl;
    cout<<endl;

//Procedimiento para los numeros impares
   
    cout<<"Procedimiento de numeros Impares "<<endl;
    for (int A = 1; A <= 10; A++)
    {
        if (A % 2 == 1){

            pares2 = pares2 + A;

        }

        cout<< A <<" ";

    }
    
    cout<<endl;
    cout<<endl;

    //Resultados de los procedimiento
    cout<<"Total Pares: "<< pares <<endl;
    cout<<"Total Impares: "<< pares2 <<endl;

    return 0;
}
