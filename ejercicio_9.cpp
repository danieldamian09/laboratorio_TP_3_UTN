//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int num, numMax = 0, posc = 0, i;

    for(i = 1; i <= 10; i++){
        cout << "Por favor ingrese un numero: " << endl;
        cin >> num;

        if(num > numMax){
            numMax = num;
            posc = i;
        }
    }

    cout << "El numero maximo es: " << numMax << endl;
    cout << "La posicion del numero es: " << posc << endl;

	return 0;
}
