#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void juegoCraps(int apuesta);
void inicio(int apuesta);
unsigned int tirarDados();
int saldoBanco = 0;
int main(){
    cout << "\n\tJUEGO DE CRAPS\n\n";
    int apuesta;
    //Apuesta fija, con esa seguira jugando.
    cout << "Ingrese una apuesta: ";
    cin >> apuesta;
    while(apuesta > 1000){
        cout << "Apuesta inválida" << endl;
        cout << "Ingrese una apuesta: ";
        cin >> apuesta;
    }
    inicio(apuesta);
}
void inicio(int apuesta){
    bool repetir = true;
    int opcion;
    do{
       cout << "Continuar - 1 - salir - 2 -  ";
       cin >> opcion;
       switch (opcion){
        case 1:
            juegoCraps(apuesta);
            if(saldoBanco <= 0){
                cout << "Fin del juego, ya no tienes con que apostar" << endl;
                repetir = false;
            }
            break;
        case 2:
            repetir = false;
            break;
       }
    }while(repetir);
}
void juegoCraps(int apuesta){
    enum Estado {CONTINUAR, GANO, PERDIO};
    srand(static_cast<unsigned int>(time(0)));
    unsigned int miPunto = 0;
    Estado estadoJuego = CONTINUAR;
    unsigned int sumaDeDados = tirarDados();

    switch (sumaDeDados){
    case 7:
    case 11:
        estadoJuego = GANO;
        break;
    case 2:
    case 3:
    case 12:
        estadoJuego = PERDIO;
        break;
    default:
        estadoJuego = CONTINUAR;
        miPunto = sumaDeDados;
        cout << "El punto es: " << miPunto << endl;
        break;
    }

    while (CONTINUAR == estadoJuego){
        sumaDeDados = tirarDados();
        if(sumaDeDados == miPunto){
            estadoJuego = GANO;
        }
        else{
            if(sumaDeDados == 7){
                estadoJuego = PERDIO;
            }
        }
    }
    if (GANO == estadoJuego){
        cout << "El jugador gana" << endl;
        saldoBanco = saldoBanco + apuesta;
        cout << "Su saldo ahora es de: " << saldoBanco << endl;
        cout << "La hizo en grande. Ahora es tiempo de cambiar sus fichas por efectivo!" << endl;
    }
    else{
        cout << "El jugador pierde" << endl;
        saldoBanco = saldoBanco - apuesta;
        cout << "Su saldo ahora es de: " << saldoBanco << endl;
        cout << "Oh, lo siento perdio su apuesta" << endl;
    }
}
unsigned int tirarDados(){
    unsigned int dado1 = 1 + rand()%6;
    unsigned int dado2 = 1 + rand()%6;
    unsigned int suma = dado1 + dado2;
    cout << "El jugador tiro: " << dado1 << " + " << dado2
    << " = " << suma << endl;
    return suma;
}
