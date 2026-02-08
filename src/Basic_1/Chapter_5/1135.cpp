#include <bits/stdc++.h>
using namespace std;

string dna;

int main()
{
    cin >> dna;
    for (int i = 0; i < dna.length(); i++)
    {
        if (dna[i] == 'A')
            cout << 'T';
        else if (dna[i] == 'T')
            cout << 'A';
        else if (dna[i] == 'G')
            cout << 'C';
        else
            cout << 'G';
    }
    return 0;
}