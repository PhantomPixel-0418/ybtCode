#include <bits/stdc++.h>
using namespace std;

int x, y;

bool isprime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    cin >> x >> y;
    int ans = 0;
    for (int i = x; i <= y; i++)
    {
        if (isprime(i))
            ans++;
    }
    cout << ans << endl;
    return 0;
}