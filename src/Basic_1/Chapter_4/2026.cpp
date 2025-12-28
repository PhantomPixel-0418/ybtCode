#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;

signed main()
{
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int sum = 1;
        for (int j = 1; j <= i; j++)
        {
            sum *= j;
        }
        ans += sum;
    }
    cout << ans;
    return 0;
}