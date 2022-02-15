#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int opcion = 0;    

    while (true)
    {
        cout<<"**********";
        cout<<"   MENU   ";
        cout<<"**********";
        cout<<endl;

        cout<<"1 - Cafe y Granita"<<endl;
        cout<<"2 - Reposteria"<<endl;
        cout<<"0 - Salir"<<endl;
        
        cout<<"Inrese una opcion del menu"<<endl;
        cin>>opcion;

        if (opcion == 1)
        {
            system("cls");
            cout<<"Estas en el meu de Cafes y Granitas"<<endl;
            system("pause");
        }
        if (opcion == 2)
        {
         
            system("cls");
            cout<<"Estas en el menu de Reposteria "<<endl;
            system("pause");
        }
        if (opcion == 0)
        {
            break;
        }
        
    }
    
    cout<<endl;
    cout<<"Saliste del sistema!";



    return 0;
}
