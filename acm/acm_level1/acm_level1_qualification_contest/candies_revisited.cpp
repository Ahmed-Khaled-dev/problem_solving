/**
*    author:  Akayiz
*    created: 2023-02-21 21:37:28
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long candie_length[100005];
long long machines_length[100005];

int main() {
    fast();

    int t, candie_count, machines_count;
    long long employees;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> candie_count >> employees;
        for (int j = 0; j < candie_count; j++)
        {
            cin >> candie_length[j];
        }

        cin >> machines_count;
        for (int j = 0; j < machines_count; j++)
        {
            cin >> machines_length[j];
        }

        sort(machines_length, machines_length + machines_count);
        
        // for (int j = 0; j < candie_count; j++)
        // {
        //     cout << candie_length[j] << " ";
        // }
        // cout << endl;
        // for (int j = 0; j < machines_count; j++)
        // {
        //     cout << machines_length[j] << " ";
        // }
        // cout << endl;

        int low = 0, high = machines_count - 1, mid;
        long long sum, ans = -1;
        while (low <= high)
        {
            sum = 0;
            mid = (low + high) / 2;
            for (int j = 0; j < candie_count; j++)
            {
                //cout << candie_length[j] << " " << machines_length[mid] << endl;
                sum += (candie_length[j] / machines_length[mid]);
            }

            //cout << sum << endl;
            
            if (sum > employees)
            {
                low = mid + 1;
                ans = max(ans, machines_length[mid]);
            }
            else if (sum < employees)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
                ans = max(ans, machines_length[mid]);
            }
        }

        cout << ans << endl;
        
    }
    

    return 0;
}