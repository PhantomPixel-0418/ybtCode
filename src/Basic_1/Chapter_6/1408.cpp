#include <bits/stdc++.h>
using namespace std;

int n;

bool isprime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

bool isresverse(int x)
{
    int y = 0, z = x;
    while (z)
    {
        y = y * 10 + z % 10;
        z /= 10;
    }
    return x == y;
}

int main()
{
    cin >> n;
    int ans = 0;
    for (int i = 11; i <= n; i++)
    {
        if (isprime(i) && isresverse(i))
            ans++;
    }
    cout << ans << endl;
    return 0;
}