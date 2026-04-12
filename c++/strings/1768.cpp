//Árvore de Natal
#include <bits/stdc++.h>
using namespace std;

void arvore(int, int, int);
void base(int, int);

int main(){
    int num{};
    while(cin >> num){
        int folhas{1};
        int espacos = (num/2);
        arvore(espacos,folhas,num);
        base(espacos,folhas);
        cout << '\n';
    }
    
    return 0;
}

void arvore(int espacos, int folhas, int num){
    while(folhas <= num){
        for(int i = 0; i < espacos; i++) cout << ' ';
        for(int i = 0; i < folhas; i++) cout << '*';
        cout << '\n';
        folhas += 2;
        espacos--;
    }
}

void base(int espacos, int folhas){
     while(folhas <= 3){
        for(int i = 0; i < espacos; i++) cout << ' ';
        for(int i = 0; i < folhas; i++) cout << '*';
        cout << '\n';
        folhas += 2;
        espacos--;
    }
}
