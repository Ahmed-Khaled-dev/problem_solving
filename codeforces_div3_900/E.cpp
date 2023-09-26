/**
*    author:  Akayiz
*    created: 2023-09-26 18:50:41
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int arr[200005];
int and_prefix[200005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n, q, l, k;

    while(t--){
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        // and_prefix[1] = arr[1];
        // for (int i = 2; i <= n; i++)
        // {
        //     and_prefix[i] = and_prefix[i - 1] & arr[i];
        // }
        
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            cin >> l >> k;
            if(arr[l] < k)
                cout << -1 << " ";
            else
            {
                int low = l, high = n, mid, ans = l;
                while(low <= high){
                    mid = (low + high) / 2;
                    int and_sum = arr[l];

                    for (int i = l + 1; i <= mid; i++)
                    {
                        and_sum &= arr[i];
                    }

                    if(and_sum < k)
                        high = mid - 1;
                    else
                    {
                        ans = max(ans, mid);
                        low = mid + 1;
                    }
                }
                
                cout << ans << " ";
            }
        }

        cout << el;
        
    }

    return 0;
}