#include <iostream>
using namespace std;

extern void productos(int opcion);

void menu()
{
 int opciones;

    while (true)
    {
        system("cls");

        cout<<"********";
        cout<<"  MENU  ";
        cout<<"********";
        cout<<"\n";
        cout<<"\n";
        cout<<"\n";

        cout<<"1 - Bebidas calientes "<< endl;
        cout<<"2 - Bebidas frias"<< endl;;
        cout<<"3 - Reposteria"<< endl;;
        cout<<"0 - Salir "<< endl;;

        cin >> opciones;

        if (opciones == 0)
        {
            break;
        }

        productos(opciones);

    }
}    