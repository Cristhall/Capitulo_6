#include <iostream>
#include <cmath>
using namespace std;
int operacionInterna(int x, int y, int x2, int y2);
double raiz(double n);
int main(){
    int x, y, x2, y2;
    cout << "\n\tDIFERENCIA ENTRE DOS PUNTOS" << endl;
    cout << "\n\tIngrese el primer punto" << endl;
    cout << "\n\tValor de x: ";
    cin >> x;
    cout << "\tValor de y: ";
    cin >> y;
    cout << "\n\tIngrese el segundo punto" << endl;
    cout << "\n\tValor de x2: ";
    cin >> x2;
    cout << "\tValor de y2: ";
    cin >> y2;
    operacionInterna(x,y,x2,y2);
    cout << "\n\tEl resultado es: " << raiz(operacionInterna(x,y,x2,y2)) << endl;
    return 0;
}
int operacionInterna(int x, int y, int x2, int y2){
    int primero, segundo, suma;
    primero = pow((x2 - (x)),2);
    segundo = pow((y2 - (y)),2);
    suma = primero + segundo;
    return suma;
}
double raiz(double n){
    double total = sqrt(n);
    return total;
}
