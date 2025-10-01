//Minha Senha Provisória
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num; //Casos de teste;
    cin >> num;
    for (size_t i = 0; i < num; i++) {
        string registro;
        cin >> registro;
        string temp = registro.substr(0,2);
        if (registro.length() < 20 || temp != "RA" || registro.find('0') == string::npos){
            cout << "INVALID DATA\n";
            continue;
        }
        int aux{};
        for (size_t it {2}; it < registro.length(); it++)
        {
            if (registro.at(it) != '0') ++aux;
            if (aux >= 1) cout << registro.at(it);
        }
        cout << "\n";
    }
    
    return 0;
}

//Observe: Leia o que o problema pede que você entenderá o código;