#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, y;
    char n;
    cin >> x >> y >> n;
    switch (n)
    {
    case '+':
        cout << x + y;
        break;
    case '-':
        cout << x - y;
        break;
    case '*':
        cout << x * y;
        break;
    case '/':
        if (y == 0)
            cout << "Divided by zero!";
        else
            cout << x / y;
        break;
    default:
        cout << "Invalid operator!";
        break;
    }
    return 0;
}
