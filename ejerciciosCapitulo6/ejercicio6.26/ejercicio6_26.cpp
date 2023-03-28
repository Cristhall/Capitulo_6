#include <iostream>
using namespace std;
void centigrados(int c);
void fahrenheit(int f);
int main(){
    int valoresC;
    int v2[101];
    int e = 0;
    int valoresF = 32;
    int v[181];
    cout << "\n\tCentigrados  a  Fahrenheit" << endl;
    for (int i=0; i<100; i++){
        valoresC = valoresC + 1;
        v2[i]=valoresC;
        centigrados(v2[i]);
    }
    cout << "\n\n\tFahrenheit  a  Centigrados" << endl;
    while (valoresF<=212){
        v[e]=valoresF;
        valoresF = valoresF+1;
        fahrenheit(v[e]);
        e++;
    }
    return 0;
}
void centigrados(int c){
    double f = (c * 1.8) + 32;
    cout << "\t\t" << c << "\t" << f << endl;
}
void fahrenheit(int f){
    double c = (f-32)/1.8;
    cout << "\t\t" << f << "\t" << c << endl;
}
