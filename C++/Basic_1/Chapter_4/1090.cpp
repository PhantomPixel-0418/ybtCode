#include <bits/stdc++.h>
using namespace std;

int m, k;
bool ans = 1;

int main()
{
    cin >> m >> k;
    if (m % 19 != 0)
        ans = 0;
    int cnt = 0;
    while (m)
    {
        if (m % 10 == 3)
            cnt++;
        m /= 10;
    }
    if (cnt != k)
        ans = 0;
    if (ans)
        cout << "YES";
    else
        cout << "NO";
}