//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int i, numero, positivos = 0, negativos = 0, cero = 0;

    for(i = 0; i < 10; i++){
        cout << "Por favor ingrese un numero: " << endl;
        cin >> numero;
        if(numero > 0){
            positivos = positivos +1;
        }else{
            if(numero == 0){
            cero = cero + 1;
            }else{
            negativos = negativos +1;
            };
        };
    };

        cout << "Positivos: " << positivos << endl;
        cout << "Cero: " << cero << endl;
        cout << "Negativos: " << negativos << endl;



	return 0;
}
