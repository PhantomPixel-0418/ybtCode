#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    for (a = 0; a <= 100; a++)
    {
        for (b = 0; b <= 100; b++)
        {
            for (c = 0; c <= 100; c++)
            {
                if (a + b + c == 100 && 3 * a * 5 + 3 * b * 3 + c == 300)
                {
                    cout << a << " " << b << " " << c << "\n";
                }
            }
        }
    }
    return 0;
}