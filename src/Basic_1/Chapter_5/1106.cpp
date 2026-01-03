#include <bits/stdc++.h>
using namespace std;

int n, arr[105];

int main()
{
    cin >> n;
    double a, b, c, d;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= 18)
            a += 1;
        else if (arr[i] <= 35)
            b += 1;
        else if (arr[i] <= 60)
            c += 1;
        else
            d += 1;
    }
    a = a / n * 100;
    b = b / n * 100;
    c = c / n * 100;
    d = d / n * 100;
    printf("%.2lf%%\n%.2lf%%\n%.2lf%%\n%.2lf%%", a, b, c, d);
    return 0;
}