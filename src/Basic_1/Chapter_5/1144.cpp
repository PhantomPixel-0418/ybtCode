#include <bits/stdc++.h>
using namespace std;

string s;
string l[505];

int main()
{
    getline(cin, s);
    int listindex = 0, index = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            l[listindex++] = s.substr(index, i - index);
            index = i + 1;
        }
    }
    l[listindex++] = s.substr(index, s.size() - index);
    for (int i = 0; i < listindex - 1; i++)
    {
        reverse(l[i].begin(), l[i].end());
        cout << l[i] << " ";
    }
    if (listindex > 0)
    {
        reverse(l[listindex - 1].begin(), l[listindex - 1].end());
        cout << l[listindex - 1];
    }
    return 0;
}