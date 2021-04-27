//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int num, max_negativos, min_positivos;
    int bandera_pos = 0;
    int bandera_negat = 0;
    int i;

    for(i =0; i < 10; i++){

        cout << "Por favor ingrese un numero: " << endl;
        cin >> num;

        if(num > 0){
            if(bandera_pos == 0){
                min_positivos = num;
                bandera_pos = 1;
            }
            else{
                if(num < min_positivos){
                    min_positivos = num;
                }
            }
        }
        else{
            if(bandera_negat == 0){
                max_negativos = num;
                bandera_negat = 1;
            }
            else{
                if(num > max_negativos){
                    max_negativos = num;
                }
            }
        }

    }

        cout << "El maximo negativo es: " << max_negativos << endl;
        cout << "El minimo positivo es: " << min_positivos << endl;



	return 0;
}
