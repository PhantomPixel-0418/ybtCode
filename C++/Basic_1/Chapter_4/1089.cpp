#include <bits/stdc++.h>
using namespace std;

long long n, ans = 0;

int main()
{
    cin >> n;
    while (n)
    {
        ans *= 10;
        ans += n % 10;
        n /= 10;
    }
    if (n < 0)
    {
        ans *= -1;
    }
    cout << ans;
    return 0;
}