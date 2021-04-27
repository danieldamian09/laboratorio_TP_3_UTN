//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main()
{

    int num, i, primero_par, segundo_primo, ubicacion_par, ubicacion_primo;
    int bandera = 0;

    for(i = 1; i <= 7; i++)
    {
        cout << "Por favor ingrese un numero: " << endl;
        cin >> num;


        if(num % 2 == 0 && bandera == 0)
        {
            primero_par = num;
            ubicacion_par = i;
            bandera = 1;
        }
        else
        {
            if(num % 3 != 0 && num % 2 != 0)
            {
                segundo_primo = num;
                ubicacion_primo = i;
            }
        }

    }

    cout << endl;
    cout << "El primer numero par es: " << primero_par << " y la posicion es: " << ubicacion_par << endl;
    cout << "El ultimo numero primo es: " << segundo_primo << " y la posicion es: " << ubicacion_primo << endl;

    return 0;
}
