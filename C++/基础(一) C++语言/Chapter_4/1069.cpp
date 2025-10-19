#include <bits/stdc++.h>
using namespace std;

int a, n;

int main()
{
    cin >> a >> n;
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= a;
    }
    cout << ans << endl;
    return 0;
}