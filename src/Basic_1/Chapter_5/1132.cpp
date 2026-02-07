#include <bits/stdc++.h>
using namespace std;

int n;
struct choice
{
    string player1, player2;
} rounds[105];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> rounds[i].player1 >> rounds[i].player2;
        if (rounds[i].player1 == rounds[i].player2)
            cout << "Tie\n";
        else if (rounds[i].player1 == "Rock" && rounds[i].player2 == "Scissors" || rounds[i].player1 == "Scissors" && rounds[i].player2 == "Paper" || rounds[i].player1 == "Paper" && rounds[i].player2 == "Rock")
            cout << "Player1\n";
        else
            cout << "Player2\n";
    }
    return 0;
}