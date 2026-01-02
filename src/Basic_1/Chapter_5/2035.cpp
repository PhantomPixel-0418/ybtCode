#include <bits/stdc++.h>
using namespace std;

int n, a[55];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 2; i <= n && n > 1; i++)
    {
        cout << a[i] << " ";
    }
    cout << a[1];
    return 0;
}