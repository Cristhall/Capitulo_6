#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main(){
    int num, num1, num2;
    srand(time(NULL));
    cout << "\n\tConjuntos" << endl;
    for(int a = 0; a < 1; a++){
        num = (1+rand()%5)*2;
        num1 = ((1+rand()%5)*2)+1;
        num2 = (((1+rand()%5)*2)+1)*2;
        cout << "\n\ta. " << num << endl;
        cout << "\n\tb. " << num1 << endl;
        cout << "\n\tc. " << num2 << endl;
    }

    return 0;
}
