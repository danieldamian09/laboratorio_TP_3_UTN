//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int num;
    int primer_num;
    int cont = 0;
    int i;

    for(i = 0; i < 8; i++){

        cout << "Ingrese un numero: " << endl;
        cin >> num;

        if(i == 0){
            primer_num = num;
            cont++;
        }
        else{
            if(num > primer_num){
                primer_num = num;
                cont++;
            }
        }
    }


    if(cont == 8){
        cout << "Los numeros estan ordenados" << endl;
    }
    else{
        cout << "Los numeros no estan ordenados" << endl;
    }

    cout << cont;

	return 0;
}
