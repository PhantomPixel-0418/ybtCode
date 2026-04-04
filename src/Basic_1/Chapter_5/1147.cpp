#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int score;
} l[105];
int n;

int main()
{
    cin >> n;
    int highest_score = -1;
    string highest_score_name;
    for (int i = 0; i < n; i++)
    {
        cin >> l[i].score >> l[i].name;
        if (l[i].score > highest_score)
        {
            highest_score = l[i].score;
            highest_score_name = l[i].name;
        }
    }
    cout << highest_score_name;
    return 0;
}