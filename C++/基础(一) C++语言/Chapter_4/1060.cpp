#include <bits/stdc++.h>
using namespace std;

int n;
double a[105];

int main()
{
    cin >> n;
    double sum;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    double avg = 1.0 * sum / n;
    printf("%.4f", avg);
    return 0;
}