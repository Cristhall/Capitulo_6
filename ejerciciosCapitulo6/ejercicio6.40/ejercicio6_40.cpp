#include <iostream>
#include <iomanip>
using namespace std;
unsigned long factorial(unsigned long);
int main(){
    for(unsigned int contador = 0; contador<=10; ++contador){
        cout << setw(4) << contador << "! = " << factorial(contador) << "\n\n";
    }
}
unsigned long factorial(unsigned long numero){
    if(numero<=1){
        return 1;
    }
    else{
        cout << numero << endl << "\t";
        return numero * factorial(numero-1);
    }
}

