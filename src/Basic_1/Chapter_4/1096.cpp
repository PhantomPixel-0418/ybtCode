#include <bits/stdc++.h>
using namespace std;

int l, r;
int ans;

int main()
{
    cin >> l >> r;
    for (int i = l; i <= r; i++)
    {
        int tmp = i;
        while (tmp)
        {
            if (tmp % 10 == 2)
            {
                ans++;
            }
            tmp /= 10;
        }
    }
    cout << ans;
    return 0;
}