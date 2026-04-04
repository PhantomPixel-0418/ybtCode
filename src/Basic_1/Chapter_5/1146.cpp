#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    getline(cin, s);
    string reverse_s = s;
    reverse(reverse_s.begin(), reverse_s.end());
    if (s == reverse_s)
        cout << "yes";
    else
        cout << "no";
    return 0;
}