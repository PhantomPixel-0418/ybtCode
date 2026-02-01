#include <bits/stdc++.h>
using namespace std;

int n, i, j;

int main()
{
    cin >> n >> i >> j;
    for (int k = 1; k <= n; k++)
    {
        cout << "(" << i << "," << k << ") ";
    }
    cout << endl;
    for (int k = 1; k <= n; k++)
    {
        cout << "(" << k << "," << j << ") ";
    }
    cout << endl;
    for (int k = 1; k <= n; k++)
    {
        if ((k - i + j) >= 1 && (k - i + j) <= n)
        {
            cout << "(" << k << "," << k - i + j << ") ";
        }
    }
    cout << endl;
    for (int k = n; k >= 1; k--)
    {
        if ((i + j - k) >= 1 && (i + j - k) <= n)
        {
            cout << "(" << k << "," << i + j - k << ") ";
        }
    }
    return 0;
}