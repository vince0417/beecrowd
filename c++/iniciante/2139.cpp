//Natal de Pedrinho
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mes{}, dia{};
    vector<int> meses = {31,29,31,30,31,30,31,31,30,31,30,31};
    
    while (cin >> mes >> dia)
    {
        if (mes == 12){
            if (dia > 25) cout << "Ja passou!\n";
            if (dia == 24) cout << "E vespera de natal!\n";
            if (dia == 25) cout << "E natal!\n";
            continue;
        }
        
        int tempoRestante = meses.at(mes-1)-dia;
    
        for (int i = mes; i < meses.size(); i++)
            tempoRestante += meses.at(i);
    
        tempoRestante -= 6;
        cout << "Faltam " << tempoRestante << " dias para o natal!\n";
    }   
    
    return 0; 
}
