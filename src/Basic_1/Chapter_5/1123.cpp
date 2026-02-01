#include <bits/stdc++.h>
using namespace std;

int m, n;
bool a[105][105], b[105][105];

int main()
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    double ans = 0;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> b[i][j];
            if (a[i][j] == b[i][j])
            {
                ans++;
            }
        }
    }
    ans = 100.0 * ans / (m * n);
    printf("%.2lf", ans);
    return 0;
}