//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int num, i, negativo_max, positivo_min;
    int cont_pos = 0;
    int cont_nega = 0;

    for(i =0;i < 10;i++){
        cout << "Por favor ingrese un numero: " << endl;
        cin >> num;

        if(num > 0){
            cont_pos++;
            if(cont_pos == 1){
                positivo_min = num;
            }
            else{
                if(num < positivo_min){
                    positivo_min = num;
                }
            }
        }
        else{
            cont_nega++;
            if(cont_nega == 1){
                negativo_max = num;
            }
            else{
                if(num > negativo_max){
                    negativo_max = num;
                }
            }
        }

    }

    cout << "El maximo negativo es: " << negativo_max << endl;
    cout << "El minimo positivo es: " << positivo_min << endl;


	return 0;
}
