#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Declaramos las variables 
    double subtotal = 0, total = 0, Impuesto = 0.15, calculo_descuento = 0, calculo_impuesto = 0;
    int descuento = 0, factexent = 0;


    //Pedimos al usuario que ingrese los datos
    cout<< "Ingrese el subtotal de la factura:  ";
    cin>> subtotal;
    cout<<endl;

    cout<<"Ingrese el descuento (0, 10, 20):  ";
    cin>> descuento;

    cout<<"Es una factura exenta? S/N";
    cin>> factexent;

    if (factexent == 's' || factexent == 'S'){

        cout<< "El total de la factura es: " <<subtotal;

        if(factexent == 'n' || factexent == 'N'){

            calculo_descuento = (subtotal * descuento) / 100;
            calculo_impuesto = (subtotal - calculo_descuento) * 0.15;
            total = subtotal - calculo_descuento + calculo_impuesto;

        }

    }

    cout << endl;
    cout << "Total a pagar es:  " << total;
    
    return 0;
}
