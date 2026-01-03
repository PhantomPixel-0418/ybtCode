#include <bits/stdc++.h>
using namespace std;

int n, m, a[105];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> m;
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (a[i] == m)
            ans++;
    cout << ans;
    return 0;
}