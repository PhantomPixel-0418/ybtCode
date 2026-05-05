#include <bits/stdc++.h>
using namespace std;

string s;
int times[26];

bool isprime(int x)
{
    if (x < 2)
        return 0;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int main()
{
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            times[s[i] - 'a']++;
        }
    }
    int maxn = INT_MIN, minn = INT_MAX;
    for (int i = 0; i < 26; i++)
    {
        maxn = max(maxn, times[i]);
        if (times[i] != 0)
            minn = min(minn, times[i]);
    }
    if (isprime(maxn - minn))
    {
        cout << "Lucky Word" << endl
             << maxn - minn;
    }
    else
    {
        cout << "No Answer" << endl
             << 0;
    }
    return 0;
}