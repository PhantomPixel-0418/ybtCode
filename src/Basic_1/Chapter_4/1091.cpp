#include <bits/stdc++.h>
using namespace std;

int n;
long long ans = 0, sum = 1;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum *= j;
        }
        ans += sum;
        sum = 1;
    }
    cout << ans;
    return 0;
}