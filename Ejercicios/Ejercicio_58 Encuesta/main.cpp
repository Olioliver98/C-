#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string alumos[3];
    string Encuesta[3][2] =
    {
        {"Llevara clases el siguiente periodo?", "" },
        {"Matriculara L2", "" },
        {"Matriculara L2 con Billy?", "" }
    };

    int respuestas[3] = {0,0, 0};
    cout << "Conteste la encuesta con S o N"<<endl <<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Ingrese su nombre";
        cin >> alumos[i];
        cout<<endl;

        for (int j = 0; j < 3; j++)
        {
            cout << Encuesta[j][0] << ": ";
            cin >> Encuesta[j][1];

            if (Encuesta[j][1] == "s") 
            {
                respuestas[j]++;
            }
            
        }
        cout <<endl;
    }
    

    cout<<"Resumen"<<endl;

    cout<<"Respuesta Pregunta 1" <<respuestas[0]<<endl;
    cout<<"Respuesta Pregunta 2" <<respuestas[1]<<endl;
    cout<<"Respuesta Pregunta 3" <<respuestas[2]<<endl;
    
    return 0;
}
    