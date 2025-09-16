//WERTYU
#include <bits/stdc++.h>
using namespace std;

void solution(string& text);

int main(){
    string text;
    while (getline(cin, text))
    {
        solution(text);
        cout << "\n";
    }
    return 0;
}

void solution(string& text){
    //Cada chave é o erro de digitação, cada valor é o dígito correto;
    unordered_map<char, char> map{
        {'1','`'},{'2','1'},{'3','2'},{'4','3'},{'5','4'},{'6','5'},{'7','6'},
        {'8','7'},{'9','8'},{'0','9'},{'-','0'},{'=','-'},{'W','Q'},{'E','W'},
        {'R','E'},{'T','R'},{'Y','T'},{'U','Y'},{'I','U'},{'O','I'},{'P','O'},
        {'[','P'},{']','['},{'\\',']'},{'S','A'},{'D','S'},{'F','D'},{'G','F'},
        {'H','G'},{'J','H'},{'K','J'},{'L','K'},{';','L'},{'\'',';'},{'X','Z'},
        {'C','X'},{'V','C'},{'B','V'},{'N','B'},{'M','N'},{',','M'},{'.',','},
        {'/','.'},{' ',' '}
    };
    for (auto it : text)
        cout << map[it]; //Mostra no console o valor associado à it em map;
}
