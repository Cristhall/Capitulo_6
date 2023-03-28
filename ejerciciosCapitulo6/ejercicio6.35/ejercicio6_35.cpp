#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void adivinar(int n);
void mensaje(int x);
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
    int e = 0;
    int total[5];
    int contador = 0;
    while (respuesta != n){
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
        total[e]=respuesta;
        if(total[e] != 0){
            contador++;
        }
    }
    cout << "\n\tNumero de intentos: " << contador << endl;
    mensaje(contador);
}
void mensaje(int x){
    if (x<10){
        cout << "\n\tOh!, ya sabia usted el secreto, o tuvo suerte!" << endl;
    }
    else{
        if(x==10){
            cout << "\n\tAja! Sabia usted el secreto!" << endl;
        }
        else{
            cout << "\n\tDeberia haberlo hecho mejor!" << endl;
        }
    }
}
