#include <bits/stdc++.h>
using namespace std;

string l[205];

int main()
{
    string s;
    getline(cin, s);
    int lastindex = 0, listindex = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' || s[i] == ',')
        {
            if (i > lastindex)
                l[listindex++] = s.substr(lastindex, i - lastindex);
            lastindex = i + 1;
        }
    }
    if (s.size() > lastindex)
        l[listindex++] = s.substr(lastindex, s.size() - lastindex);
    string longest = l[0], shortest = l[0];
    for (int i = 0; i < listindex; i++)
    {
        if (l[i].size() > longest.size())
        {
            longest = l[i];
        }
        if (l[i].size() < shortest.size())
        {
            shortest = l[i];
        }
    }
    cout << longest << endl
         << shortest;
    return 0;
}