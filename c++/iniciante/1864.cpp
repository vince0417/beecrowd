//Nossos Dias Nunca Voltarão
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    string citacao {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    for (int i = 0; i < num; i++)
    {
        cout << citacao.at(i);
        if (i == (num-1)) cout << endl;
    }
    
    return 0;
}
