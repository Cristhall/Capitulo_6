#include <iostream>
using namespace std;
void puntosCalidad(int n);
int main(){
    int num, num2;
    cout << "\n\tPUNTOS DE CALIDAD PARA CALIFICACIONES" << endl;
    cout << "\n\t----Rango de 0 a 100"  << endl;
    cout << "\n\tIngrese el promedio: ";
    cin >> num;
    if (num>=0 && num<=100){
        puntosCalidad(num);
    }
    else{
        cout << "\n\tEl valor se sale de los límites" << endl;
    }
    cout << endl;
    return 0;
}
void puntosCalidad(int n){
    if (n>=90 && n<=100){
        cout << "\n\tSu numero es: 4" << endl;
    }
    else{
        if(n>=80 && n<=89){
            cout << "\n\tSu numero es: 3" << endl;
        }
        else{
            if(n>=70 && n<=79){
                cout << "\n\tSu numero es: 2" << endl;
            }
            else{
                if(n>=60 && n<=69){
                    cout << "\n\tSu numero es: 1" << endl;
                }
                else{
                    cout << "\n\tSu numero es: 0" << endl;
                }
            }
        }
    }
}
