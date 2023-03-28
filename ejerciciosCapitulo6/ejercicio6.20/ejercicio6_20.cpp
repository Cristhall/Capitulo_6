#include <iostream>
using namespace std;
void multiple(int x, int y);
int main(){
    int num1, num2;
    cout << "\n\tIngrese el primer numero: ";
    cin >> num1;
    cout << "\tIngrese el segundo numero: ";
    cin >> num2;
    cout << "\n\tEl segundo numero es multiplo del primero?\n";
    multiple(num1, num2);
    return 0;
}
void multiple(int x, int y){
    if (x % y==0){
        cout << "\tTRUE" << endl;
    }
    else{
        cout << "\tFALSE" << endl;
    }
}
