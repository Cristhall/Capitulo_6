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
    cout << "\tCuanto es " << x << " por " << y << " ?" << endl;
    cout << "\n\tIngrese su respuesta: ";
    cin >> respuesta;
    do{
        if(respuesta != n){
            cout << "\tNo. Porfavor intenta de nuevo" << endl;
        }
        cout << "\n\tIngrese su respuesta: ";
        cin >> respuesta;
        if(respuesta == n){
            cout << "\n\tMuy bien! Respuesta correcta!" << endl;
        }
    }while(n != respuesta);
    return 0;
}
