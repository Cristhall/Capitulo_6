#include <iostream>
#include <cmath>
using namespace std;
void evaluacion(double);
int main(){
    int x;
    cout << "\n\tFUNCIONES MATEMÁTICAS SOBRE UN NUMERO" << endl;
    cout << "\n\tEscrida un numero: ";
    cin >> x;
    evaluacion(x);
}
void evaluacion(double x){
    int y;
    cout << "\n\tEvaluado con ceil(x): " << ceil(x) << endl;
    cout << "\tEvaluado con cos(x): " << cos(x) << endl;
    cout << "\tEvaluado con exp(x): " << exp(x) << endl;
    cout << "\tEvaluado con fabs(x): " << fabs(x) << endl;
    cout << "\tEvaluado con floor(x): " << floor(x) << endl;
    cout << "\tEvaluado con log(x): " << log(x) << endl;
    cout << "\tEvaluado con log10(x): " << log10(x) << endl;
    cout << "\tEvaluado con sin(x): " << sin(x) << endl;
    cout << "\tEvaluado con sqrt(x): " << sqrt(x) << endl;
    cout << "\tEvaluado con tan(x): " << tan(x) << endl;
    cout << "\n\tPara evaluar el modulo y la potencia se necesita otro numero" << endl;
    cout << "\tIngrese otro numero: ";
    cin >> y;
    cout << "\tEvaluado con fmod(x): " << fmod(x,y) << endl;
    cout << "\tEvaluado con pow(x): " << pow(x,y) << endl;
}
