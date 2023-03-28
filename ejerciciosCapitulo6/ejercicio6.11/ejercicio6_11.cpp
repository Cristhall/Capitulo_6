#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "\n\ta. " << fabs(7.5) << endl;
    cout << "\tb. " << floor(7.5) << endl;
    cout << "\tc. " << fabs(0.0) << endl;
    cout << "\td. " << ceil(0.0) << endl;
    cout << "\te. " << fabs(-6.4) << endl;
    cout << "\tf. " << ceil(-6.4) << endl;
    cout << "\tg. " << ceil(-fabs(-8 + floor(-5.5)));


    return 0;
}
