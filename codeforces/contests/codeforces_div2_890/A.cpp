/**
*    author:  Akayiz
*    created: 2023-08-05 17:36:25
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll arr[55];

int main() {
    Akayiz

    int t, n;

    cin >> t;

    bool not_sorted = 0;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            if(j != 0 && arr[j] < arr[j - 1])
                not_sorted = 1;
        }

        if(!not_sorted)
        {
            cout << 0 << endl;
            continue;
        }

        ll last_element = arr[n - 1], max_element = 0;

        for (int j = n - 2; j >= 0; j--)
        {
            if(arr[j] > arr[j + 1])
                max_element = max(max_element, arr[j]);
        }  

        cout << max_element << endl;
    }

    return 0;
}