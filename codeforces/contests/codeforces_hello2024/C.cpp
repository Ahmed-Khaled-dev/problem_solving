/**
*    author:  Akayiz
*    created: 2024-01-06 17:01:57
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int pen_cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if(arr[i] < arr[i + 1]){
                pen_cnt++;
            }
        }

        if(pen_cnt == 0){
            cout << 0 << el;
        }
        else
            cout << pen_cnt - 1 << el;
        
    }

    return 0;
}