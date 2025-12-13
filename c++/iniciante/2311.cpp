//Saltos Ornamentais
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int participantes;
    cin >> participantes;

    for(int i{}; i < participantes; i++){
        float grau;
        string nome;
        cin >> nome >> grau;

        vector<float> notas;
        for(int it{}; it < 7; ++it){
            float nota;
            cin >> nota;
            notas.push_back(nota);
        }
        sort(notas.begin(), notas.end());
        float temp{};
        for(int it{1}; it < 6; ++it) temp += notas.at(it);
        
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << nome << " " << (temp*grau) << '\n';
    }
    
    return 0;
}
