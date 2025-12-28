#include <bits/stdc++.h>
using namespace std;

int n, s, c;
double x, y;

int main()
{
    cin >> n;
    cin >> s >> c;
    x = 100.0 * c / s;
    for (int i = 1; i < n; i++)
    {
        cin >> s >> c;
        y = 100.0 * c / s;
        if (y - x > 5)
        {
            cout << "better\n";
        }
        else if (x - y > 5)
        {
            cout << "worse\n";
        }
        else
        {
            cout << "same\n";
        }
    }
    return 0;
}
