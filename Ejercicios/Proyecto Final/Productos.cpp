#include <iostream>
#include <cstdlib>
#include "facturacion.h"
#include "Productos.h"

using namespace std;


void AgregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
     system("cls");

    int OpcionProducto = 0; 

    switch (opcion)
    {
    case 1:
        {    
            system("cls");

            cout <<"    PPRODUCTOS EN INVENTARIO    "<<endl <<endl;

            cout<<"1.  Acetaminofen 500mg x 100 tabsL. 173"<<endl;
            cout<<"2.  Paracetamol 750mg x 20 tabs L. 216.27" << endl;
            cout<<"3.  Ibuprofeno 600mg x 60 tabs L. 387.78" << endl;
            cout<<"4.  Irbersartan 300mg x 30 caps L. 380.61" << endl;
            cout<<"5.  Irbersartan 150mg x 30 caps L. 319.56" << endl;
            cout<<"6.  Maalox Plus x 180 ml L 163.02" << endl;
            cout<<"7.  Bio Tos x 170 ml L. 448.72" << endl;
            cout<<"8.  Bios Tos pediatrico x 120 ml L. 395.89" << endl;
            cout<<"9.  Zaldiar x 50 tabs L. 1857.12" << endl;
            cout<<"10. Pedialyte 2 Pack Manzana #60 L. 115"<<endl;

            cout << "Ingrese una opcion: "<<endl;
            cin >> OpcionProducto;

            //Se anexa el producto deseado por el usuario a la factura

            switch (OpcionProducto)
            {
                case 1:
                        {
                            AgregarProducto("1. Acetaminofen 500mg x 100 tabs L. 173", 1, 173);
                            break;
                        }
                case 2: 
                        {
                            AgregarProducto("1. Paracetamol 750mg x 20 tabs L. 216.27", 1, 216.27 );
                            break;
                        }
                case 3:
                        {   AgregarProducto("1. Ibuprofeno 600mg x 60 tabs L. 387.78 ", 1, 387.78);
                            break;
                        }
                case 4: 
                        {
                            AgregarProducto("1. Irbersartan 300mg x 30 caps L. 380.61 ", 1, 380.61);
                            break;
                        }
                case 5: 
                        {
                            AgregarProducto("1. Irbersartan 150mg x 30 caps L. 319.56", 1, 319.56 );
                            break;
                        }
                case 6: 
                        {
                            AgregarProducto("1. Maalox Plus x 180 ml L 163.02", 1, 163.02 );
                            break;
                        }
                case 7: 
                        {
                            AgregarProducto("1. Bio Tos x 170 ml L. 448.72 ", 1, 448.72);
                            break;
                        }
                case 8: 
                        {
                            AgregarProducto("1. Bios Tos pediatrico x 120 ml L. 395.89", 1, 395.89);
                            break;
                        }
                case 9:
                        {
                            cout<<"__________________________________________________________________________________________________"<<endl<<endl;
                            cout<<"                                        ATENCION!                                                "<<endl<<endl;
                            cout<<" Ha seleccionado un medicamento controlado, favor revisar que la receta cumpla con los requisitos. "<<endl;
                            cout<<"__________________________________________________________________________________________________"<<endl;
                            AgregarProducto("1. Zaldiar x 50 tabs L. 1857.12", 1, 1857.12);
                            break;
                        }
                case 10: 
                        {
                            AgregarProducto("1. Pedialyte 2 Pack Manzana # 60 L. 115 ", 1, 115);
                            break;
                        }
                default:
                        {
                            cout<<"Opcion no valida";
                            return;
                            break;
                        }

            } // Cierra el 2do Switch

            cout<< endl;
            cout<< "Producto agregado" <<endl <<endl;
            system("pause");

            break; 

        }// Cierra Case 1

    // Tercera edad
    // Con descuento de 25% incluido
    case 2: 
        {
            system("cls");

            cout <<"    PPRODUCTOS EN INVENTARIO    "<<endl <<endl;

            cout<<"Todos los precios tienen un 25 porciento de descuento ya incluido"<<endl << endl;
            cout<<"1.  Acetaminofen 500mg x 100 tabsL. 129.75"<<endl;
            cout<<"2.  Paracetamol 750mg x 20 tabs L. 162.20" << endl;
            cout<<"3.  Ibuprofeno 600mg x 60 tabs L. 290.83" << endl;
            cout<<"4.  Irbersartan 300mg x 30 caps L. 285.45" << endl;
            cout<<"5.  Irbersartan 150mg x 30 caps L. 239.67" << endl;
            cout<<"6.  Maalox Plus x 180 ml L 122.65" << endl;
            cout<<"7.  Bio Tos x 170 ml L. 336.54" << endl;
            cout<<"8.  Bios Tos pediatrico x 120 ml L. 296.91 " << endl;
            cout<<"9.  Zaldiar x 50 tabs L. 1382.94" << endl;
            cout<<"10. Pedialyte 2 Pack Manzana #60 L. 86.25"<<endl;

            cout << "Ingrese una opcion: "<<endl;
            cin >> OpcionProducto;

            //Se anexa el producto deseado por el usuario a la factura

            switch (OpcionProducto)
            {
                case 1:
                        {
                            AgregarProducto("1. Acetaminofen 500mg x 100 tabs L. 129.75", 1, 129.75);
                            break;
                        }
                case 2: 
                        {
                            AgregarProducto("1. Paracetamol 750mg x 20 tabs L. 162.20", 1, 162.20 );
                            break;
                        }
                case 3:
                        {   AgregarProducto("1. Ibuprofeno 600mg x 60 tabs L. 290.83 ", 1, 290.83);
                            break;
                        }
                case 4: 
                        {
                            AgregarProducto("1. Irbersartan 300mg x 30 caps L. 285.45 ", 1, 285.45);
                            break;
                        }
                case 5: 
                        {
                            AgregarProducto("1. Irbersartan 150mg x 30 caps L. 239.67", 1, 239.67);
                            break;
                        }
                case 6: 
                        {
                            AgregarProducto("1. Maalox Plus x 180 ml L. 122.65 ", 1, 122.65);
                            break;
                        }
                case 7: 
                        {
                            AgregarProducto("1. Bio Tos x 170 ml L. 336.54", 1, 336.54);
                            break;
                        }
                case 8: 
                        {
                            AgregarProducto("1. Bios Tos pediatrico x 120 ml L. 296.91", 1, 296.91);
                            break;
                        }
                case 9:
                        {
                            cout<<"__________________________________________________________________________________________________"<<endl<<endl;
                            cout<<"                                        ATENCION!                                                "<<endl<<endl;
                            cout<<" Ha seleccionado un medicamento controlado, favor revisar que la receta cumpla con los requisitos. "<<endl;
                            cout<<"__________________________________________________________________________________________________"<<endl;
                            AgregarProducto("1. Zaldiar x 50 tabs L. 1382.94", 1, 1382.94);
                            break;
                        }
                case 10: 
                        {
                            AgregarProducto("1. Pedialyte 2 Pack Manzana # 60 L. 86.25", 1, 86.25);
                            break;
                        }
                default:
                        {
                            cout<<"Opcion no valida";
                            return;
                            break;
                        }

            } // Cierra el 2do Switch

            cout<< endl;
            cout<< "Producto agregado" <<endl <<endl;
            system("pause");

            break; 

        } // Cierra case 2

    } //Cierra el 1er Switch

} //Cierra void