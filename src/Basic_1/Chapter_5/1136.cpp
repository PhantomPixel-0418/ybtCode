#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'y' || s[i] >= 'A' && s[i] <= 'Y')
            s[i] += 1;
        else if (s[i] == 'z' || s[i] == 'Z')
            s[i] -= 25;
        cout << s[i];
    }
    return 0;
}