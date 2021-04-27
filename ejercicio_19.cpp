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

    if(cont == 2){
        cout << "El numero: " << num << " es un numero primo ya que tiene: " << cont << " divisores" << endl;
    }
    else{
        cout << "No es un numero primo" << endl;
    }


	return 0;
}
