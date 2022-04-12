#include <iostream>
#include "Factura.h"
using namespace std;

double subtotal, Total, impuesto = 0.15;
string ListaProducto;

void AgregarProducto(string descripcion, int cantidad, double precio)
{

    ListaProducto = ListaProducto + descripcion + "\n";
    subtotal = subtotal + (cantidad * precio);
    

}   

void ImprimirFactura()
{
    system("cls");
    cout<<"**************************************************"<<endl;
    cout<<"                     FACTURA                      "<<endl;
    cout<<"**************************************************"<<endl;
    cout<<endl;

    cout<<"Productos:  "<<endl;
    cout<< ListaProducto;

    cout<<endl;

    cout<<"Subtotal: L. "<< subtotal;
    cout<<endl <<endl;

    //***************************************************************************************
     
    /* Se decalara la variable ipuesto y se leasigna el valor de 0.15 lo que es igual al 15% 
       el impuesto por ley. */
    
    impuesto = subtotal * impuesto;
    cout << "Impuesto: L. "<< impuesto <<endl;
    cout<< endl;

    /* Se declara la variable Total y no se le asigna valor, en este se almacenara el resultado de la 
       suma entre impuesto y subtotal, dando como resultado el monto neto a pagar ( Total a pagar) */

    Total = impuesto + subtotal;

    cout << "Total a pagar: L. "<< Total <<endl;
    cout<< endl;


    // Notas al final de la factura
    cout<<"**************************************************"<<endl;
    cout <<"    LA FACTURA ES BENEFICIO DE TODOS EXIJALA" <<endl;
    cout<< endl;

    cout <<"            GRACIS POR SU COMPRA!" <<endl;
    cout<< endl;
    cout<<"**************************************************"<<endl;
    system("pause");

}   
