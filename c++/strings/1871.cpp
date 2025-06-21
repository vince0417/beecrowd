//Zero vale Zero
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long n1{}, n2{};

    while (cin >> n1 >> n2)
    {
        if (n1+n2 == 0) break;

        string saida{};
        string soma = to_string(n1+n2); // Converte a soma dos inteiros em string;

        for (int i {}; i < soma.size(); i++) 
        {
            if (soma.at(i) != '0') saida.push_back(soma.at(i));
        }
        cout << saida << "\n";
    }
    
    return 0;
}
