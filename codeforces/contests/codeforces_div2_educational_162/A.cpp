/**
*    author:  Akayiz
*    created: 2024-02-23 16:38:39
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

bool arr[55];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n, first_1_idx, last_1_idx;
    while(t--){
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 1){
                first_1_idx = i;
                break;
            }
        }
        
        for (int i = n - 1; i >= 0; i--)
        {
            if(arr[i] == 1){
                last_1_idx = i;
                break;
            }
        }

        int zeros_cnt = 0;
        for (int i = first_1_idx; i < last_1_idx; i++)
        {
            if(arr[i] == 0){
                zeros_cnt++;
            }
        }
        
        cout << zeros_cnt << el;
    }

    return 0;
}