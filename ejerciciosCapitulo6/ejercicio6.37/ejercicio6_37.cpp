#include <iostream>
using namespace std;
void fibonacci(int);
int main(){
    int n;
    cout << "\n\tSERIE FIBONACCI FORMA ITERATIVA\n\n";
    cout << "\tIngrese el rango a calcular: ";
    cin >> n;
    fibonacci(n);
    cout << endl;
    return 0;
}
void fibonacci(int n){
     int x = 0,y = 1,z = 1;
     cout << "\n\t" << z << " ";
     for (int i=1; i<n; i++){
        z = x + y;
        cout << z << " ";
        x = y;
        y = z;
     }
}
