#include <bits/stdc++.h>
using namespace std;

int n;
double ans = 1, sum = 1;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum *= j;
        }
        ans = ans + 1.0 / sum;
        sum = 1;
    }
    printf("%.10f", ans);
    return 0;
}