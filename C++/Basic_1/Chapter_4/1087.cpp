#include <bits/stdc++.h>
using namespace std;

double m, s;

int main()
{
    cin >> m;
    for (int i = 1;; i++)
    {
        s += 1.0 / i;
        if (s > m)
        {
            cout << i;
            break;
        }
    }
    return 0;
}