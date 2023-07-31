/**
*    author:  Akayiz
*    created: 2023-07-29 18:18:44
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}


// Definition max_victory_points[card_idx] :
// Returns the maximum number of points that can be earned starting from the card_idx till the end of the cards

// Notes: Index is zero-based
// Base case : max_victory_points[cards_count] = 0, max_victory_points[cards_count - 1] = v[cards_count - 1];

// Will create a suffix sum to make the suffix sum for the max values of the cards
// Transition : max_victory_points[i] = max(v[i], "if v(i) != 0" suffix[i + 1] - suffix[i + 1 + v(i)])

int card_values[100005] = {}, max_victory_points[100005] = {}, max_points_suffix[100005] = {};

int main() {
    fast();

    int cards_count;
    cin >> cards_count;

    for (int i = 0; i < cards_count; i++)
    {
        cin >> card_values[i];
    }

    max_victory_points[cards_count] = 0;
    max_victory_points[cards_count - 1] = card_values[cards_count - 1];
    max_points_suffix[cards_count] = 0, max_points_suffix[cards_count - 1] = card_values[cards_count - 1];
    
    for (int i = cards_count - 2; i >= 0; i--)
    {
        int after_last_card_to_unlock = i + 1 + card_values[i];
        if (after_last_card_to_unlock > cards_count)
            after_last_card_to_unlock = cards_count;
        
        if (card_values[i] != 0)
        {
            cout << card_values[i] << " " << max_points_suffix[i + 1] << " " << max_points_suffix[after_last_card_to_unlock] << endl;
            max_victory_points[i] = max(card_values[i], max_points_suffix[i + 1] - max_points_suffix[after_last_card_to_unlock]);
        }
        
        max_points_suffix[i] = max_points_suffix[i + 1] + max_victory_points[i];
    }
    
    cout << max_victory_points[0] << endl;

    return 0;
}