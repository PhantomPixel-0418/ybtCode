#include <bits/stdc++.h>
using namespace std;

int n, a[20005];
bool tong[5005];

int main()
{
    memset(tong, 1, sizeof(tong));
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (tong[a[i]])
            cout << a[i] << " ";
        tong[a[i]] = 0;
    }
    return 0;
}