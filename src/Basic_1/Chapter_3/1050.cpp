#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double bike = 27 + n / 3 + 23, walk = n / 1.2;
    if (bike < walk)
    {
        cout << "Bike" << endl;
    }
    else
    {
        cout << "Walk" << endl;
    }
    return 0;
}