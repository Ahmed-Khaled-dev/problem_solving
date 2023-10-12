/**
*    author:  Akayiz
*    created: 2023-07-09 18:22:47
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

const int CANDY_SIZE = 200005;
int candy_type_freq[CANDY_SIZE] = {};

int main() {
    fast();

    int queries_count, candies_count;
    cin >> queries_count;

    for (int i = 0; i < queries_count; i++)
    {
        cin >> candies_count;
        int candy_type;

        memset(candy_type_freq, 0, sizeof(candy_type_freq));

        for (int i = 0; i < candies_count; i++)
        {
            cin >> candy_type;
            candy_type_freq[candy_type]++;
        }

        sort(candy_type_freq, candy_type_freq + CANDY_SIZE);
        reverse(candy_type_freq, candy_type_freq + CANDY_SIZE);
        
        long long candy_max_sum = 0;
        int candy_type_visited[CANDY_SIZE] = {};

        for (int i = 0; i < candies_count; i++)
        {
            if (candy_type_freq[i] == 0)
            {
                break;
            }
            
            for (int j = candy_type_freq[i]; j > 0; j--)
            {
                if (!candy_type_visited[j])
                {
                    candy_max_sum += j;
                    candy_type_visited[j] = 1;
                    break;
                }
            }

            //cout << i << " : " << candy_type_freq[i] << endl;
        } 
        cout << candy_max_sum << endl;
    }
    
    return 0;
}