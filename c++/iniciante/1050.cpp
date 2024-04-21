//DDD
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    int DDD[] = {61,71,11,21,32,19,27,31};
    string city[] = {"Brasilia","Salvador","Sao Paulo",
    "Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"};

    cin >> num;
    for (int i = 0; i < 8; i++)
    {
        if (num == DDD[i])
        {
            cout << city[i] << endl;
            return 0;
        }
        
    }
    
    cout << "DDD nao cadastrado\n";
    return 0;
}
