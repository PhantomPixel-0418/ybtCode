#include <bits/stdc++.h>
using namespace std;

int n, a[105];

int main()
{
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if ((a[i] % 10 - ((a[i] / 1000) % 10) - (a[i] / 100 % 10) - (a[i] % 100 / 10)) > 0)
            cnt++;
    }
    cout << cnt;
    return 0;
}