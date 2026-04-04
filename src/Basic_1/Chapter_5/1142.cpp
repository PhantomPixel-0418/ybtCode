#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    for (int i = 1; cin >> s; i++)
    {
        if (i != 1)
            cout << ",";
        cout << s.length();
    }
    return 0;
}