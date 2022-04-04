#include <iostream>
#include <cstdlib>
#include "Lista-d-productos.h"


using namespace std;


//(void AgregarProducto) Sirve para agregar un producto a la factura.
void AnexarProducto (string descripcion, int cantidad, double precio);

void Productos(int opcion)
{

    system("cls");

    int SeleccionP = 0;

    switch (opcion)
    {

        //Se muesra un listado de los productos en inventario.
        case 1:
        {
                cout <<"    PPRODUCTOS EN INVENTARIO    "<<endl <<endl;

                cout<<"1.  Acetaminofen 500mg x 100 tabs"<<endl;
                cout<<"2.  Paracetamol 750mg x 20 tabs" << endl;
                cout<<"3.  Ibuprofeno 600mg x 60 tabs " << endl;
                cout<<"4.  Irbersartan 300mg x 30 caps" << endl;
                cout<<"5.  Irbersartan 150mg x 30 caps" << endl;
                cout<<"6.  Maalox Plus x 180 ml" << endl;
                cout<<"7.  Bio Tos x 170 ml " << endl;
                cout<<"8.  Bios Tos pediatrico x 120 ml " << endl;
                cout<<"9.  Zaldiar x 50 tabs" << endl;
                cout<<"10. Pedialyte 2 Pack Manzana N° 60"<<endl;

                cout << "Ingrese una opcion: "<<endl;
                cin >> SeleccionP;

                //Se anexa el producto deseado por el usuario a la factura 
                switch (SeleccionP)
                {
                        case 1: 
                                AnexarProducto("1 Acetaminofen 500mg x 100 tabs L. 173", 1, 137);
                                break;
                        
                        case 2: 
                                AnexarProducto("1. Paracetamol 750mg x 20 tabs L. 216.27", 1, 216.27 );
                                break;
                        

                        case 3:
                                AnexarProducto("1. Ibuprofeno 600mg x 60 tabs L. 387.78 ", 1, 387.78);
                                break;
                        default:

                        case 4:
                                AnexarProducto("1. Irbersartan 300mg x 30 caps L. 380.61 ", 1, 381.61);
                                break;

                        case 5:
                                AnexarProducto("1. Irbersartan 150mg x 30 caps L. 319.56", 1, 319.56 );
                                break;

                        case 6:
                                AnexarProducto("1. Maalox Plus x 180 ml L 163.02", 1, 163.02 );
                                break;


                        case 7:
                                AnexarProducto("1. Bio Tos x 170 ml L. 448.72 ", 1, 448.72);
                                break;

                        case 8:
                                AnexarProducto("1. Bios Tos pediatrico x 120 ml L. 395.89", 1, 395.89);
                                break;

                        case 9:
                                cout<<"Ha seleccionado un medicamento controlado, favor revisar que la receta cumpla con los requisitos"<<endl;
                                AnexarProducto("1. Zaldiar x 50 tabs L. 1857.12", 1, 1857.12);
                                break;

                        case 10: 
                                AnexarProducto("1. Pedialyte 2 Pack Manzana N° 60 L. 115 ", 1, 115);
                                break;
                                
                }
                
                default:
                { 
                        cout<<" Seleccione una opcion valida"<<endl; 
                        return;
                        break;
                }



                cout<< endl;
                cout<< "Producto agregado" <<endl <<endl;
                system("pause");

            break;
        }
    }


}