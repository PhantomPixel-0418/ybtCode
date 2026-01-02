#include <bits/stdc++.h>
using namespace std;

int n;
bool a[1005];

int main()
{
    cin >> n;
    memset(a, true, sizeof(a));
    for (int i = 3; i <= n; i++)
    {
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                a[i] = false;
                break;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i])
            cout << i << endl;
    }
    return 0;
}