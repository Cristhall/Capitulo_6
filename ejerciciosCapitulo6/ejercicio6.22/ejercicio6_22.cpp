#include <iostream>
using namespace std;
void lado(int x);
int main(){
    int num;
    cout << "\n\tIngrese el tamaño del lado: ";
    cin >> num;
    cout << endl;
    lado(num);
    return 0;
}
void lado(int x){
    for (int i=0; i<x; i++){
        cout << "\t";
        for (int j=0; j<x; j++){
            cout << "*";
        }
        cout << endl;
    }
}
