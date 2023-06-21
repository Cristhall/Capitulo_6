#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int redondearAEntero (double);
double redondearADecimas (double);
double redondearACentesimas (double);
double redondearAMilesimas (double);
int main(){
    int num;
    cout << "\n\tIngrese un numero: ";
    cin >> num;
    cout << endl;
    cout << redondearAEntero(num) << endl;
    cout << redondearADecimas(num) << endl;
    cout << redondearACentesimas(num) << endl;
    cout << redondearAMilesimas(num) << endl;
    return 0;
}
int redondearAEntero (double x){
        cout << "\tEl numero " << x << " redondeado a ENTERO es: ";
        return floor (x + 0.5);
}
double redondearADecimas (double y){
        cout << "\tEl numero " << y << " redondeado a DECIMAS es: ";
        return floor(y * 10 + 0.5)/10;
}
double redondearACentesimas (double y){
        cout << "\tEl numero " << y << " redondeado a CENTESIMAS es: ";
        return floor(y * 100 + 0.5)/100;
}
double redondearAMilesimas (double y){
        cout << "\tEl numero " << y << " redondeado a MILESIMAS es: ";
        return floor(y * 1000 + 0.5)/1000;
}
//Prueba para cambio en rama

