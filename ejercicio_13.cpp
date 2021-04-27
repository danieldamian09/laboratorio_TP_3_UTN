//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int num, primero, ultimo;
    bool bandera = true;
    int i;


    for(i = 7; i > 0; i--){

        cout << "Por favor ingrese un numero: " << endl;
        cin >> num;

        if(num%2 != 0){
            if(bandera){
                primero = num;
                bandera = false;
            }
            else{
                if(!bandera){
                    ultimo = num;
                }
            }
        }


    }

    cout << "El primer inpar es: " << primero << endl;
    cout << "El ultimo inpar es: " << ultimo << endl;


	return 0;
}
