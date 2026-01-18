#include <bits/stdc++.h>
using namespace std;

int a[1005][1005], m, n;

int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] != 0)
            {
                cout << i << " " << j << " " << a[i][j] << endl;
                continue;
            }
        }
    }
    return 0;
}