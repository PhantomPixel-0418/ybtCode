#include <bits/stdc++.h>
using namespace std;

int days, ans, n, l;

int main()
{
    cin >> days;
    for (int i = 1; i <= days; i++)
    {
        if (l == 0)
        {
            n++;
            l = n;
        }
        ans += n;
        l--;
    }
    cout << ans;
    return 0;
}