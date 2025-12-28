#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin >> n;
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * 92;
        ans %= 100;
    }
    cout << ans;
    return 0;
}