/**
*    author:  Akayiz
*    created: 2023-07-23 17:47:44
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        long long arr[505] = {};
        long long arr2[505] = {};

        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            arr2[j] = arr[j];
        }

        sort(arr2, arr2 + n);

        bool sorted_already = 1;

        for (int j = 0; j < n; j++)
        {
            //cout << arr[j] << " " << arr2[j] << endl;
            if (arr[j] != arr2[j])
            {
                sorted_already = 0;
            } 
        }

        if (!sorted_already)
        {
            cout << 0 << endl;
            continue;
        }
        
        long long mini_abs = 1e9, mini_idx = 1e9;
        for (int j = 0; j < n - 1; j++)
        {
            if (abs(arr[j] - arr[j + 1]) < mini_abs)
            {
                mini_abs = abs(arr[j] - arr[j + 1]);
                mini_idx = j;
            }
        }

        //cout << mini_abs << " " << mini_idx << endl;

        if (mini_idx % 2 == 0)
            cout << (abs(arr[mini_idx] - arr[mini_idx + 1]) / 2) + 1 << endl;
        else
            cout << toupper(abs(arr[mini_idx] - arr[mini_idx + 1]) / 2.0) + 1 << endl;
        
    }

    return 0;
}