#include <iostream>
using namespace std;
void numeroInvertido(int n);
int main(){
    int num;
    cout << "\n\tINVERSO DE UN NUMERO" << endl;
    cout << "\n\tIngrese el numero: ";
    cin >> num;
    cout << endl;
    numeroInvertido(num);
    cout << endl;
    return 0;
}
void numeroInvertido(int n){
        int y;
        cout << "\t";
        while(n>0){
            y = n % 10; //Se guarda el ultimo numero
            cout << y; //Se imprime el ultimo numero
            n = n/10; //se elimina el utlimo numero para continuar con el que sigue
        }
}

