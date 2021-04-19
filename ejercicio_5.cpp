//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int numA, numB, i;

    cout << "Por favor ingrese un numero" << endl;
    cin >> numA;

    cout << "Por favor ingrese un numero" << endl;
    cin >> numB;

    if(numA > numB){
        for(i = numB; i <= numA; numA--){
            cout << numA << endl;
        }
    }else{
        for(i = numA; i <= numB; numB--){
            cout << numB << endl;
        }
    }



	return 0;
}
