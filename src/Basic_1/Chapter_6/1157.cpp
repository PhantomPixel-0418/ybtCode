#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool divide22primes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i) && isprime(n - i))
        {
            cout << n << "=" << i << "+" << n - i << endl;
            return true;
        }
    }
    return false;
}

int main()
{
    for (int i = 6; i <= 100; i += 2)
    {
        divide22primes(i);
    }
    return 0;
}