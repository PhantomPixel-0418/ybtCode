#include <bits/stdc++.h>
using namespace std;

int a, b;
char n;

int main()
{
    cin >> a >> b >> n;
    if (n == '+')
        cout << a + b;
    else if (n == '-')
        cout << a - b;
    else if (n == '*')
        cout << a * b;
    else if (n == '/')
    {
        if (b == 0)
            cout << "Divided by zero!";
        else
            cout << a / b;
    }
    else
        cout << "Invalid operator!";

    return 0;
}