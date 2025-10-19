#include <bits/stdc++.h>
using namespace std;

double a, b, c;
double x1, x2;

int main()
{
    cin >> a >> b >> c;

    double d = b * b - 4 * a * c;
    if (d < 0)
    {
        cout << "No answer!" << endl;
        return 0;
    }

    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);

    if (x1 == x2)
        printf("x1=x2=%.5f", x1);
    else
        printf("x1=%.5f;x2=%.5f", min(x1, x2), max(x1, x2));

    return 0;
}