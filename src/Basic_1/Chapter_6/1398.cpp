#include <bits/stdc++.h>
using namespace std;

int n, a[1005];

int message(int count)
{
    int money = 0;
    money = ceil(count / 70.0);
    return money;
}

double summoney(int times)
{
    int sum = 0;
    for (int i = 1; i <= times; i++)
        sum += message(a[i]);
    return sum * 0.1;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << fixed << setprecision(1) << summoney(n);
    return 0;
}