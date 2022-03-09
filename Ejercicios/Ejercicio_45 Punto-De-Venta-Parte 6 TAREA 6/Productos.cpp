#include <iostream>
using namespace std;

extern void AgregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
    system("cls");

    int opcionProducto = 0; 

    switch (opcion)
    {
    case 1: 
        {
            //Proceso Bebidas Calientes 
            cout<<"*****************"<<endl;
            cout<<"BEBIDAS CALIENTES"<<endl;
            cout<<"*****************"<<endl;
            cout<<"1 - Capuccino 8 oz "<<endl;
            cout<<"2 - Cafe Mocha 8 oz "<<endl;
            cout<<"3 - Americano 8 oz "<<endl;

            cout << "Ingrese una opcion: "<<endl;
            cin >> opcionProducto;


            // Se hicieron cambios en el precio y estetica del menu para mayor apego y realidad en los precio.
            //Se procesa las opciones de bebidas calientes deseadas por el usuario.
            switch (opcionProducto)
            {
            case 1: 
                AgregarProducto("1. Capuccino 8 oz L. 37.00", 1, 37);
                break;

            case 2: 
                AgregarProducto("1. Cafe Mocha 8 oz L. 42.00", 1, 42);
                break;

            case 3:
                AgregarProducto("1. Americano 8 oz L. 21.00", 1, 21);
                
            default:
                {
                    cout<<"Opcion no valida";
                    return;
                    break;
                }   
            
            }

            cout<< endl;
            cout<< "Producto agregado" <<endl <<endl;
            system("pause");

            break;
        }
        

    case 2  : 
        {
            //Se procesa las opciones de bebidas frias deseadas por el usuario.
            cout<<"***************"<<endl;
            cout<<" BEBIDAS FRIAS "<<endl;
            cout<<"***************"<<endl;
            cout<<"1 - Granita de Cafe 12 oz "<<endl;
            cout<<"2 - Mochaccino Supreme 12 oz"<<endl;
            cout<<"3 - Pina Colada 12 oz"<<endl;

            cout << "Ingrese una opcion: "<<endl;
            cin >> opcionProducto;


            //Seleccion de eproductos para agregar a la factura
            switch (opcionProducto)
            {
            case 1: 
                AgregarProducto("1. Granita de Cafe 12 oz L. 42.00", 1, 42);
                break;

            case 2: 
                AgregarProducto("1. Mochaccino Supreme 12 oz L. 60.00", 1, 60);
                break;

            case 3: 
                AgregarProducto("1. Pina Colada 12 oz L. 45.00 ", 1, 45);
                break;
                
            default:
                {
                    cout<<"Opcion no valida";
                    return;
                    break;
                }   
            
            }

            cout<< endl;
            cout<< "Producto agregado" <<endl <<endl;
            system("pause");

            break;
        }
    
        

    case 3: 
        {
           //Se procesa las opciones de reposteria deseadas por el usuario.
            cout<<"***************"<<endl;
            cout<<" REPOSTERIA "<<endl;
            cout<<"***************"<<endl;
            cout<<"1 - Chocolate Caramel Cake "<<endl;
            cout<<"2 - New York Style Cheescake"<<endl;
            cout<<"3 - Hersheys Chocolate Chip Cookie"<<endl;

            cout << "Ingrese una opcion: "<<endl;
            cin >> opcionProducto;


            //Seleccion de eproductos para agregar a la factura
            switch (opcionProducto)
            {
            case 1: 
                AgregarProducto("1. Chocolate Caramel Cake L. 119.00", 1, 119);
                break;

            case 2: 
                AgregarProducto("1. New York Style Cheescake L. 99.00", 1, 99);
                break;

            case 3: 
                AgregarProducto("1. Hersheys Chocolate Chip Cookie L. 149.00", 1, 149);
                break;
                
            default:
                {
                    cout<<"Opcion no valida";
                    return;
                    break;
                }   
            
            }

            cout<< endl;
            cout<< "Producto agregado" <<endl <<endl;
            system("pause");

            break;
        }
    
    default:
        break;
    }


}