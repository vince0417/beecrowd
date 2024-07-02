//Boa divisão
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n1;
    int n2;
    cin >> n1 >> n2;

    float divisao = (n1/n2);
    
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << divisao << endl;
    return 0;
}
