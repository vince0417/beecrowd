//Hora do Café
#include <bits/stdc++.h>
using namespace std;

void verifica(vector<int>& natan, vector<int>& samuel, int& bolinhos){
    auto it = remove(natan.begin(), natan.end(), 0); //Move todos os 0's para o final do conteiner, com it apontando para a primeira ocorrencia;
    natan.erase(it,natan.end()); //Elimina todos os elementos a partir de it, ou seja, todos os zeros;

    it = remove(samuel.begin(), samuel.end(), 0);
    samuel.erase(it,samuel.end());

    if(bolinhos == natan.size()) cout << "Tudo certo." << '\n';
    else if(bolinhos == samuel.size()) cout << "Pegou de Samuel." << '\n';
    else cout << "Pegou de um estranho." << '\n';
    return;
}

int main(){
    int itens{}, bolinhos{};
    cin >> itens >> bolinhos;

    vector<int> natan(itens);
    vector<int> samuel(itens);
    for(int i{}; i < itens; i++) cin >> natan.at(i);
    for(int i{}; i < itens; i++) cin >> samuel.at(i);

    verifica(natan,samuel,bolinhos);
    return 0;
}

//Observe, leia o problema na plataforma beecrowd, para melhor entender este código;