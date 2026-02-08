#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
            s[i] = toupper(s[i]);
        cout << s[i];
    }
    return 0;
}