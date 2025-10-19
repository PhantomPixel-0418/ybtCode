#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, sum = 0;
    cin >> x;
    if (x % 3 == 0)
    {
        cout << 3;
        sum++;
    }
    if (x % 5 == 0)
    {
        if (sum != 0)
        {
            cout << " ";
        }
        cout << 5;
        sum++;
    }
    if (x % 7 == 0)
    {
        if (sum != 0)
        {
            cout << " ";
        }
        cout << 7;
        sum++;
    }
    if (sum == 0)
        cout << "n";
    return 0;
}