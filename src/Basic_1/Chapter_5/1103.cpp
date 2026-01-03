#include <bits/stdc++.h>
using namespace std;

int apple[15], tall;

int main()
{
    for (int i = 1; i <= 10; i++)
        cin >> apple[i];
    cin >> tall;
    int ans = 0;
    for (int i = 1; i <= 10; i++)
        if (apple[i] <= tall + 30)
            ans++;
    cout << ans;
    return 0;
}