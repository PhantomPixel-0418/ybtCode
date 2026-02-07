#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    getline(cin, s);
    for (int i = 0; i < s.length() - 1; i++)
        cout << char(s[i] + s[i + 1]);
    cout << char(s[s.length() - 1] + s[0]);
    return 0;
}