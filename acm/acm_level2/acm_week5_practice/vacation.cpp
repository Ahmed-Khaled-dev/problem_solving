/**
*    author:  Akayiz
*    created: 2023-07-15 23:46:05
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int day_activities_happiness[100005][5];
int memo[100005][5];

int days_count;

int get_day_max_happiness(int day){
    memo[0][1] = 0;
    memo[0][2] = 0;
    memo[0][3] = 0;

    for (int i = 1; i <= days_count; i++)
    {
        memo[i][1] = max(memo[i - 1][2] + day_activities_happiness[i][1], memo[i - 1][3] + day_activities_happiness[i][1]);
        memo[i][2] = max(memo[i - 1][1] + day_activities_happiness[i][2], memo[i - 1][3] + day_activities_happiness[i][2]);
        memo[i][3] = max(memo[i - 1][1] + day_activities_happiness[i][3], memo[i - 1][2] + day_activities_happiness[i][3]);
    }

    return max({memo[day][1], memo[day][2], memo[day][3]});
    
}

int main() {
    fast();

    cin >> days_count;

    for (int i = 1; i <= days_count; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> day_activities_happiness[i][j];
        }
    }

    cout << get_day_max_happiness(days_count);

    return 0;
}