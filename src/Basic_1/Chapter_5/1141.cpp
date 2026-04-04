#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    cin >> s;
    if (s[s.size() - 2] == 'e' && s[s.size() - 1] == 'r')
    {
        for (int i = 0; i < s.size() - 2; i++)
        {
            cout << s[i];
        }
    }
    else if (s[s.size() - 2] == 'l' && s[s.size() - 1] == 'y')
    {
        for (int i = 0; i < s.size() - 2; i++)
        {
            cout << s[i];
        }
    }
    else if (s[s.size() - 3] == 'i' && s[s.size() - 2] == 'n' && s[s.size() - 1] == 'g')
    {
        for (int i = 0; i < s.size() - 3; i++)
        {
            cout << s[i];
        }
    }
    else
        cout << s;
    return 0;
}