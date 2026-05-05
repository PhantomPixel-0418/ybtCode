#include <bits/stdc++.h>
using namespace std;

int binary(int x)
{
    int ans = 0, base = 1;
    while (x)
    {
        ans += (x % 2) * base;
        base *= 10;
        x /= 2;
    }
    return ans;
}

bool cmp(int bin)
{
    int count1 = 0, count0 = 0;
    while (bin)
    {
        if (bin % 10)
            count1++;
        else
            count0++;
        bin /= 10;
    }
    return count1 > count0;
}

int main()
{
    int a = 0, b = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (cmp(binary(i)))
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    cout << a << " " << b << endl;
    return 0;
}