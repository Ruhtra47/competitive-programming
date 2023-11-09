#include <bits/stdc++.h>
using namespace std;

int n1, n2;

int main()
{
    cin >> n1;
    cin >> n2;

    int media = (n1 * 2 + n2 * 3) / 5;

    if (media >= 7)
    {
        cout << "Aprovado\n";
    }
    else if (media < 3)
    {
        cout << "Reprovado\n";
    }
    else
    {
        cout << "Final\n";
    }
}