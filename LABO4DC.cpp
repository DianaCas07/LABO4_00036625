#include <iostream>
using namespace std;

int main(){
    //variables
    int numero;
    //ingrese un numero
    cout<< "Ingrese el numero que desee saber";
    cin>> numero;

    //condicionales
    if (numero > 0){
        cout << " su numero es positivo "<<endl;
    }
    else if (numero < 0)
    {
        cout<< "su numero es negativo "<<endl;
    }
    else
    {
        cout<<"su numero es 0"<<endl;
    }
    return 0;
}