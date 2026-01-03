#include <bits/stdc++.h>
using namespace std;

int n, a[10005], x;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> x;
    for (int i = 1; i <= n; i++)
        if (a[i] == x)
        {
            cout << i;
            return 0;
        }
    cout << -1;
    return 0;
}