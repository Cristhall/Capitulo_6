#include <iostream> // De A a C
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
    int n, mov;
    cout << "\n\tTORRE DE HANOI - ITERATIVA\n";
    cout << "\n\tIngrese el numero de discos: ";
    cin >> n;
    mov = pow(2,n)-1;
    cout << "\tNumero de movimientos: " << mov << endl;
    char order[2][256];
    char pos[64];
    order[0]['A'] = 'B';
    order[0]['B'] = 'C';
    order[0]['C'] = 'A';
    order[1]['A'] = 'C';
    order[1]['B'] = 'A';
    order[1]['C'] = 'B';
    // 0 es el orden 1 es el orden inverso
    int index[64];
    // Determinar el orden de la trayectoria o el orden inverso
    int i, j, m;
    for(i = n; i > 0; i -= 2)
    index[i] = 1;
    for(i = n - 1; i > 0; i -= 2)
    index[i] = 0;
    memset(pos, 'A', sizeof(pos));
    for(i = 1; i < (1 << n); i ++)
    {
    for(m = 1, j = i; j%2 == 0; j/=2, m ++);
    cout << "Mover la torre " << m << " de: " << pos[m] << " ----> " << order[index[m]][pos[m]] << endl;
    pos[m] = order[index[m]][pos[m]];
    }
    return 0;
}
