#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
int main(){
    int num;
    srand(time(NULL));
    cout << "\n\tValores en el rango 1 <= n <= 2" << endl;
    for(int a = 1; a < 5; a++){
        num = 1 + rand() %2;
        cout << "\t"<< num<< " " << endl;
    }
    cout << "\n\tValores en el rango 1 <= n <= 100" << endl;
    for(int b = 1; b < 5; b++){
        num = 1 + rand() %100;
        cout << "\t"<< num<< " " << endl;
    }
    cout << "\n\tValores en el rango 0 <= n <= 9" << endl;
    for(int c = 1; c < 5; c++){
        num = rand() %10;
        cout << "\t"<< num<< " " << endl;
    }
    cout << "\n\tValores en el rango 1000 <= n <= 1112" << endl;
    for(int d = 1; d < 5; d++){
        num = 1000 + rand() %1112;
        cout << "\t"<< num<< " " << endl;
    }
    cout << "\n\tValores en el rango -1 <= n <= 1" << endl;
    for(int e = 1; e < 5; e++){
        num = -1 + rand() %3;
        cout << "\t"<< num<< " " << endl;
    }
    cout << "\n\tValores en el rango -3 <= n <= 11" << endl;
    for(int f = 1; f < 5; f++){
        num = -3 + rand() %11;
        cout << "\t"<< num<< " " << endl;
    }
    return 0;
}


