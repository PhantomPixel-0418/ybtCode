#include <bits/stdc++.h>
using namespace std;

int n, m, a[105];

int main()
{
    cin >> n >> m;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == m)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}