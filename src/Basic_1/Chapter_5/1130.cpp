#include <bits/stdc++.h>
using namespace std;

string s;
int tong[200];

int main()
{
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
        tong[s[i]]++;
    for (int i = 0; i < s.length(); i++)
    {
        if (tong[s[i]] == 1)
        {
            cout << s[i];
            return 0;
        }
    }
    cout << "no";
    return 0;
}