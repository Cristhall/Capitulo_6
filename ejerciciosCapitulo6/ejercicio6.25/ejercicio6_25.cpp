#include <iostream>
#include <string>
using namespace std;
void diferenciaDeHora(int h, int m, int s, int &d);
void rangoDosHoras(int x);
int main(){
    int hora, minutos, segundos;
    string periodo;
    int segGenerales = 43200;
    cout << "\n\tFORMATO DE 12 HORAS" << endl << endl;
    cout << "\tEscriba el periodo del dia -am- o -pm-  : ";
    cin >> periodo;
    cout << "\tEscriba la hora: ";
    cin >> hora;
    cout << "\tEscriba los minutos: ";
    cin >> minutos;
    cout << "\tEscriba los segundos: ";
    cin >> segundos;
    cout << "\n\tSu hora es: " << hora << ":" << minutos << ":" << segundos << " " << periodo << endl;
    diferenciaDeHora(hora, minutos, segundos, segGenerales);
    return 0;
}
void diferenciaDeHora(int h, int m, int s, int &d){
    h = h * 60 * 60;
    m = m * 60;
    int suma = h + m + s;
    if (suma <=d){
        cout << "\tSegundos desde que fueron las 12: " << suma << " segundos\n\n";
        rangoDosHoras(suma);
    }
    else{
            cout << "\tINVALIDO -- el tiempo se pasa de los límites" << endl;
    }
}
void rangoDosHoras(int x){
    int v[6];
    int e = 2;
    while (x > 7200){
        x = x - 7200;
        v[e] = x;
        cout << "\tHora " << e << ": " << v[e] << " seg." << endl;
        e+=2;
    }
}
