#include <bits/stdc++.h>
using namespace std;

int a, b, n;

int main()
{
    cin >> a >> b >> n;
    int ans;
    for (int i = 1; i <= n; i++)
    {
        a *= 10;
        ans = a / b;
        a = a % b;
    }
    cout << ans;
    return 0;
}