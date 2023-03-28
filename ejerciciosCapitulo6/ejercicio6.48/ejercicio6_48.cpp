#include <iostream>
#include <cmath>
using namespace std;
inline double areaCirculo(const double r){
    double pi = 3.1416;
    return pi * (pow(r,2));
}
int main(){
    int radio;
    cout << "\n\tAREA DE UN CIRCULO\n\n";
    cout << "\tIngrese el radio del circulo: ";
    cin >> radio;
    cout << "\n\tEl area del circulo es: " << areaCirculo(radio) << endl;
}
