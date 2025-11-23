#include <bits/stdc++.h>
using namespace std;

int n, num;
double x, y, sum = 0;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y >> num;
        double d = sqrt(x * x + y * y);
        sum += 2 * d / 50 + num * 1.5;
    }
    cout << ceil(sum);
    return 0;
}