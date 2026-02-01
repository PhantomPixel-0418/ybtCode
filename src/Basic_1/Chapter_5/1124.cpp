#include <bits/stdc++.h>
using namespace std;

int n, m, a[105][105], b[105][105];

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> b[i][j];
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}