#include <iostream>
using namespace std;
void esPrimo(int n, bool t);
int main(){
    int numero;
    bool primo = true;
    cout << "\n\tDETERMINAR SI UN NUMERO ES PRIMO O NO" << endl << endl;
    cout << "\n\tEscribe un número: ";
    cin >> numero;
    esPrimo(numero, primo);
    return 0;
}
void esPrimo(int n, bool t){
    for (int i=2; i<n && t == true; i++){
        if (n % i == 0){
            t = false;
        }
    }
    if (t == false){
        cout << "\n\t" << n << " No es primo" << endl;
    }
    else{
        cout << "\n\t" << n << " Es primo" << endl;
    }
}
