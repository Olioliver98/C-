#include <iostream>
using namespace std;

extern void AgregarProducto(string descripcion, int cantidad, double precio);
void productos(int opcion)
{

    int OpcionProducto = 0;
    switch (opcion)
    {   
        case 1: 
        {
            
            cout <<" BEBIDAS CALIENTES "<<endl;
            cout <<"********************"<<endl;
            cout <<"1 - Capuccino"<<endl;
            cout <<"2 - Expresso"<<endl;
            cin>> opcion;

            switch (OpcionProducto)
            {
                case 1:
                {
                    AgregarProducto("Capiccino", 1, 40 );
                    break;
                    
                    default: 
                            cout<<"Opcion no valida";
                    break;

                } 
            }
                break;
        }


        case 2: 
        {
            cout <<" BEBIDAS FRIAS "<<endl;
            cout <<"***************"<<endl;
            system ("pause");
            break;
        }
        case 3: 
        {
            cout <<" REPOSTERIA "<<endl;
            cout <<"************"<<endl;
            system ("pause");
            break;
        }
    
        default:
            break;
    }


}