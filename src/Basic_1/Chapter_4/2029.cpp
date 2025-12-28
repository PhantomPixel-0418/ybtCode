#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int ans = 100; ans <= 999; ans++)
    {
        int g = ans % 10;
        int s = (ans / 10) % 10;
        int b = ans / 100;
        if (g * g * g + s * s * s + b * b * b == ans)
        {
            cout << ans << "\n";
        }
    }
    return 0;
}