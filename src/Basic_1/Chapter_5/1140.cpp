#include <bits/stdc++.h>
using namespace std;

string s1, s2;

int main()
{
    cin >> s1 >> s2;
    if (s1.size() < s2.size())
        swap(s1, s2);
    if (s1.find(s2) != string::npos)
        cout << s2 << " is substring of " << s1;
    else
        cout << "No substring";
    return 0;
}