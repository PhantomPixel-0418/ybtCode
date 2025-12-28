#include <bits/stdc++.h>
using namespace std;

int n;
long long ans = 0;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int tmp = i;
        int flag = 0;
        while (tmp)
        {
            if (tmp % 10 == 7)
            {
                flag = 1;
                break;
            }
            tmp /= 10;
        }
        if (flag == 0 && i % 7 != 0)
        {
            ans += i * i;
        }
    }
    cout << ans;
    return 0;
}