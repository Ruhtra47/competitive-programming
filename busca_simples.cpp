#include <bits/stdc++.h>
using namespace std;

int n;
int arr[11];

int main()
{
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    cin >> n;

    for (int i = 0; i < 10; i++)
        if (arr[i] == n)
        {
            cout << "SIM\n";
            return 0;
        }

    cout << "NAO\n";
}