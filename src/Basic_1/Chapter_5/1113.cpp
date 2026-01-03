#include <bits/stdc++.h>
using namespace std;

#define int long long

int n, a[105];

signed main()
{
    cin >> n;
    int maxa = INT_MIN, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxa = max(a[i], maxa);
    }
    for (int i = 1; i <= n; i++)
        if (a[i] != maxa)
            sum += a[i];
    cout << sum;
    return 0;
}