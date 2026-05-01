#include <bits/stdc++.h>
using namespace std;

int m, n, a[1005], memories[1005];
queue<int> memoriesqueue;

int main()
{
    cin >> m >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (memories[a[i]] == 0)
        {
            memories[a[i]] += 1;
            if (memoriesqueue.size() == m)
            {
                int temp = memoriesqueue.front();
                memoriesqueue.pop();
                memories[temp] = 0;
            }
            memoriesqueue.push(a[i]);
            ans++;
        }
    }
    cout << ans;
    return 0;
}