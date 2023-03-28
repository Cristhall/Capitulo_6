#include <iostream>
using namespace std;
void mcd(int n, int m);
int main(){
    int num, num2;
    cout << "\n\tCALCULO DE MCD" << endl;
    cout << "\n\tIngrese el primer numero: ";
    cin >> num;
    cout << "\tIngrese el segundo numero: ";
    cin >> num2;
    cout << endl;
    mcd(num, num2);
    cout << endl;
    return 0;
}
void mcd(int n, int m){
    int temporal;//Para no perder b
    while (m != 0 && n != 0){
        temporal = m;
        m = n % m;
        n = temporal;
    }
    cout << "\n\tEl maximo comun divisor es: " << n << endl;
}
