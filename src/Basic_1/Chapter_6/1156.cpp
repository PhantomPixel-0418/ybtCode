#include <bits/stdc++.h>
using namespace std;

double arctanx(double x)
{
    double sum = 0.0;
    double term = x;
    int n = 1;
    while (fabs(term) >= 1e-6)
    {
        sum += term;
        n += 2;
        term = -term * x * x * (n - 2) / n;
    }
    return sum;
}

int main()
{
    double x = 1.0 / sqrt(3.0);
    double pi = arctanx(x) * 6.0;
    printf("%.10lf", pi);
    return 0;
}