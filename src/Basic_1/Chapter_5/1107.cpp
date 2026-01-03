#include <bits/stdc++.h>
using namespace std;

int l, m;
bool tree[100005];

int main()
{
    cin >> l >> m;
    for (int i = 0; i <= l; i++)
        tree[i] = 1;
    for (int i = 1; i <= m; i++)
    {
        int l, r;
        cin >> l >> r;
        for (int j = l; j <= r; j++)
            tree[j] = 0;
    }
    int ans = 0;
    for (int i = 0; i <= l; i++)
        if (tree[i])
            ans++;
    cout << ans;
    return 0;
}