#include <bits/stdc++.h>
using namespace std;

double like, same;
string dna1, dna2;

int main()
{
    cin >> like >> dna1 >> dna2;
    for (int i = 0; i < dna1.length(); i++)
        if (dna1[i] == dna2[i])
            same++;
    same = 1.0 * same / dna1.length();
    if (same >= like)
        cout << "yes";
    else
        cout << "no";
    return 0;
}