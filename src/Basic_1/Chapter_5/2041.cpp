#include <bits/stdc++.h>
using namespace std;

int n, a[25][25];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (i == j || n + 1 - i == j)
                a[i][j] += 10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}