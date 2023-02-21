/**
*    author:  Akayiz
*    created: 2023-02-18 21:40:56
**/

#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t, n, num, max_index;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        max_index = -1;
        int num_index[1005] = {};
        // 1-based
        for (int j = 1; j <= n; j++)
        {
            cin >> num;
            num_index[num] = j;
        }

        // for (int j = 1; j <= n; j++)
        // {
        //     cout << j << " " << num_index[j] << endl;
        // }

        for (int j = 1; j <= 1000; j++)
        {
            for (int k = 1; k <= 1000; k++)
            {
                if (gcd(j, k) == 1 && num_index[j] != 0 && num_index[k] != 0)
                {
                    max_index = max(max_index, num_index[j] + num_index[k]);
                }
            }
        }

        cout << max_index << endl;
    }
    

    return 0;
}