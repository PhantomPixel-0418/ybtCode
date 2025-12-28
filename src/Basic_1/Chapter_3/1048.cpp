#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    if ((x < 60 && y >= 60) || (x >= 60 && y < 60))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}