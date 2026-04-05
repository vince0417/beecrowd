//Nem Tudo é Greve
#include <bits/stdc++.h>
using namespace std;

bool ehPrimo(int); //Protótipo;

int main(){
    int nums;
    cin >> nums;

    set<int> primos; //Irá guardar os números primos, sem repetições;
    for (int i{}; i < nums; i++){
        int num;
        cin >> num;
        if(num == 1 || num == 0) continue; //Uma vez que o menor primo é 2;
        if(ehPrimo(num) == false) primos.insert(num);
    }

    cout << primos.size() << '\n';
    int aux{1};
    for(int it : primos){
        if(aux < primos.size()) cout << it << ", ";
        else cout << it << ".\n";
        aux++;
    }

    if(primos.empty()) cout << '\n';
    return 0;
}

//Verifica se é primo;
bool ehPrimo(int num){
    for (int x = 2; x*x < num; x++){
        if (num%x == 0) {
            return true;
        }
    }
    return false;
}
