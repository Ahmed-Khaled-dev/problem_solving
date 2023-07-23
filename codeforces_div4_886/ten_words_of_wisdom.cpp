/**
*    author:  Akayiz
*    created: 2023-07-21 17:39:40
**/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t;
    cin >> t;

    int responses_count;

    for (int i = 0; i < t; i++)
    {
        cin >> responses_count;
        int word_length, word_quality;
        vector<int> qualities = {};
        int quality_index[55] = {};
        for (int j = 1; j <= responses_count; j++)
        {
            cin >> word_length >> word_quality;
            if (word_length > 10)
            {
                continue;
            }
            qualities.push_back(word_quality);
            quality_index[word_quality] = j;
        }
        
        sort(qualities.begin(), qualities.end());
        cout << quality_index[qualities[qualities.size() - 1]] << endl;
    }
    

    return 0;
}