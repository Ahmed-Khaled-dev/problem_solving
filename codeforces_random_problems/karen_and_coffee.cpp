/**
*    author:  Akayiz
*    created: 2023-08-02 00:04:56
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// temp = temperature
ll temp_recommendation_count[200005];
ll prefix_temp_admissible_count[200005];

int main() {
    Akayiz

    int recipes_count, min_admissible_count, queries_count;
    cin >> recipes_count >> min_admissible_count >> queries_count;

    int l, r;
    for (int i = 0; i < recipes_count; i++)
    {
        cin >> l >> r;
        // Partial sum
        temp_recommendation_count[l] += 1;
        temp_recommendation_count[r + 1] -= 1;
    }

    for (int i = 1; i <= 200000; i++)
    {
        // Prefix sum to complete Partial sum
        temp_recommendation_count[i] += temp_recommendation_count[i - 1];
    }

    int previous_admissible = 0;
    for (int i = 1; i <= 200000; i++)
    {
        if(temp_recommendation_count[i] >= min_admissible_count)
        {
            previous_admissible++;
        }
        prefix_temp_admissible_count[i] = previous_admissible;
    }

    for (int i = 0; i < queries_count; i++)
    {
        cin >> l >> r;
        cout << prefix_temp_admissible_count[r] - prefix_temp_admissible_count[l - 1] << el;
    }
    
    
    return 0;
}