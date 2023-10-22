/**
*    author:  Akayiz
*    created: 2023-10-22 14:37:57
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int arr[100005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n, k;
    while(t--){
        cin >> n >> k;
        int ans = 1e9;
        ll mod_2_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if(arr[i] % k == 0)
            {
                ans = 0;
            }
            else{
                if(arr[i] % 2 == 0 && k == 4){
                    mod_2_cnt++;
                }
                int num = 0;
                while(num <= 10){
                    num += k;
                    if(num - arr[i] >= 0)
                    {
                        ans = min(ans, num - arr[i]);
                        break;
                    }
                }
            }
        }

        if(k == 4)
        {
            if(mod_2_cnt >= 2){
                ans = 0;
            }
            else if(mod_2_cnt == 1)
            {
                ans = min(ans, 1);
            }
            else
            {
                ans = min(ans, 2);
            }
        }

        cout << ans << el;
    }

    return 0;
}