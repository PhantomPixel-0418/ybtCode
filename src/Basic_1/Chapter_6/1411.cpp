#include <bits/stdc++.h>
using namespace std;

int n, m;
queue<int> q;

bool isprime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

bool resverseprime(int x)
{
    int y = 0, z = x;
    while (z)
    {
        y = y * 10 + z % 10;
        z /= 10;
    }
    return isprime(y);
}

int main()
{
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        if (isprime(i) && resverseprime(i))
            q.push(i);
    }
    if (q.empty())
    {
        cout << "No";
        return 0;
    }
    cout << q.front();
    q.pop();
    while (!q.empty())
    {
        cout << "," << q.front();
        q.pop();
    }
    return 0;
}