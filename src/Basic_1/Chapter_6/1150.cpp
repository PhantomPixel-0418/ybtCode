#include <bits/stdc++.h>
using namespace std;

int n;
bool is(int x)
{
    int sum = 0;
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            sum += i;
        }
    }
    return sum == x;
}

int main()
{
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (is(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}