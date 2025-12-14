#include <bits/stdc++.h>
using namespace std;

int a, b;

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

int main()
{
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isprime(i))
            cout << i << "\n";
    }
    return 0;
}