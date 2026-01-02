#include <bits/stdc++.h>
using namespace std;

int n;
bool a[1005];

int main()
{
    cin >> n;
    memset(a, true, sizeof(a));
    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            a[j] = !a[j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i])
            cout << i << " ";
    }
    return 0;
}