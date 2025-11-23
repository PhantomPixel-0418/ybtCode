#include <bits/stdc++.h>
using namespace std;

int n;

struct stu
{
    int ssy, szy;
} a[105];

int main()
{
    cin >> n;
    int ans = -1;
    int tmp = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].ssy >> a[i].szy;
        if (a[i].ssy >= 90 && a[i].ssy <= 140 && a[i].szy >= 60 && a[i].szy <= 90)
        {
            tmp++;
            if (tmp > ans)
                ans = tmp;
        }
        else
        {
            tmp = 0;
        }
    }
    cout << ans;
    return 0;
}