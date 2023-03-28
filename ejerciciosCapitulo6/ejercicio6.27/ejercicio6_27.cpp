#include <iostream>
#include <iomanip>
using namespace std;
void mayor(double a, double b, double c);
int main(){
    double num, num2, num3;
    cout << "\n\tNUMERO MAS PEQUENIO" << endl;
    cout << "\n\tIngrese el primer numero: ";
    cin >> num;
    cout << "\tIngrese el segundo numero: ";
    cin >> num2;
    cout << "\tIngrese el tercer numero: ";
    cin >> num3;
    mayor(num, num2, num3);
    return 0;
}
void mayor(double a, double b, double c){
    double maximo = a;
    if (b < maximo){
        maximo = b;
    }
    if(c < maximo){
        maximo = c;
    }
    cout << "\n\tEl numero mas pequenio es: " << setprecision(2) << fixed << maximo << endl;
}
