//Carta de Natal Criptografada
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string linhaCarta{};
    
    while (getline(cin, linhaCarta))
    {
            for (int i {}; i < linhaCarta.size(); i++)
            {
                switch (linhaCarta.at(i))
                {
                case '@':
                    linhaCarta.at(i) = 'a';
                    continue;
                case '&':
                    linhaCarta.at(i) = 'e';
                    continue;
                case '!':
                    linhaCarta.at(i) = 'i';
                    continue;
                case '*':
                    linhaCarta.at(i) = 'o';
                    continue;
                case '#':
                    linhaCarta.at(i) = 'u';
                }
            }
            cout << linhaCarta << "\n";
    }
    
    return 0;
}
