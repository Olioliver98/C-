#include <iostream>
using namespace std;

double subtotal;
string ListaProducto;
void AgregarProducto(string descripcion, int cantidad, double precio)
{

    ListaProducto = ListaProducto + descripcion + "\n";
    subtotal = subtotal + (cantidad * precio);
    

}   

void ImprimirFactura()
{
    system("cls");
    cout<<"*********"<<endl;
    cout<<" FACTURA "<<endl;
    cout<<"*********"<<endl;
    cout<<endl;

    cout<<"Productos:  "<<endl;
    cout<< ListaProducto;

    cout<<endl;

    cout<<"Subtotal: "<< subtotal;
    cout<<endl <<endl;

    system("pause");

}   
