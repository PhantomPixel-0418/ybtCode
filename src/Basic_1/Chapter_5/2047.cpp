#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    getline(cin, s);
    int beginning, end;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            beginning = i;
            break;
        }
    }
    for (int i = s.length(); i > 0; i--)
    {
        if (s[i] != ' ')
        {
            end = i;
            break;
        }
    }
    bool space = 0;
    for (int i = beginning; i < end; i++)
    {
        if (!space && s[i] == ' ')
        {
            cout << s[i];
            space = 1;
        }
        else if (space && s[i] == ' ')
            ;
        else
        {
            cout << s[i];
            space = 0;
        }
    }
    return 0;
}