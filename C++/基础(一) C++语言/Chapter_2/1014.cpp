#include <bits/stdc++.h>
using namespace std;
const double pi = 3.14159;
int main()
{
    double r, d, c, s;
    cin >> r;
    d = r * 2;
    c = d * pi;
    s = pi * r * r;
    printf("%.4lf %.4lf %.4lf", d, c, s);
    return 0;
}
