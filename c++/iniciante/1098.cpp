//Sequencia IJ 4
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    vector<float> vetorI(3, 0.0), vetorJ{1.0,2.0,3.0};

    
    while (vetorI.at(0) < 2.2)
    {
        if (vetorJ.at(0)/vetorJ.at(0) == 1.0)
        {
            for (int i = 0; i < 3; i++)
            {
                cout << "I=" << vetorI.at(i) << " ";
                cout << "J=" << vetorJ.at(i) << endl;
            }
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                cout.precision(1);
                cout.setf(ios::fixed);
                cout << "I=" << vetorI.at(i) << " ";
                cout << "J=" << vetorJ.at(i) << endl;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            vetorI.at(i) += 0.2;
            vetorJ.at(i) += 0.2;
        }
    }
    
    return 0;
}
