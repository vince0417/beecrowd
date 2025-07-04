//Ida à Feira
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int casos{}; // Quantas vezes sua tia foi a feira;
    cin >> casos;

    for (int i {}; i < casos; i++)
    {
        vector<float> precos{}; // Recebe os preços por kg das frutas/legumes disponíveis;
        vector<string> frutasLegumes{}; // Recebe as frutas/legumes disponíveis;

        int disponiveis{}; // Recebe o total de frutas/legumes disponíveis;
        cin >> disponiveis;
        for (int d = 0; d < disponiveis; d++)
        {
            string fruta{}; // Fruta/legume disponível;
            float preco{}; // Preço por kg da fruta/legume disponível;
            cin >> fruta >> preco;
            frutasLegumes.push_back(fruta);
            precos.push_back(preco);
        }
        
        int lista{}; // Quantas frutas/legumes tem na lista de sua tia;
        float valorTotal{}; // Recebe o valor total gasto com todas as frutas/legumes da lista;
        cin >> lista;
        for (int l = 0; l < lista; l++)
        {
            string fruta{};
            int quantidade{}; // Recebe a quantidade em kg da fruta acima, comprada por sua tia;
            cin >> fruta >> quantidade;
            for (int x = 0; x < frutasLegumes.size(); x++) // Passa pela lista de frutas disponíveis e seus respectivos preços por kg; 
            {
                if (fruta == frutasLegumes.at(x)){
                    valorTotal += (quantidade*precos.at(x));
                    break;
                } 
            }
            
        }
        
        cout.precision(2);
        cout.setf(ios::fixed);
        cout << "R$ " << valorTotal << "\n";
    }
    
    return 0;
}
