#include <bits/stdc++.h>
using namespace std;

int n, a[1005];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int maxa = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            maxa = max(maxa, abs(a[j] - a[i]));
        }
    }
    cout << maxa << endl;
    return 0;
}