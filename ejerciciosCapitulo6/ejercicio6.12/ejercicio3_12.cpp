#include <iostream>
using namespace std;
double calcularCargos(double);
const int TOTALVALORES = 100;
int main(){
    double hora;
    int carros;
    double valores[TOTALVALORES];
    double valoresP[TOTALVALORES];
    cout << "\n\t\tCARGOS DE ESTACIONAMIENTO\n\n";
    cout << "\tCantidad de carros que ingresaron: ";
    cin >> carros;
    for (int i=1; i<=carros; i++){
        cout << "\tEscriba la cantidad de horas del carro " << i << ": ";
        cin >> hora;
        valores[i] = hora;
        valoresP[i] = calcularCargos(hora);
    }
    cout << "\n\tAutomóvil\t\tHoras\t\tCargo\n";
    double suma = 0;
    double suma2 = 0;
    for (int i=1; i<=carros; i++){
        cout <<"\t"<<i<<"\t\t\t"<<valores[i]<<"\t\t"<< valoresP[i] << endl;
        suma += valores[i];
        suma2 += valoresP[i];
    }
    cout << "\tTotal\t\t\t" << suma<< "\t\t"<<suma2<<"\n";
    return 0;
}
double calcularCargos(double valor){
    if (valor <= 3){
        return valor = 2;
    }
    else{
        if (valor < 24){
            int valor2 = valor - 3;
            double precio = 0;
            for (int i=0; i<valor2; i++){
                precio += 0.50;
            }
            return precio = precio + 2;
        }
        else{
            return valor = 10;
        }
    }
}
