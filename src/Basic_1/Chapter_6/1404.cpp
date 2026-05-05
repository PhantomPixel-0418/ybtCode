#include <bits/stdc++.h>
using namespace std;

#define int long long

int n;

signed main()
{
    cin >> n;
    int myhome = 1, homecount = 0, homesum = 0;
    while (++homecount)
    {
        homesum += homecount;
        for (myhome = 1; myhome <= homecount; myhome++)
        {
            if (homesum - myhome - (2 * myhome) == n)
            {
                cout << myhome << " " << homecount << endl;
                return 0;
            }
        }
    }
    return 0;
}