/**
*    author:  Akayiz
*    created: 2023-02-12 20:54:13
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long graph[200005];

int main() {
    fast();

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> graph[j];
        }
        
        int r = -2, l = -1, downhill_sum = 0;
        bool constant = 1;

        for (int j = 0; j < n; j++)
        {
            if (j == 0)
            {
                l = 0;
                constant = 1;
            }
            if (j == n - 1)
            {
                r = n - 1;
            }
            if (graph[j - 1] > graph[j] && j != 0)
            {
                l = j;
                constant = 1;
            }
            if (graph[j + 1] > graph[j] && j != n - 1)
            {
                r = j;
            }
            if (graph[j] != graph[l])
            {
                constant = 0;
            }
            
            if (r == l)
            {
                downhill_sum++;
                r = -2;
                l = -1;
            }
            else
            {
                if (constant && l >= 0 && r >= 0)
                {
                    downhill_sum++;
                }
            }
            // cout << "Down hill sum = " << downhill_sum << endl;
            // cout << "j = " << j << endl;
            // cout << "r = " << r << endl;
            // cout << "l = " << l << endl;
            // cout << "constant = " << constant << endl;
        }

        //cout << downhill_sum;
        if (downhill_sum == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}