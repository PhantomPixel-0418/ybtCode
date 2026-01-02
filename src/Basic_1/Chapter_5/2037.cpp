#include <bits/stdc++.h>
using namespace std;

int n, m;
queue<int> q;

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    int cnt = 1;
    for (; !q.empty();)
    {
        if (cnt == m)
        {
            cout << q.front() << " ";
            q.pop();
            cnt = 1;
        }
        else
        {
            q.push(q.front());
            q.pop();
            cnt++;
        }
    }
    return 0;
}