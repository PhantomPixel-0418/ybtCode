#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    cin >> s;
    for (int i = 0; i < (s.length() - 1) / 2; i++)
    {
        if (s[i] != s[s.length() - 2 - i])
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}