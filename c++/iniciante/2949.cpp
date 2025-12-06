//A Sociedade do Anel
#include <bits/stdc++.h>
using namespace std;

int main() {
    int alistados{}; // Quantos recrutas alistaram-se;
    cin >> alistados;

    int total[5]; // Guarda o total de cada raça;
    char racas[5][10] = {"Hobbit(s)","Humano(s)","Elfo(s)","Anao(oes)","Mago(s)"};
    for (int i{}; i < alistados; ++i){
        char raca{}; // Raça do recruta;
        string nome; // Nome do recruta;
        cin >> nome >> raca;
        switch(raca){
            case 'X':
                total[0]++;
                break;
            case 'H':
                total[1]++;
                break;
            case 'E':
                total[2]++;
                break;
            case 'A':
                total[3]++;
                break;
            case 'M':
                total[4]++;
        }
    }
    
    for (int i{}; i < 5; ++i){
        cout << total[i] << " " << racas[i] << '\n';
    }

    return 0;
}
