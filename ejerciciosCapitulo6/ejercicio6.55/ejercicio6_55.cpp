#include <iostream>
using namespace std;
int main(){
    enum TipoCuenta
    {AHORROS, CHEQUES, INVERSION};
    TipoCuenta Cuenta;
    cout << "\n\t1. Cuenta de ahorro" << endl;
    cout << "\t2. Cuenta de cheques" << endl;
    cout << "\t3. Cuenta de inversion" << endl;
    int cuentas;
    cout << "\tTipo de cuenta: ";
    cin >> cuentas;
    switch (cuentas){
        case 1:
            Cuenta = AHORROS;
        case 2:
            Cuenta = CHEQUES;
        case 3:
            Cuenta = INVERSION;
    }
    if(Cuenta == AHORROS){
        cout << "\n\tSu cuenta es de AHORROS" << endl;
    }
    if(Cuenta == CHEQUES){
        cout << "\n\tSu cuenta es de CHEQUES" << endl;
    }
    if(Cuenta == INVERSION){
        cout << "\n\tSu cuenta es de INVERSION" << endl;
    }
}
