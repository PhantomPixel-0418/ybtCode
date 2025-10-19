#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}