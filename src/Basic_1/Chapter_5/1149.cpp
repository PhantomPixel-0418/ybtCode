#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    int max_length = 0;
    string longest_string;
    for (; cin >> s;)
    {
        int length = s.size();
        if (length > max_length && s[length - 1] != '.')
        {
            max_length = length;
            longest_string = s;
        }
        else if (length > max_length && s[length - 1] == '.')
        {
            max_length = length - 1;
            longest_string = s.substr(0, length - 1);
        }
    }
    cout << longest_string;
    return 0;
}