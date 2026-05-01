#include <bits/stdc++.h>
using namespace std;

int t = 0, t2 = 0, l, l2;
string s, ss;

int main()
{
    getline(cin, ss);
    getline(cin, s);
    l = s.size();
    l2 = ss.size();
    for (int i = 0; i <= l - l2; i++)
    {
        int j;
        for (j = 0; j < l - 1; j++)
        {
            if (toupper(s[i + j]) != toupper(ss[j]))
            {
                break;
            }
            if (i > 0 && j == 0 && s[i - 1] != ' ')
            {
                break;
            }
        }
        if (j == l2 && (i + l2 == l || s[i + l2] == ' '))
        {
            t++;
            if (t == 1)
            {
                t2 = i;
            }
        }
    }
    if (t == 0)
    {
        cout << -1;
    }
    else
    {
        cout << t << " " << t2;
    }
}