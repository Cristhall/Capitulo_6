#include <iostream>
using namespace std;
int misterio(int, int);
int main(){
    int x = 0, y =0;
    cout << "Escrida el primer numero: ";
    cin >> x;
    cout << "Escrida el segundo numero: ";
    cin >> y;
    cout << "el resultado es " << misterio(x,y) << endl;
}
int misterio(int a, int b){
    if(b==1 || b==0){
        return a;
    }
    else{
        if(b < 0){
            b = b * (-1);
            return a + misterio(a, b - 1);
        }
        else{
            return a + misterio(a, b - 1);
        }
    }
}
