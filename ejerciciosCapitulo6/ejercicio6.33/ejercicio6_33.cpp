#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void tirar();
int main(){
    cout << "\n\tLANZAR UNA MONEDA 100 VECES" << endl;
    tirar();
    return 0;
}
void tirar(){
    int moneda, cruz = 0, cara = 0;
    srand (time (NULL));
    for (int i=1; i<=100; i++){
        moneda = rand() % 2;
        if (moneda == 0){
          ++cruz;
         }
         else{
          cara++;
         }
    }
    cout << "\n\tNumero de caras: " << cara << endl;
    cout << "\tNumero de escudos: " << cruz << endl;
}

