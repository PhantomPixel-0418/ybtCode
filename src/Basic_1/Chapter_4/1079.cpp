#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin >> n;
    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        double a = pow(-1, i - 1) * (1.0 / i);
        sum += a;
    }
    printf("%.4f", sum);
    return 0;
}