#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin >> n;
    long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    cout << ans << endl;
    return 0;
}