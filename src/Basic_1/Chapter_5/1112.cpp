#include <bits/stdc++.h>
using namespace std;

int m, a[10005];

int main()
{
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + m + 1);
    cout << a[m] - a[1];
    return 0;
}