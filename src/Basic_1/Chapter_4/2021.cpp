#include <bits/stdc++.h>
using namespace std;

int m, n;

int main()
{
    cin >> m >> n;
    while (n)
    {
        int tmp = m;
        m = n;
        n = tmp % n;
    }
    cout << m;
    return 0;
}