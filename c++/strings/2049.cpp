//Números de Ahmoc
#include <bits/stdc++.h>

int main()
{
    std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    std::string assinatura, painel;

    int num{1};
    while (std::cin >> assinatura)
    {
        if (assinatura == "0") return 0;
        std::cin >> painel;
        if (num > 1) std::cout << "\n";
        if (painel.find(assinatura) != std::string::npos) std::cout << "Instancia " << num << "\nverdadeira\n";
        else std::cout << "Instancia " << num << "\nfalsa\n";
        num++;
    }
    
}
