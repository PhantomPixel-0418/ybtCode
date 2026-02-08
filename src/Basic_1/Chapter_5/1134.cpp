#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] == '_')
            ;
        else
        {
            cout << "no";
            return 0;
        }
    }
    if (!(s[0] >= '0' && s[0] <= '9'))
        cout << "yes";
    else
        cout
            << "no";
    return 0;
}