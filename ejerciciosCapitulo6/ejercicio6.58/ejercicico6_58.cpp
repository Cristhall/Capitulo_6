#include <iostream>
#include <ctime>
using namespace std;
int main(){
    const int OPERACIONES = 10;
    srand(time(NULL));
    cout << "\n\tRESUELVE LA OPERACION\n\n";
    int respuesta, x, y, n, opciones;
    int correctas = 0;
    int incorrectas = 0;
    int contador = 0;
    int e = 0, i = 0;
    int fin[10];
    do{
        x = 1 + rand()%10;
        y = 1 + rand()%10;
        n = x * y;
        i++;
        cout << "\n\t" << i <<". Cuanto es " << x << " por " << y << " ?" << endl;
        cout << "\tIngrese su respuesta: ";
        cin >> respuesta;
        if(respuesta == n){
            correctas++;
        }
        if(respuesta != n){
            incorrectas++;
        }
        fin[e]=respuesta;
        if(fin[e] != 0){
            contador++;
        }
    }while(contador != OPERACIONES);
    if(correctas < 7){
        cout << "\n\tRespuestas correctas: " << correctas << endl;
        cout << "\tRespuestas incorrectas: " << incorrectas << endl;
        cout << "\n\tPorfavor pida ayuda adicional a su profesor" << endl;
    }
    else{
        cout << "\n\tRespuestas correctas: " << correctas << endl;
        cout << "\tRespuestas incorrectas: " << incorrectas << endl;
        cout << "\n\telicidades, esta listo para pasar al siguiente nivel!" << endl;
    }
    return 0;
}

