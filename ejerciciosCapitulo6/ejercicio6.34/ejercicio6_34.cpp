#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void adivinar(int n);
int main(){
    int numero;
    cout << "\n\tADIVINA EL NUMERO" << endl;
    srand (time (NULL));
    numero = 1 + rand() % 1000;
    cout << "\n\tAdivine un numero del 1 al 1000\n\n";
    adivinar(numero);
    return 0;
}
void adivinar (int n){
    int respuesta;
    do{
        cout << "\n\tIngrese un numero: ";
        cin >> respuesta;
        if (respuesta==n){
            cout << "\n\t\t\tEXCELENTE! ADIVINASTE EL NUMERO!" << endl;
        }
        else{
            if (respuesta>n){
                cout << "\tDemasiado alto. Intenta de nuevo" << endl;
            }
            else{
                cout << "\tDemasiado bajo. Intenta de nuevo" << endl;
            }
        }
    }while(respuesta != n);
}
