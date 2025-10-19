#include <bits/stdc++.h>
using namespace std;
int main()
{
    float all = 9.6 * 6;
    float nhall = 9.4 * 5;
    float nlall = 9.8 * 5;
    float h = all - nhall;
    float l = all - nlall;
    printf("%5.2f", (all - h - l) / 4);
    return 0;
}