#include <bits/stdc++.h>
using namespace std;

long long n, a[10005];

int main()
{
    cin >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    double avg = 1.0 * sum / n;
    printf("%lld %.5f", sum, avg);
    return 0;
}