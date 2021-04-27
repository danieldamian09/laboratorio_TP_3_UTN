//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main()
{

    int num, i;
    int acum = 0;

    cout << "Por favor ingresar un numero: " << endl;
    cin >> num;

    for(i = 1; i < num; i++)
    {
        if(num % i == 0)
        {
            acum += i;
        }
    }

    if(acum == num){
        cout << "El numero: " << num << " es un numero perfecto ya que la suma de sus divisores es: " << acum << endl;
    }
    else{
        cout << "No es un numero perfecto" << endl;
    }

    return 0;
}
