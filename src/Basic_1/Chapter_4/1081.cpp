#include <bits/stdc++.h>
using namespace std;

int n;

int main()
{
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
    return 0;
}