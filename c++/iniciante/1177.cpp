//Preenchimento de Vetor II
#include <iostream>
using namespace std;

int main () {
    int  cont = 0, num, n[1000];
    cin >> num;

    for (int i = 0; i < 1000; i++)
    {
        cout << "N[" << i << "] = " << cont << endl;
        if (cont + 1 == num)
        {
            cont = 0;
            continue;
        }
        cont++;
    }
    
    return 0;
}
