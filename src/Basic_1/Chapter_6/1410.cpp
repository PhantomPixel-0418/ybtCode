#include <bits/stdc++.h>
using namespace std;

int m, n;

int find(int x)
{
    int ans = 0;
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            ans = max(ans, i);
            while (x % i == 0)
                x /= i;
        }
    }
    if (x > 1)
        ans = max(ans, x);
    return ans;
}

int main()
{
    cin >> m >> n;
    int ans = 0;
    for (int i = m; i < n; i++)
    {
        cout << find(i) << ",";
    }
    cout << find(n);
    return 0;
}