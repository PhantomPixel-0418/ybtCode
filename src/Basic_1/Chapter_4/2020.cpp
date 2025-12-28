#include <bits/stdc++.h>
using namespace std;

int m, s = 0;

int main()
{
    cin >> m;
    for (int i = 1;; i++)
    {
        s += i;
        if (s >= m)
        {
            cout << i;
            break;
        }
    }
    return 0;
}