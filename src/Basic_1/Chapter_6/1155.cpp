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

bool isreverse(int n)
{
    int rev = 0;
    int tmp = n;
    while (tmp)
    {
        rev *= 10;
        rev += tmp % 10;
        tmp /= 10;
    }
    return rev == n;
}

int main()
{
    for (int i = 100; i <= 999; i++)
    {
        if (isprime(i) && isreverse(i))
            cout << i << endl;
    }
    return 0;
}