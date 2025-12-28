#include <bits/stdc++.h>
using namespace std;

int a, b;

int main()
{
    cin >> a >> b;
    int sum = 1;
    for (int i = 1; i <= b; i++)
    {
        sum *= a;
        sum %= 7;
    }
    if (sum % 7 == 1)
    {
        cout << "Monday";
    }
    else if (sum % 7 == 2)
    {
        cout << "Tuesday";
    }
    else if (sum % 7 == 3)
    {
        cout << "Wednesday";
    }
    else if (sum % 7 == 4)
    {
        cout << "Thursday";
    }
    else if (sum % 7 == 5)
    {
        cout << "Friday";
    }
    else if (sum % 7 == 6)
    {
        cout << "Saturday";
    }
    else
    {
        cout << "Sunday";
    }
    return 0;
}