#include <iostream>
using namespace std;
void esPrimo(int n, bool t);
int main(){
    int numero = 2;
    int e = 0;
    int v[9999];
    bool primo = true;
    cout << "\n\t NUMEROS PRIMOS DEL 2 - 10,000" << endl;
    while (numero<=25){
        v[e]=numero;
        numero = numero+1;
        esPrimo(v[e], primo);
        e++;
    }
    return 0;
}
void esPrimo(int n, bool t){
    for (int i=2; i<n && t == true; i++){
        if (n % i == 0){
            t = false;
        }
    }
    if (t == true){
        cout << "\n\t\t" << n << endl;
    }
}

