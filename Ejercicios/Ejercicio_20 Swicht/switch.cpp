#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;

    cout<<"Ingrse una opcion"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 1 :
        
        cout<<"Escogiste la opcion 1"<<endl;
        break;
    
    case 2 :
        cout<<"Escogiste la opcion 2"<<endl; 
    break;

    case 3 :
        cout<<"Escogiste la opcion 3"<<endl; 
    break;

    default:

        cout<<"Ingrese una opcion entre 1 y 3"<<endl;        
        break;
    }
    



    return 0;
}
