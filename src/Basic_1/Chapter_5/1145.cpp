#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    getline(cin, s);
    int cnt = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            cnt++;
        else
        {
            cout << cnt;
            cout << s[i - 1];
            cnt = 1;
        }
    }
    cout << cnt;
    cout << s[s.size() - 1];
    return 0;
}