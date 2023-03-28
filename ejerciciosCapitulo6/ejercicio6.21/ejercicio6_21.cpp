#include <iostream>
using namespace std;
void esPar(int x);
int main(){
    int num, num2;
    cout << "\n\tIngrese el primer numero: ";
    cin >> num;
    cout << "\tIngrese el segundo numero: ";
    cin >> num2;
    cout << "\tLos numeros ingresados son pares?" << endl;
    esPar(num);
    esPar(num2);
    return 0;
}
void esPar(int x){
    if (x %2==0 ){
        cout << "\t" << x << " es TRUE" << endl;
    }
    else{
        cout << "\t" << x << " es FALSE" << endl;
    }
}

