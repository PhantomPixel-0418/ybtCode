#include <bits/stdc++.h>
using namespace std;

int n, a[100005];

int main()
{
    cin >> n;
    int nowplateau = 0, plateaucnt = 0, maxplateau = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (nowplateau != a[i])
        {
            maxplateau = max(plateaucnt, maxplateau);
            nowplateau = a[i];
            plateaucnt = 1;
        }
        else
        {
            plateaucnt++;
        }
    }
    maxplateau = max(plateaucnt, maxplateau);
    cout << maxplateau;
    return 0;
}