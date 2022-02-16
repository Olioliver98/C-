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

        if(opcion == 0)
        {
         break;
        }


        switch (opcion)
        {
            case 1 :{

            system("cls");
            cout<<"Estas en el meu de Cafes y Granitas"<<endl;
            system("pause");
            break;
            }
            

            case 2:{

            system("cls");
            cout<<"Estas en el menu de Reposteria "<<endl;
            system("pause");
            break;
            }
        
            default:{

            cout<<"Ingrese una de las opciones validas (0, 1, 2)"<<endl;
            system("pause");

            break;
            }
            
        }

    }
    cout<<endl;
    cout<<"Saliste del sistema!";

    return 0;
}