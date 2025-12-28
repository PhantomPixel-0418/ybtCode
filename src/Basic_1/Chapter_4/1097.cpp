#include <bits/stdc++.h>
using namespace std;

int h, l;
char s;
int f;

int main()
{
    cin >> h >> l >> s >> f;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= l; j++)
        {
            if (f == 1)
            {
                cout << s;
            }
            else
            {
                if (i == 1 || i == h || j == 1 || j == l)
                {
                    cout << s;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}