#include <iostream>
using namespace std;
void lado(int x, char);
int main(){
    int num;
    char caracterRelleno;
    cout << "\n\tIngrese el tamaño del lado: ";
    cin >> num;
    cout << "\tIngrese el simbolo: ";
    cin >> caracterRelleno;
    cout << endl;
    lado(num, caracterRelleno);
    return 0;
}
void lado(int x, char s){
    for (int i=0; i<x; i++){
        cout << "\t";
        for (int j=0; j<x; j++){
            cout << s;
        }
        cout << endl;
    }
}
