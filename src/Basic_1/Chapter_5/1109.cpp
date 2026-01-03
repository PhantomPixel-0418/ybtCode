#include <bits/stdc++.h>
using namespace std;

int n, m;
bool lamp[5005];

int main()
{
    memset(lamp, 0, sizeof(lamp));
    cin >> n >> m;
    for (int i = 2; i <= m; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            lamp[j] = !lamp[j];
        }
    }
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!lamp[i])
        {
            if (flag)
                cout << ",";
            flag = 1;
            cout << i;
        }
    }
    return 0;
}