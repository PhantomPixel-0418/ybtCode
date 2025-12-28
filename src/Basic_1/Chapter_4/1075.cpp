#include <bits/stdc++.h>
using namespace std;

int medicine, n, a[105];

int main()
{
    cin >> medicine >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] <= medicine)
        {
            medicine -= a[i];
        }
        else
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}