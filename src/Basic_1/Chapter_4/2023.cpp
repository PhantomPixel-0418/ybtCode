#include <bits/stdc++.h>
using namespace std;

int n, minn = INT_MAX, maxn = INT_MIN, cnt;
double avg;

int main()
{
    while (cin >> n)
    {
        if (n > maxn)
            maxn = n;
        if (n < minn)
            minn = n;
        avg += n;
        cnt++;
    }
    avg = 1.0 * avg / cnt;
    printf("%d %d %.3f", minn, maxn, avg);
    return 0;
}