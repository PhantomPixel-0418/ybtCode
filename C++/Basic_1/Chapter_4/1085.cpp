#include <bits/stdc++.h>
using namespace std;

double h, s = 0, a;

int main()
{
    cin >> h;
    a = h;
    for (int i = 1; i <= 9; i++)
    {
        s += a;
        a /= 2.0;
        s += a;
    }
    s += a;
    a /= 2.0;
    cout << s << "\n"
         << a;
    return 0;
}