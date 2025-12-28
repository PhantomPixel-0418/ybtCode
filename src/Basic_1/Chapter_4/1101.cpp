#include <bits/stdc++.h>
using namespace std;

int a, b, c, ans = 0;

int main()
{
    cin >> a >> b >> c;
    for (int x = 0; a * x <= c; x++)
    {
        for (int y = 0; b * y <= c; y++)
        {
            if (a * x + b * y == c)
            {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}