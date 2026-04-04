#include <bits/stdc++.h>
using namespace std;

string s;
int times;

int main()
{
    cin >> times;
    cin >> s;
    int cnt = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            cnt++;
        else
        {
            if (cnt >= times)
            {
                cout << s[i - 1];
                return 0;
            }
            cnt = 1;
        }
    }
    cout << "No";
    return 0;
}