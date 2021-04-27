//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int num, i;

    cout << "Por favor ingrese un numero: " << endl;
    cin >> num;
    cout << "Los numeros divisores son: " << endl;


    for(i =1; i <= num; i++){
        if(num%i == 0){
            cout << i << endl;
        }
    }


	return 0;
}
