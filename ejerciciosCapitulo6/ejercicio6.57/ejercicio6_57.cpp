#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    cout << "\n\tRESUELVE LA OPERACION\n\n";
    int respuesta, x, y, n;
    x = 1 + rand()%10;
    y = 1 + rand()%10;
    n = x * y;
    int e = 0;
    int total[50];
    int contador = 0;
    cout << "\tCuanto es " << x << " por " << y << " ?" << endl;
    do{
        if(respuesta < n){
        cout << "\tNo te rindas!" << endl;
        }
        else{
            cout << "\tIncorrecto, intenta una vez más" << endl;
        }
        cout << "\n\tIngrese su respuesta: ";
        cin >> respuesta;
        if(respuesta == n){
            cout << "\tMuy bien! Respuesta correcta!" << endl;
        }
        total[e]=respuesta;
        if(total[e] != 0){
            contador++;
        }
    }while(n != respuesta);
    if(contador == 1){
        cout << "\n\tExcelente trabajo!" << endl;
    }
    else{
        if(contador < 5){
            cout << "\n\tBuen trabajo" << endl;
        }
        else{
            if(contador >= 5){
            cout << "\n\tLo lograste!" << endl;
            }
        }
    }
    return 0;
}
