#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Declaramos las variables 
    double subtotal, total = 0, Impuesto = 0.15, calculo_descuento = 0, calculo_impuesto = 0;
    int descuento = 0;
    string factexent;

    //Pedimos al usuario que ingrese los datos
    cout<< "Ingrese el subtotal de la factura:  ";
    cin>> subtotal;
    cout<<endl;
  
    cout<<"Ingrese el descuento (0, 10, 20):  ";
    cin>> descuento;

    cout<<"Es una factura exenta? S / N  ";
    cin>> factexent;

    // Procesan los datos
    if(factexent == "s" || factexent == "S" ){

        //Muestra el resultado
        cout<< subtotal;

    }
        if (factexent == "n" || factexent == "N"){

                calculo_descuento = (subtotal * descuento) / 100;
                calculo_impuesto = (subtotal - calculo_descuento) * 0.15;
                total = subtotal - calculo_descuento + calculo_impuesto;

                // Muestra el resultado
                cout<<endl;
                cout<< "Total a pagar es:  " << total;
        }
    

    return 0;
 }
    
