#include <bits/stdc++.h>
using namespace std;

int n, m, a[105][105], ans[105][105];

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (i == 1 || i == n || j == 1 || j == m)
            {
                ans[i][j] = a[i][j];
            }
        }
    }
    for (int i = 2; i <= n - 1; i++)
    {
        for (int j = 2; j <= m - 1; j++)
        {
            ans[i][j] = round((a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1] + a[i][j]) / 5.0);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}