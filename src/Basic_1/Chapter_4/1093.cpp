#include <bits/stdc++.h>
using namespace std;

double x;
int n;
double ans = 1, sum = 1;

int main()
{
    cin >> x >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum = 1.0 * sum * x;
        }
        ans = ans + 1.0 * sum;
        sum = 1;
    }
    printf("%.2f", ans);
    return 0;
}