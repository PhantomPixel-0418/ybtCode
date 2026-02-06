#include <bits/stdc++.h>
using namespace std;

string s;
char a, b;

int main()
{
    getline(cin, s);
    cin >> a >> b;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == a)
            cout << b;
        else
            cout << s[i];
    }
    return 0;
}