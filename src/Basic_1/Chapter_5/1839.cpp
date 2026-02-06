#include <bits/stdc++.h>
using namespace std;

int n;
struct student
{
    string n;
    int ap, cp, ws;
    char im, is;
} a[105];

int main()
{
    cin >> n;
    string maxname;
    int maxmoney = INT_MIN, sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int money = 0;
        cin >> a[i].n >> a[i].ap >> a[i].cp >> a[i].im >> a[i].is >> a[i].ws;
        if (a[i].ap > 80 && a[i].ws >= 1)
            money += 8000;
        if (a[i].ap > 85 && a[i].cp > 80)
            money += 4000;
        if (a[i].ap > 90)
            money += 2000;
        if (a[i].ap > 85 && a[i].is == 'Y')
            money += 1000;
        if (a[i].cp > 80 && a[i].im == 'Y')
            money += 850;
        if (money > maxmoney)
        {
            maxmoney = money;
            maxname = a[i].n;
        }
        sum += money;
    }
    cout << maxname << endl
         << maxmoney << endl
         << sum;
    return 0;
}