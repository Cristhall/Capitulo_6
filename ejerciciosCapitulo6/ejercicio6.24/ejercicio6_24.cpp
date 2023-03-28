#include <iostream>
using namespace std;
void cociente(int n1, int n2, int &r);
void residuo (int n1, int n2, int &r);
void separador (int r1);
int main(){
    int num, num2, n = 0, p =0;
    cout << "\n\tIngrese el primer numero: ";
    cin >> num;
    cout << "\tIngrese el segundo numero: ";
    cin >> num2;
    cociente(num, num2, n);
    residuo(num, num2, p);
    cout << "\n\tAl separa el cociente se tiene: " << endl;
    separador(n);
    cout << "\n\tAl separa el residuo se tiene: " << endl;
    separador(p);
    cout << endl;
    return 0;
}
void cociente(int n1, int n2, int &r){
    r = n1 / n2;
    cout << "\n\tEl cociente es: " << r << endl;
}
void residuo (int n1, int n2, int &r){
    r = n1 % n2;
    cout << "\tEl residuo es: " << r << endl;
}
void separador (int r1){
    if(r1>=0 && r1<=32767){
        int cifras[5];
        int i = 0;
        //Se va guardando y quitando el último número
        while(r1>0){
            cifras[i] = r1%10;
            r1 = r1/10;
            i++;
        }
        //Se va de forma inversa para leer en orden el numero
        cout << "\t";
        for (int s = i-1; s>=0; s--){
            cout << cifras[s] << "  ";
        }
    }
    else{
        cout << "El valor se sale de los límites para separar" << endl;
    }
}

