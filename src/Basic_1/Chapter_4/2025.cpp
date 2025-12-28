#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 1;
    for (; !(ans % 2 == 1 && ans % 3 == 1 && ans % 4 == 1 && ans % 5 == 1 && ans % 6 == 1 && ans % 7 == 0); ans++)
        ;
    cout << ans;
    return 0;
}