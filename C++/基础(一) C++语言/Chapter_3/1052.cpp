#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    char y;
    int all = 0;
    cin >> x >> y;
    int xx = (x - 1000) / 500;
    if (x <= 1000)
    {
        all += 8;
    }
    else
    {
        all += 8;
        if ((x - 1000) % 500 != 0)
        {
            xx++;
        }
        for (int i = 0; i < xx; i++)
        {
            all += 4;
        }
    }
    if (y == 'y')
    {
        all += 5;
    }
    cout << all << endl;
    return 0;
}