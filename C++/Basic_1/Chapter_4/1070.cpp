#include <bits/stdc++.h>
using namespace std;

double x, n;

int main()
{
    cin >> x >> n;
    double ans = x;
    for (int i = 1; i <= n; i++)
        ans *= 1.001;
    printf("%.4f\n", ans);
    return 0;
}