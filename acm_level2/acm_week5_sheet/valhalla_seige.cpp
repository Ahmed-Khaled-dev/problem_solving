/**
*    author:  Akayiz
*    created: 2023-07-31 22:50:40
**/

#include <bits/stdc++.h>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

// Prefix sum (Which is also DP "Dynamic programming")

long long warriors_strengths[200005] = {};
long long warriors_prefix_sum[200005] = {};
long long arrows_per_minutes[200005] = {};

int main() {
    fast();

    long long warriors_count, minutes_count, warrior_strength;
    cin >> warriors_count >> minutes_count;

    for (int i = 1; i <= warriors_count; i++)
    {
        cin >> warriors_strengths[i];
    }

    for (int i = warriors_count; i >= 1; i--)
    {
        warriors_prefix_sum[warriors_count - i + 1] = warriors_prefix_sum[warriors_count - i] + warriors_strengths[i];
    }

    for (int i = 1; i <= minutes_count; i++)
    {
        cin >> arrows_per_minutes[i];
    }

    long long sum = warriors_prefix_sum[warriors_count];

    for (int i = 1; i <= minutes_count; i++)
    {
        if (sum - arrows_per_minutes[i] <= 0)
            sum = warriors_prefix_sum[warriors_count];
        else
            sum -= arrows_per_minutes[i];
        
        cout << lower_bound(warriors_prefix_sum + 1, warriors_prefix_sum + warriors_count + 1, sum) - warriors_prefix_sum << endl;
    }

    return 0;
}