#include <bits/stdc++.h>
using namespace std;

int k;

int main()
{
    cin >> k;
    int f1 = 1, f2 = 1, f3;
    for (int i = 3; i <= k; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    if (k == 1 || k == 2)
        cout << 1 << endl;
    else
        cout << f3 << endl;
    return 0;
}