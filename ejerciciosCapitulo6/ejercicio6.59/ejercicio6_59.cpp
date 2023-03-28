#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;
//Prototipos de funciones
void primerNivel();
void segundoNivel();
void tercerNivel();
void mensaje(int correctas, int incorrectas);
//Variables
int respuesta, x, y, n, opciones;
//Constante de repetición
const int OPERACIONES = 10;
int main(){
    srand(time(NULL));
    cout << "\n\tRESUELVE LA OPERACION\n\n";
    bool repetir = true;
    do{
        cout << "\tNivel de dificultad\n\n";
        cout << "\t1. Multiplicaciones con dos numeros" << endl;
        cout << "\t2. Multiplicaciones con tres numeros" << endl;
        cout << "\t3. Multiplicaciones con cuatro numeros" << endl;
        cout << "\t4. Salir" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opciones;
        switch(opciones){
            case 1:
                primerNivel();
                break;
            case 2:
                segundoNivel();
                break;
            case 3:
                tercerNivel();
                break;
            case 4:
                repetir = false;
                break;

        }
    }while(repetir);
    return 0;
}
void primerNivel(){
    system("cls");
    int contador = 0;
    int correctas = 0;
    int incorrectas = 0;
    int e = 0, i = 0;
    int fin[10];
    cout << "\n\tOPERACIONES CON UN NUMERO\n\n";
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
    mensaje(correctas, incorrectas);
}
void segundoNivel(){
    system("cls");
    int contador = 0;
    int correctas = 0;
    int incorrectas = 0;
    int e = 0, i = 0;
    int fin[10];
    cout << "\n\tOPERACIONES CON DOS NUMERO\n\n";
    do{
        x = 10 + rand()%70;
        y = 10 + rand()%70;
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
    mensaje(correctas, incorrectas);
}
void tercerNivel(){
    system("cls");
    int contador = 0;
    int correctas = 0;
    int incorrectas = 0;
    int e = 0, i = 0;
    int fin[10];
    cout << "\n\tOPERACIONES CON TRES NUMERO\n\n";
    do{
        x = 100 + rand()%500;
        y = 100 + rand()%500;
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
    mensaje(correctas, incorrectas);
}
void mensaje(int correctas, int incorrectas){
    if(correctas < 7){
        cout << "\n\tRespuestas correctas: " << correctas << endl;
        cout << "\tRespuestas incorrectas: " << incorrectas << endl;
        cout << "\n\tPorfavor pida ayuda adicional a su profesor" << endl;
    }
    else{
        cout << "\n\tRespuestas correctas: " << correctas << endl;
        cout << "\tRespuestas incorrectas: " << incorrectas << endl;
        cout << "\n\tFelicidades, esta listo para pasar al siguiente nivel!\n\n" << endl;
    }
    system("pause");
    system ("cls");
}
