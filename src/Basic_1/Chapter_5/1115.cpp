#include <bits/stdc++.h>
using namespace std;

int n, a[10005], tong[100005];

int main()
{
    cin >> n;
    int maxa = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxa = max(a[i], maxa);
    }
    for (int i = 1; i <= n; i++)
    {
        tong[a[i]]++;
    }
    for (int i = 0; i <= maxa; i++)
    {
        cout << tong[i] << endl;
    }
    return 0;
}