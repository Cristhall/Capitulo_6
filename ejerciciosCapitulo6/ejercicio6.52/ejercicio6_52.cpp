#include <iostream>
#include <cmath>
using namespace std;
template < typename T >
T maximo( T valor1, T valor2){
    T valorMaximo = valor1;
    if ( valor2 > valorMaximo ){
        valorMaximo = valor2;
    }
    return valorMaximo;
}
int main(){
    cout << "\n\tPLANTILLA MAXIMO\n\n";
    int intn, intm;
    cout << "\tPrimer valor de tipo entero: ";
    cin >> intn;
    cout << "\tSegundo valor de tipo entero: ";
    cin >> intm;
    cout << "\n\tEl valor -int- maximo es: " << maximo(intn , intm) << endl;
    float floatn, floatm;
    cout << "\n\tPrimer valor de tipo flotante: ";
    cin >> floatn;
    cout << "\tSegundo valor de tipo flotante: ";
    cin >> floatm;
    cout << "\n\tEl valor -flotante- maximo es: " << maximo(floatn , floatm) << endl;
    char charn, charm;
    cout << "\n\tPrimer valor de tipo caracter: ";
    cin >> charn;
    cout << "\tSegundo valor de tipo caracter: ";
    cin >> charm;
    cout << "\n\tEl valor -caracter- maximo es: " << maximo(charn , charm) << endl;
}
