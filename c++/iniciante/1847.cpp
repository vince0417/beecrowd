//Bem-vindos e Bem-vindas ao Inverno!
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t1{}, t2{}, t3{}; // Temperaturas no dia 1, 2 e 3, respectivamente;
    cin >> t1 >> t2 >> t3;

    if(t1 > t2){
        if(t3 >= t2) cout << ":)\n";
        else if(t3 < t2 && (t1-t2) > (t2-t3)) cout << ":)\n";
        else if(t3 < t2 && (t1-t2) <= (t2-t3)) cout << ":(\n";
    }else if(t1 < t2){
        if(t3 <= t2) cout << ":(\n";
        else if(t3 > t2 && (t2-t1) > (t3-t2)) cout << ":(\n";
        else if(t3 > t2 && (t2-t1) <= (t3-t2)) cout << ":)\n";
    }else if(t1 == t2){
        if(t3 > t2) cout << ":)\n";
        else cout << ":(\n";
    }

    return 0;
}

// Para entender melhor este código, busque ler o problema na plataforma Beecrowd;