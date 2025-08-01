//Converter para Hexadecimal
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> hexaNumbers{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int num{}; // Número que será convertido;
    cin >> num;

    if (num <= 15) cout << hexaNumbers.at(num) << "\n";
    else if (num == 16) cout << 10 << "\n";
    else{
        vector<int> restos;
        while (num >= 16)
        {
            restos.push_back(num%16); // Guardamos o resto de cada divisão, pois é o vai formar nosso número hexadecimal;
            num /= 16;
            if (num < 16) restos.push_back(num);
        }
        reverse(restos.begin(), restos.end()); // Invertemos o início e fim;
        for (int i : restos)
            cout << hexaNumbers.at(i);
        cout << "\n";
    }
    return 0;
}
