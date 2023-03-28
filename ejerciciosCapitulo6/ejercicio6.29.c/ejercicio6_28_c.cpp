#include <iostream>
using namespace std;
void esPrimo(int n, bool t);
int main(){
    int numero = 2;
    int e = 0;
    int v[30];
    bool primo = true;
    cout << "\n\t NUMEROS PRIMOS AL DIVIDIR ENTRE 2" << endl;
    while (numero<=25){
        v[e]=numero;
        numero = numero+1;
        esPrimo(numero, primo);
        e++;
    }
    return 0;
}
void esPrimo(int n, bool t){
    for (int i=0; i<n; i++){
        if (n % 2 == 0){
            t = false;
        }
    }
    if (t == true){
        cout << "\n\t\t" << n << endl;
    }
}
