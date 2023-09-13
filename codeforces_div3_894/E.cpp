/**
*    author:  Akayiz
*    created: 2023-09-12 23:45:00
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// States: dp[movies_count][day_number]
// Definition: Returns the maximum entertainment value that can be obtained whil i can see from day 1 -> day_number, 
// without exceeding movies_count
// Base cases: dp[movies_count][0] = 0
// Transition:  dp[movies_count][day_number] = max(dp[movies_count - 1][day_number - 1], dp[movies_count][day_number - 1])

ll values[200005];
ll dp[200005];

int main() {
    Akayiz

    int t;
    cin >> t;

    while(t--){
        ll days, max_movies, loss;
        cin >> days >> max_movies >> loss;

        for (int i = 0; i < days; i++)
        {
            cin >> values[i];
        }
        
        dp[max_movies] = 0;
        dp[max_movies - 1] = 0;
        for (int i = 1; i < days; i++)
        {
            dp[max_movies] = max(dp[max_movies - 1], dp[max_movies]);
            dp[max_movies - 1] = max(dp[max_movies - 1], dp[max_movies]) + values[i];
        }

        cout << dp[0] << endl;
    }

    return 0;
}