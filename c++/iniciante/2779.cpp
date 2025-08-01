//Álbum da Copa
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int album{}, compradas{}; // Total de de figuras que cabem no álbum(album), figuras compradas(compradas); 
    cin >> album >> compradas;

    unordered_set<int> figurinhas; // Guardará as figurinhas compradas sem repetição;
    for (int i {}; i < compradas; i++)
    {
        int figura{};
        cin >> figura;
        figurinhas.insert(figura); // Insere a figura, caso ela não exista;
    }
    cout << album-figurinhas.size() << endl; // Quantas figuras faltam para completar o album;
    return 0;
}
