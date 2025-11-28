//Atalhos Bloggo
#include <bits/stdc++.h>
using namespace std;

int main() {
    string texto; // Texto que será passado para HTML;
    while (getline(cin,texto)){
        int underline{}, asterisco{}; // Sera usado para marcar inicio e fim da tag;
        for(size_t i{}; i < texto.length(); i++){
            if(texto.at(i) == '*'){
                if(asterisco == 0){
                    texto.erase(texto.begin() + i); // Retiramos o asterísco para dar lugar a tag;
                    texto.insert(i,"<b>"); // Insere a tag no texto, onde, outrora, era um asterísco;
                    asterisco = 1; // Sinaliza que foi aberto uma tag;
                }else{
                    texto.erase(texto.begin() + i);
                    texto.insert(i,"</b>");
                    asterisco = 0; // Sinaliza que não tem tag aberta;
                }
            }

            if(texto.at(i) == '_'){
                if(underline == 0){
                    texto.erase(texto.begin() + i);
                    texto.insert(i,"<i>");
                    underline = 1;
                }else{
                    texto.erase(texto.begin() + i);
                    texto.insert(i,"</i>");
                    underline = 0;
                }
            }
        }
        
        cout << texto << '\n';
    }
    
    return 0;
}
