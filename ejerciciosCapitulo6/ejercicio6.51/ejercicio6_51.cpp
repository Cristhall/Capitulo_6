#include <iostream>
#include <cmath>
using namespace std;
template < typename T >
T minimo( T valor1, T valor2){
    T valorMinimo = valor1;
    if ( valor2 < valorMinimo ){
        valorMinimo = valor2;
    }
    return valorMinimo;
}
int main(){
    cout << "\n\tPLANTILLA MINIMO\n\n";
    int intn, intm;
    cout << "\tPrimer valor de tipo entero: ";
    cin >> intn;
    cout << "\tSegundo valor de tipo entero: ";
    cin >> intm;
    cout << "\n\tEl valor -int- minimo es: " << minimo(intn , intm) << endl;
    float floatn, floatm;
    cout << "\n\tPrimer valor de tipo flotante: ";
    cin >> floatn;
    cout << "\tSegundo valor de tipo flotante: ";
    cin >> floatm;
    cout << "\n\tEl valor -flotante- minimo es: " << minimo(floatn , floatm) << endl;
    char charn, charm;
    cout << "\n\tPrimer valor de tipo caracter: ";
    cin >> charn;
    cout << "\tSegundo valor de tipo caracter: ";
    cin >> charm;
    cout << "\n\tEl valor -caracter- minimo es: " << minimo(charn , charm) << endl;
}
