/**
*    author:  Akayiz
*    created: 2023-07-26 15:05:38
**/

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

// Definition : max_ribbon_pieces[ribbon_length] 
// It returns the maximum number of ribbon pieces
// that could be cut from the given ribbon length such that each ribbon piece length
// is equal to a, b or c and the sum of the ribbons is equal to the ribbon_length

// States : max_ribbon_pieces[ribbon_length]

// Base cases : max_ribbon_pieces[0] = 0, max_ribbon_pieces[-ve] = -INF

// Transition/Backward formula : max_ribbon_pieces[ribbon_len] = max(max_ribbon_pieces[ribbon_len - a] + 1, max_ribbon_pieces[ribbon_len - b] + 1, max_ribbon_pieces[ribbon_len - c] + 1);

int acceptable_ribbon_lengths[3];
int max_ribbon_pieces[4005];

int main() {
    fast();

    int original_ribbon_length;
    cin >> original_ribbon_length;

    for (int i = 0; i < 3; i++)
    {
        cin >> acceptable_ribbon_lengths[i];
    }
    
    memset(max_ribbon_pieces, -1, sizeof(max_ribbon_pieces));
    max_ribbon_pieces[0] = 0;
    // r for ribbon length
    for (int r = 1; r <= original_ribbon_length; r++)
    {
        // n for number
        for (int n = 0; n < 3; n++)
        {
            if (r - acceptable_ribbon_lengths[n] >= 0 && max_ribbon_pieces[r - acceptable_ribbon_lengths[n]] != -1)
            {
                max_ribbon_pieces[r] = max(max_ribbon_pieces[r], max_ribbon_pieces[r - acceptable_ribbon_lengths[n]] + 1);
            }
        }
    }

    cout << max_ribbon_pieces[original_ribbon_length];
    
    return 0;
}