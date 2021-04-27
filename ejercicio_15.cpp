//Nombre:
//TP N°:
//EJ N°:
//Comentarios:

#include <iostream>
using namespace std;

int main(){

    int num, i, primero, segundo;
    int bandera = 0;

    for(i =0;i < 5; i++){

        cout << "Por favor ingrese un numero: " << endl;
        cin >> num;

//        if(i == 0){
//            primero = num;
//        }
//        else{
//            if(num >= primero && bandera == 0){
//                segundo = num;
//                bandera = 1;
//            }
//            else{
//                if(num >= primero){
//                    primero = num;
//                }
//            }
//        }


        if(i ==0){
            primero = num;
            segundo = num;
        }
        else{
            if(num > primero){
                segundo = primero;
                primero = num;
            }
        }


    }


    cout << "El pimer valor mayor es: " << primero << endl;
    cout << "El segundo valor mayor es: " << segundo << endl;


	return 0;
}
