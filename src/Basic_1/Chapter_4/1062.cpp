#include <bits/stdc++.h>
using namespace std;

int n, a[105];

int main()
{
    cin >> n;
    int maxa = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxa = max(a[i], maxa);
    }
    cout << maxa;
    return 0;
}