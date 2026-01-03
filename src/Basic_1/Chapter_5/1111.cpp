#include <bits/stdc++.h>
using namespace std;

int schooltime[10], classtime[10], sumtime[10];

int main()
{
    int maxtime = INT_MIN, maxday = 0;
    for (int i = 1; i <= 7; i++)
    {
        cin >> schooltime[i] >> classtime[i];
        sumtime[i] = schooltime[i] + classtime[i];
        if (sumtime[i] > maxtime)
        {
            maxtime = sumtime[i];
            maxday = i;
        }
    }
    cout << maxday;
    return 0;
}