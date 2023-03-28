#include <iostream>
using namespace std;
void esPerfecto(int num);
int main()
{
	int num = 1;
	int e = 0;
	int v[999];
	cout<<"\n\tNUMEROS PERFECTOS"<<endl;
	cout<<"\tLa sumatoria de sus divisores es igual a si mismo"<<endl;
	while (num<=1000){
        v[e]=num;
        num = num+1;
        esPerfecto(v[e]);
        e++;
    }
    cout << endl;
	return 0;
}
void esPerfecto(int num){
    int div=0;
    for (int i=1; i<num; i++){
		if (num%i==0)
			div +=i;
	}
	if (num==div)
	{
		cout << "\n\t" << num;
	}
}
