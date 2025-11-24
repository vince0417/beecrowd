//Léxico
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1, str2;
    cin >> str1 >> str2;
    if(str1.length() > str2.length()) swap(str1,str2); //Troca os valores das strings;

    int aux{}; //Para saber que a solução já foi encontrada e evitar mais de um return;
    for (size_t i {}; i < str1.length(); i++){
        if(str1.at(i) < str2.at(i)){
            cout << str1 << '\n' << str2 << '\n';
            aux = 1;
            break;
        }else if(str2.at(i) < str1.at(i)){
            cout << str2 << '\n' << str1 << '\n';
            aux = 1;
            break;
        }
    }
    
    if(aux == 0) cout << str1 << '\n' << str2 << '\n';
    return 0;
}

//Este algoritmo usa uma comparação de caracteres levando em conta sua posição na tabela ASCII;
//Para um maior entendimento do código busque pelo problema na plataforma beecrowd;