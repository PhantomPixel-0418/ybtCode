#include <bits/stdc++.h>
using namespace std;

struct sick
{
    string name;
    double temp;
    bool is_cough;
} a[205];
int n;

int main()
{
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].temp >> a[i].is_cough;
        if (a[i].temp >= 37.5 && a[i].is_cough)
        {
            cnt++;
            cout << a[i].name << endl;
        }
    }
    cout << cnt;
    return 0;
}