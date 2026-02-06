#include <bits/stdc++.h>
using namespace std;

string s1, s2;

int main()
{
    cin >> s1 >> s2;
    if (s1.length() < s2.length())
        swap(s1, s2);
    s1 = s1 + s1;
    if (s1.find(s2) == string::npos)
        cout << "false";
    else
        cout << "true";
    return 0;
}