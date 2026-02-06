#include <bits/stdc++.h>
using namespace std;

string a, b;
string ta, tb;

int main()
{
    getline(cin, ta);
    getline(cin, tb);
    for (int i = 0; i < ta.length(); i++)
    {
        if (ta[i] >= 'A' && ta[i] <= 'Z')
        {
            ta[i] += 32;
            a = a + ta[i];
        }
        else if (ta[i] == ' ')
            ;
        else
        {
            a = a + ta[i];
        }
    }
    for (int i = 0; i < tb.length(); i++)
    {
        if (tb[i] >= 'A' && tb[i] <= 'Z')
        {
            tb[i] += 32;
            b = b + tb[i];
        }
        else if (tb[i] == ' ')
            ;
        else
        {
            b = b + tb[i];
        }
    }
    if (a.length() != b.length())
    {
        cout << "NO";
        return 0;
    }
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}