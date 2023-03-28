#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
int redondeo (int);
int main(){
    int num;
    srand(time(NULL));
    cout << endl;
    for (int i=1; i<=10; i++){
        num = 1 + rand()%(10);
        cout << redondeo(num) << endl;
    }
    return 0;
}
int redondeo (int x){
    for (int i=1; i<=10; i++){
        cout << "\tEl numero " << x << " redondeado es: ";
        return floor (x + 0.5);
    }
}
