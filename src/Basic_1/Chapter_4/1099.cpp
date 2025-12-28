#include <bits/stdc++.h>
using namespace std;

int n;
int prime[10005];

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
    int pos = 0;
    for (int i = 2; pos < n; i++)
    {
        if (is_prime(i))
        {
            prime[pos] = i;
            pos++;
        }
    }
    cout << prime[pos - 1];
    return 0;
}