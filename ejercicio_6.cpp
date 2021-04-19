//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int cantidadNumeros =0, numeros, i, contador = 0;

    cout << "Por favor ingrese la cantidad de numeros de la lista" << endl;
    cin >> cantidadNumeros;

    for(i = 0; i < cantidadNumeros; cantidadNumeros--){
        cout << "Por favor ingrese un numero:" << endl;
        cin >> numeros;
        if(numeros >= 0){
            contador = contador + 1;
        };
    };


    cout << "La cantidad de numeros positivos es: " << contador << endl;






	return 0;
}
