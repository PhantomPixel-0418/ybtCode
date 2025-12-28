#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    double xa, ya, xb, yb, n;
    cin >> xa >> ya >> xb >> yb;
    n = sqrt((xa - xb) * (xa - xb) + (ya - yb) * (ya - yb));
    printf("%.3lf", n);
    return 0;
}