/**
*    author:  Akayiz
*    created: 2023-07-25 18:43:33
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int tiles[200005];

int main() {
    fast();

    int t, tiles_count, block_length, tile;
    cin >> t;
    
    for (int i = 0; i < t; i++)
    {
        cin >> tiles_count >> block_length;
        int freq[200005] = {}, first_tile = -1, last_tile_freq_prefix[200005] = {};
        long long last_tile = -1;
        vector<int> first_tile_indexes = {};
        for (int j = 0; j < tiles_count; j++)
        {
            cin >> tiles[j];
            freq[tiles[j]]++;

            if (j == 0 || first_tile == tiles[j])
            {
                first_tile = tiles[j];
                first_tile_indexes.push_back(j);
            }
            else if (j == tiles_count - 1)
            {
                last_tile = tiles[j];
            }
        }

        for (int j = 0; j < tiles_count; j++)
        {
            if (tiles[j])
            {
                /* code */
            }
            
        }
        
        if (block_length <= freq[first_tile])
        {
            if (freq[last_tile] - last_tile_freq_prefix[first_tile_indexes[block_length]] >= block_length)
            {
                cout << "YES" << endl;
            }   
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}