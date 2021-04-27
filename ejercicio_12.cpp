//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int num, primer_inpar, segundo_inpar;
    int bandera_uno = 0;
    int i;


    for(i = 7; i > 0; i--){

        cout << "Ingrese un numero: " << endl;
        cin >> num;

        if(num%2 != 0){
            if(bandera_uno == 0){
                primer_inpar = num;
                bandera_uno = 1;
            }
            else{
                if(bandera_uno == 1){
                    segundo_inpar = num;
                    bandera_uno = 2;
                }
            }
        }
    }

    cout << "El primer inpar es: " << primer_inpar << endl;
    cout << "El segundo inpar es: " << segundo_inpar << endl;

	return 0;
}
