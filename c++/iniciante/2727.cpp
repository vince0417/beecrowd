//Código Secreto
#include <bits/stdc++.h>
using namespace std;

void alfabeto (string &codigo)
{
    //Guarda cada letra(chave) do alfabeto e seu respectivo código(valor);
    map<char, string> letras{
        {'a',"."}, {'b',".."},
        {'c',"..."}, {'d',". ."},
        {'e',".. .."}, {'f',"... ..."},
        {'g',". . ."}, {'h',".. .. .."},
        {'i',"... ... ..."}, {'j',". . . ."},
        {'k',".. .. .. .."}, {'l',"... ... ... ..."},
        {'m',". . . . ."}, {'n',".. .. .. .. .."},
        {'o',"... ... ... ... ..."}, {'p',". . . . . ."},
        {'q',".. .. .. .. .. .."}, {'r',"... ... ... ... ... ..."},
        {'s',". . . . . . ."}, {'t',".. .. .. .. .. .. .."},
        {'u',"... ... ... ... ... ... ..."}, {'v',". . . . . . . ."},
        {'w',".. .. .. .. .. .. .. .."}, {'x',"... ... ... ... ... ... ... ..."},
        {'y',". . . . . . . . ."}, {'z',".. .. .. .. .. .. .. .. .."},
    };

    for (auto it : letras){
        if (codigo == it.second) cout << it.first << "\n";
    }
}

int main()
{
    int num{};
    string codigo{};

    while (cin >> num)
    {
        cin.ignore();
        for (int i = 0; i < num; i++)
        {
            int cont{};
            getline(cin, codigo);
            alfabeto(codigo);
            codigo.clear(); //Limpa a codigo para usarmos novamente;
        }
    }
    return 0;
}
