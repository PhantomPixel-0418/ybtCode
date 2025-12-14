#include <bits/stdc++.h>
using namespace std;

int n;

bool isprime(int x)
{
    if (x <= 1)
        return 0;
    if (x == 2)
        return 1;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int prime(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return i;
    }
    return x;
}

int main()
{
    cin >> n;
    if (isprime(n))
        printf("%d=%d", n, n);
    else
    {
        printf("%d=", n);
        while (n != 1)
        {
            int p = prime(n);
            printf("%d", p);
            n /= p;
            if (n != 1)
                printf("*");
        }
    }
    return 0;
}