#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;
int tmp = 1, ans = 0;

signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        tmp = (tmp * i) % 1000000;
        ans = (ans + tmp) % 1000000;
    }
    cout << ans;
    return 0;
}