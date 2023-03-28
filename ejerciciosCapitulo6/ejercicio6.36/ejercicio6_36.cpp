#include <iostream>
using namespace std;
int potencia (int, int);
int main(){
    int base, expo;
    cout << "\n\tEXPONENCIACIÓN RECURSIVA" << endl;
    //Datos a ingresar
    cout << "\n\tIngrese la base: ";
    cin >> base;
    cout << "\tIngrese el exponente: ";
    cin >> expo;
    cout << "\n\tPotencia de " << base << " elevado a " << expo << " es: " << potencia(base, expo) << endl;
    return 0;
}
int potencia (int n, int m){
    int total;
    if(m==1){ //caso base
        total = n;
    }
    else{ //caso general
        total = n * potencia(n,m-1);
    }
    return total;
}
