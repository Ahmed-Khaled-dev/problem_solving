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
int and_prefix[35][200005];

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

        for (int b = 0; b < 32; b++)
        {
            and_prefix[b][1] = (arr[1] >> b) & 1;
            for (int j = 2; j <= n; j++)
            {
                and_prefix[b][j] = and_prefix[b][j - 1] + ((arr[j] >> b) & 1);
            }
        }
        
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            cin >> l >> k;
            if(arr[l] < k)
                cout << -1 << " ";
            else
            {
                ll low = l, high = n, mid, ans = l;
                while(low <= high){
                    mid = (low + high) / 2;
                    ll and_sum = 0;
                    
                    for (int b = 0; b < 32; b++)
                    {
                        if(and_prefix[b][mid] - and_prefix[b][l - 1] == mid - l + 1)
                            and_sum |= (1 << b); 
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