#include <bits/stdc++.h>
using namespace std;

queue<string> q;
string a, b;

int main()
{
    string s;
    getline(cin, s);
    string word;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            q.push(word);
            word = "";
        }
        else
        {
            word += s[i];
        }
    }
    q.push(word);
    cin >> a >> b;
    for (; !q.empty(); q.pop())
    {
        if (q.front() == a)
        {
            cout << b << " ";
        }
        else
        {
            cout << q.front() << " ";
        }
    }
    return 0;
}