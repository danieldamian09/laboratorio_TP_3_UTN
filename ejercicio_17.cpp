//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int num, i, divisores;

    cout << "Por favor ingrese un numero: " << endl;
    cin >> num;
    cout << "Los divisores pares de este numero son: " << endl;

    for(i = 1 ;i <= num; i++){
        if(num%i == 0){
            divisores = i;
                if(divisores%2 == 0){
                    cout << i << endl;
                }
        }
    }


	return 0;
}
