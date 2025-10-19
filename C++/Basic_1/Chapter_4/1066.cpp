#include <bits/stdc++.h>
using namespace std;

int m, n;

int main()
{
    cin >> m >> n;
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        if (i % 17 == 0)
            sum += i;
    }
    cout << sum << endl;
    return 0;
}