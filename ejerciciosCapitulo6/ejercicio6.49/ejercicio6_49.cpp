#include <iostream>
#include <cmath>
using namespace std;
int triplicarPorValor(int);
void triplicarPorReferencia(int &n);
int main(){
    int n1;
    cout << "\n\tPASO DE PARAMETROS\n\n";
    cout << "\tIngrese la cuenta actual: ";
    cin >> n1;
    cout << "\tPaso por valor: " << triplicarPorValor(n1) << endl;
    triplicarPorReferencia(n1);
    cout << "\tPaso por referencia: " << n1 << endl;
}
int triplicarPorValor(int n){
    n = pow(n,3);
    return n;
}
void triplicarPorReferencia(int &n){
    n = pow(n,3);
}
