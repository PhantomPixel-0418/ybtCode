#include <bits/stdc++.h>
using namespace std;

int n, ans = 0;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int tmp = i;
        while (tmp)
        {
            if (tmp % 10 == 1)
            {
                ans++;
            }
            tmp /= 10;
        }
    }
    cout << ans;
    return 0;
}