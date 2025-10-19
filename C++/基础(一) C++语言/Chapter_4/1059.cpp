#include <bits/stdc++.h>
using namespace std;

int n, a[105];

int main()
{
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    double avg = 1.0 * sum / n;
    printf("%.2f", avg);
    return 0;
}