#include <bits/stdc++.h>
using namespace std;

int s;

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
    cin >> s;
    int ans = 0;
    for (int i = 2; i <= s; i++)
    {
        if (isprime(i) && isprime(s - i))
        {
            ans = max(ans, i * (s - i));
        }
    }
    cout << ans << endl;
    return 0;
}