//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int num, i;
    int cont = 0;

    cout << "Por favor ingresar un numero: " << endl;
    cin >> num;

    for(i = 1; i <= num; i++){
        if(num % i == 0){
            cont++;
        }
    }

    cout << "La cantidad de divisores son: " << cont << endl;

	return 0;
}
