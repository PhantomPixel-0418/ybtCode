#include <bits/stdc++.h>
using namespace std;

#define int long long

int n, a[1005], b[1005];

signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += a[i] * b[i];
    }
    cout << ans;
    return 0;
}