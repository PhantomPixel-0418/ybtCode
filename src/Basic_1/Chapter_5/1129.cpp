#include <bits/stdc++.h>
using namespace std;

string s;

int main()
{
    getline(cin, s);
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            sum++;
    }
    cout << sum;
    return 0;
}