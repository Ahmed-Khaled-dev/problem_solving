/**
*    author:  Akayiz
*    created: 2023-04-08 14:10:00
**/

#include <iostream>
#include <numeric>
#include <algorithm>
#include <cstring>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

const int SIZE = 1005;
int number_index[SIZE];

int main() {
    fast();

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        memset(number_index, 0, sizeof number_index);
        cin >> n;
        for (int j = 1; j <= n; j++)
        {
            int x;
            cin >> x;
            number_index[x] = j;
        }
        
        int max_index_sum = 0;

        for (int j = 0; j < SIZE; j++)
        {
            for (int k = j; k < SIZE; k++)
            {
                if (__gcd(j, k) == 1 && number_index[j] != 0 && number_index[k] != 0)
                {
                    max_index_sum = max(max_index_sum, number_index[j] + number_index[k]);
                    //cout << "j = " << j << " k = " << k << " max index = " << max_index_sum << endl;
                }
            }
        }

        if (!max_index_sum)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << max_index_sum << endl;
        }
        
    }
    
    return 0;
}