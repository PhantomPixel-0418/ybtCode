#include <bits/stdc++.h>
using namespace std;

int calculator(int a, char op, int b)
{
    if (op == '+')
        return a + b;
    else if (op == '-')
        return a - b;
    else if (op == '*')
        return a * b;
    else if (op == '/')
        return a / b;
    else if (op == '%')
        return a % b;
    return 0;
}

int main()
{
    string s;
    cin >> s;
    int a = (s[0] - '0') * 10 + (s[1] - '0'), b = (s[3] - '0') * 10 + (s[4] - '0');
    cout << calculator(a, s[2], b) << endl;
    return 0;
}