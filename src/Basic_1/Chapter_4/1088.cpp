#include <bits/stdc++.h>
using namespace std;

long long n;

int main()
{
    cin >> n;
    while (n)
    {
        cout << n % 10 << " ";
        n /= 10;
    }
    return 0;
}