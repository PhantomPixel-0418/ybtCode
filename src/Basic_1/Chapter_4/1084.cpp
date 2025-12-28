#include <bits/stdc++.h>
using namespace std;

int a, b;

int main()
{
    cin >> a >> b;
    int sum = 1;
    for (int i = 1; i <= b; i++)
    {
        sum *= a;
        sum %= 1000;
    }
    printf("%03d", sum);
    return 0;
}