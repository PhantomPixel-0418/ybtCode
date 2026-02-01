#include <bits/stdc++.h>
using namespace std;

int m, n, a[105][105];

int main()
{
    cin >> m >> n;
    int ans = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
            if (i == 1 || i == m || j == 1 || j == n)
                ans += a[i][j];
        }
    }
    cout << ans;
    return 0;
}