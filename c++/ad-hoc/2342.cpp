//Overflow
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    char simbolo;
    int num, n1, n2;
    cin >> num;
    cin >> n1 >> simbolo >> n2;

    if (simbolo == '+')
    {
        if ((n1+n2) <= num) cout << "OK\n";
        else cout << "OVERFLOW\n";
    }
    else if (simbolo == '*') 
    {
        if ((n1*n2) <= num) cout << "OK\n";
        else cout << "OVERFLOW\n";
    }
    
    return 0;
}
