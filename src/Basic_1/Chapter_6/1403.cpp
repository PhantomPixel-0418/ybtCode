#include <bits/stdc++.h>
using namespace std;

int n;

bool isprime(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

void findpair(int x)
{
    int count = 0;
    for (int i = 2; i <= x; i++)
    {
        if (isprime(i) && isprime(i - 2))
        {
            cout << i - 2 << " " << i << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "empty";
    return;
}

int main()
{
    cin >> n;
    findpair(n);
    return 0;
}