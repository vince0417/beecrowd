//Soma Natural
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int inicio {}, fim {};
    cin >> inicio >> fim;
    
    unsigned long int soma {};
    for (int i {inicio}; i <= fim; i++) soma += i;
    
    cout << soma << endl;
    return 0;
}
