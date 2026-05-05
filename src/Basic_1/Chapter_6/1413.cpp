#include <bits/stdc++.h>
using namespace std;

int p, q, r;

int turn(int B, int x)
{
    int v = 1, x_B = 0;
    while (x != 0)
    {
        if (x % 10 >= B)
            return -1;
        x_B += v * (x % 10);
        v *= B;
        x /= 10;
    }
    return x_B;
}

int main()
{
    cin >> p >> q >> r;
    for (int i = 2; i <= 40; i++)
        if (turn(i, p) * turn(i, q) == turn(i, r))
        {
            cout << i;
            return 0;
        }
    cout << 0;
    return 0;
}