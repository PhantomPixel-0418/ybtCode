#include <bits/stdc++.h>
using namespace std;

int n;

bool is_prime(int x)
{
    if (x < 2)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0 && is_prime(n / i))
        {
            cout << n / i;
            return 0;
        }
    }
    cout << n;
    return 0;
}