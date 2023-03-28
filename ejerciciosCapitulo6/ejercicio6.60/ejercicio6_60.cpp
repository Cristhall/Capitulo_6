#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <cmath>
using namespace std;
//Prototipos de funciones
void suma();
void resta();
void division();
void multiplicacion();
void mixtas();
void mensaje(int correctas, int incorrectas, int u);
//Variables
int respuesta, x, y, n, opciones, comp = 7, comp2 = 4;
//Constante de repetición
const int OPERACIONES = 10;
const int CANTIDADMIXTAS = 8;
int main(){
    srand(time(NULL));
    cout << "\n\tOPERACIONES\n\n";
    bool repetir = true;
    do{
        cout << "\tProblemas Aritméticos\n\n";
        cout << "\t1. Suma" << endl;
        cout << "\t2. Resta" << endl;
        cout << "\t3. Divisón" << endl;
        cout << "\t4. Multiplicación" << endl;
        cout << "\t5. Mixtas" << endl;
        cout << "\t6. Salir" << endl;
        cout << "\n\tIngrese una opcion: ";
        cin >> opciones;
        switch(opciones){
            case 1:
                suma();
                break;
            case 2:
                resta();
                break;
            case 3:
                division();
                break;
            case 4:
                multiplicacion();
                break;
            case 5:
                mixtas();
                break;
            case 6:
                repetir = false;
                break;

        }
    }while(repetir);
    return 0;
}
void suma(){
    system("cls");
    int contador = 0;
    int correctas = 0;
    int incorrectas = 0;
    int e = 0, i = 0;
    int fin[10];
    cout << "\n\tOPERACIONES DE SUMA\n\n";
    do{
        x = 1 + rand()%100;
        y = 1 + rand()%100;
        n = x + y;
        i++;
        cout << "\n\t" << i <<". Cuanto es " << x << " + " << y << " ?" << endl;
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
    mensaje(correctas, incorrectas, comp);
}
void resta(){
    system("cls");
    int contador = 0;
    int correctas = 0;
    int incorrectas = 0;
    int e = 0, i = 0;
    int fin[10];
    cout << "\n\tOPERACIONES DE RESTA\n\n";
    do{
        x = 1 + rand()%100;
        y = 1 + rand()%100;
        n = x - y;
        i++;
        cout << "\n\t" << i <<". Cuanto es " << x << " - " << y << " ?" << endl;
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
    mensaje(correctas, incorrectas, comp);
}
void division(){
    system("cls");
    double cociente;
    int contador = 0;
    int correctas = 0;
    int incorrectas = 0;
    int e = 0, i = 0;
    int fin[10];
    cout << "\n\tOPERACIONES DE DIVISIONn\n";
    cout << "\tRedondear al entero mas cercano, no mayor a la respuesta\n\n";
    do{
        x = 200 + rand()%300;
        y = 1 + rand()%100;
        n = floor(x / y);
        i++;
        cout << "\n\t" << i <<". Cuanto es " << x << " / " << y << " ?" << endl;
        cout << "\tIngrese su respuesta: ";
        cin >> cociente;
        if(cociente == n){
            correctas++;
        }
        if(cociente != n){
            incorrectas++;
        }
        fin[e]=cociente;
        if(fin[e] != 0){
            contador++;
        }
    }while(contador != OPERACIONES);
    mensaje(correctas, incorrectas, comp);
}
void multiplicacion(){
    system("cls");
    int contador = 0;
    int correctas = 0;
    int incorrectas = 0;
    int e = 0, i = 0;
    int fin[10];
    cout << "\n\tOPERACIONES DE MULTIPLICACION\n\n";
    do{
        x = 1 + rand()%100;
        y = 1 + rand()%100;
        n = x * y;
        i++;
        cout << "\n\t" << i <<". Cuanto es " << x << " * " << y << " ?" << endl;
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
    mensaje(correctas, incorrectas, comp);
}
void mixtas(){
    system("cls");
    int a, b, c; //Para operaciones
    int o1, o2, o3, o4, o5, o6; //Para numeros random
    int total, total2, total3;      //Para respuesta
    int cal[10], cal2[10], cal3[10];
    int contador = 0;
    int correctas = 0;
    int incorrectas = 0;
    int e = 0, i = 0;
    int fin[10];
    cout << "\n\tOPERACIONES MIXTAS\n\n";
    do{
        x = 1 + rand()%100;
        y = 1 + rand()%100;
        n = floor(x * y);
        o1 = 1 + rand()%100;
        o2 = 1 + rand()%100;
        a = floor(o1 + o2);
        o3 = 1 + rand()%100;
        o4 = 1 + rand()%100;
        b = floor(o3 - o4);
        o5 = 200 + rand()%300;
        o6 = 1 + rand()%100;
        c = floor(o5 / o6);
        i++;
        cout << "\n\tCuanto es " << x << " * " << y << " ?" << endl;
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
        cout << "\n\tCuanto es " << o1 << " + " << o2 << " ?" << endl;
        cout << "\tIngrese su respuesta: ";
        cin >> total;
        if(total == a){
            correctas++;
        }
        if(total != a){
            incorrectas++;
        }
        cal[e]=total;
        if(cal[e] != 0){
            contador++;
        }
        cout << "\n\tCuanto es " << o3 << " - " << o4 << " ?" << endl;
        cout << "\tIngrese su respuesta: ";
        cin >> total2;
        if(total2 == b){
            correctas++;
        }
        if(total2 != b){
            incorrectas++;
        }
        cal2[e]=total2;
        if(cal2[e] != 0){
            contador++;
        }
        cout << "\n\tCuanto es " << o5 << " / " << o6 << " ?" << endl;
        cout << "\tRedondear al entero mas cercano, no mayor a la respuesta\n";
        cout << "\tIngrese su respuesta: ";
        cin >> total3;
        if(total3 == c){
            correctas++;
        }
        if(total3 != c){
            incorrectas++;
        }
        cal3[e]=total3;
        if(cal3[e] != 0){
            contador++;
        }
    }while(contador != CANTIDADMIXTAS);
    mensaje(correctas, incorrectas, comp2);
}
void mensaje(int correctas, int incorrectas, int u){
    if(correctas < u){
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
