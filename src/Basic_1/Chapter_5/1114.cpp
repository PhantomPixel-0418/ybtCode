#include <bits/stdc++.h>
using namespace std;

int n;
double a[305], diffence[305];

int main()
{
    cin >> n;
    double maxa = INT_MIN, mina = INT_MAX;
    int maxindex, minindex;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > maxa)
        {
            maxa = a[i];
            maxindex = i;
        }
        if (a[i] < mina)
        {
            mina = a[i];
            minindex = i;
        }
    }
    double avg = 0;
    for (int i = 1; i <= n; i++)
        if (i != maxindex && i != minindex)
            avg += 1.0 * a[i];
    avg = avg / (n - 2);
    double maxdiffence = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (i != maxindex && i != minindex)
        {
            diffence[i] = abs(a[i] - avg);
            maxdiffence = max(diffence[i], maxdiffence);
        }
    }
    printf("%.2lf %.2lf", avg, maxdiffence);
    return 0;
}