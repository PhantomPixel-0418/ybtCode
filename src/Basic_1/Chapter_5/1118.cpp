#include <bits/stdc++.h>
using namespace std;

int n, x, y;
int a[10005] = {0}, b[10005] = {0}, g[10005] = {0}, k[10005] = {0};

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    cin >> x >> y;
    for (int i = n; i >= 1; i--)
    {
        if ((x >= a[i] && x <= a[i] + g[i]) && (y >= b[i] && y <= b[i] + k[i]))
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}