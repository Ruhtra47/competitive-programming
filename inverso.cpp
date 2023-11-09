#include <iostream>
using namespace std;

int n = 10;
int arr[11];

int main()
{
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << '\n';
}