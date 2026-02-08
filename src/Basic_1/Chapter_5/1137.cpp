#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'w' || s[i] >= 'A' && s[i] <= 'W')
            s[i] += 3;
        else if (s[i] > 'w' && s[i] <= 'z' || s[i] > 'W' && s[i] <= 'Z')
            s[i] -= 23;
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = toupper(s[i]);
        else if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = tolower(s[i]);
    }
    for (int i = s.length() - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    return 0;
}