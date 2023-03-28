#include <iostream>
#include <cmath>
using namespace std;
double hipotenusa(double l1, double l2);
int main(){
    double lado1, lado2;
    cout << "\n\tIngrese el primer lado: ";
    cin >> lado1;
    cout << "\tIngrese el segundo lado: ";
    cin >> lado2;
    cout << "\n\tLado1\t\tLado2\t\tHipotenusa\n";
    cout << "\n\t" << lado1 << "\t\t" << lado2  << "\t\t" << hipotenusa(lado1, lado2) << endl;
    return 0;
}
double hipotenusa(double l1, double l2){
    double h;
    h = sqrt(pow(l1,2)+pow(l2,2));
    return h;
}
