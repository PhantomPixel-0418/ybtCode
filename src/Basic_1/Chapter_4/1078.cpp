#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin >> n;
    double sum = 0, p = 1, q = 2;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + 1.0 * (q / p);
        int tmp_q = q;
        q += p;
        p = tmp_q;
    }
    printf("%.4f", sum);
    return 0;
}