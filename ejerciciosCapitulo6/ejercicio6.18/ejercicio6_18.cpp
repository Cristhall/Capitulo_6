#include <iostream>
using namespace std;
int enteroPotencia(int r);
int pote;
int main(){
    int base;
    cout << "\n\tN�mero de base: ";
    cin >> base;
    cout << "\tN�mero de potencia: ";
    cin >> pote;
    cout << "\tValor ingresado: " << base << "^" << pote << endl << endl;
    cout << "\tResultado: " << enteroPotencia(base) << endl;
    return 0;
}
int enteroPotencia(int r){
    int q = 1;
    for (int i=0; i<pote; i++){
        q = q * r;
    }
    return q;
}

