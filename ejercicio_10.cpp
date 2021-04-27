//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main()
{

    int num, numMax = 0, numMin = 0, i, comparador =0;

    for (i = 0; i < 10; i++)
    {
        cout << "Por favor ingrese un numero: " << endl;
        cin >> num;

        if(i == 0)
        {
            numMax = num;
            numMin = num;
        }
        else
        {
            if(num > numMax)
            {
                numMax = num;
            }
            else
            {
                if(num < numMin)
                {
                    numMin = num;
                }
            }
        }

    }

    cout << "El numero mayor es: " << numMax << endl;
    cout << "El menor numero es: " << numMin << endl;


    return 0;
}
