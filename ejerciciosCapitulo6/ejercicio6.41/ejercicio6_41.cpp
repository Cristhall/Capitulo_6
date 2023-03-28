#include <iostream>
using namespace std;
int mcd(int x, int y);
int main(){
    int num, num2;
    cout << "\n\tCALCULO DE MCD FORMA RECURSIVA" << endl;
    cout << "\n\tIngrese los numeros de mayor a menor" << endl;
    cout << "\n\tIngrese el primer numero: ";
    cin >> num;
    cout << "\tIngrese el segundo numero: ";
    cin >> num2;
    cout << endl;
    cout << "\n\tEl resultado es: " << mcd(num, num2) << endl;;
    cout << endl;
    return 0;
}
int mcd(int x, int y){
    if (y==0){
        return x;
    }
    else{
        return mcd(y, x%y);
    }
}
