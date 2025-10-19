#include <bits/stdc++.h>
using namespace std;
double calculateArea(double x1, double y1, double x2, double y2, double x3, double y3)
{
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

int main()
{
    double x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double area = calculateArea(x1, y1, x2, y2, x3, y3);
    cout << fixed << setprecision(2) << area << endl;

    return 0;
}