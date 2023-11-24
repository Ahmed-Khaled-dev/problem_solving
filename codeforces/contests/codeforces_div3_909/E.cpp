/**
*    author:  Akayiz
*    created: 2023-11-23 23:04:27
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int arr[200005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n;
    while(t--){
        cin >> n;
        int min_num = INT_MAX, min_num_idx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] < min_num){
                min_num = arr[i];
                min_num_idx = i;
            }
        }

        bool sorted_after_min_num = 1;
        for (int i = min_num_idx + 2; i < n; i++)
        {
            if(arr[i] < arr[i - 1])
            {
                sorted_after_min_num = 0;
                break;
            }
        }
        
        if(!sorted_after_min_num)
            cout << -1 << el;
        else
            cout << min_num_idx << el;

    }

    return 0;
}