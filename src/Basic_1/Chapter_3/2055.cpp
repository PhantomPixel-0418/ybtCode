#include <bits/stdc++.h>
using namespace std;
int main()
{
    float w;
    scanf("%f", &w);
    if (w <= 20)
    {
        printf("%.2f", w * 1.68);
    }
    else
    {
        printf("%.2f", w * 1.98);
    }
    return 0;
}