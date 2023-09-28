/**
*    author:  Akayiz
*    created: 2023-09-26 18:50:41
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

const int N = 200005, LOG = 18;

int arr[N];
int and_st[N][LOG];
int st_log[N];

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
            and_st[i][0] = arr[i];
        }

        st_log[1] = 0;
        for (int i = 2; i <= n; i++)
        {
            st_log[i] = st_log[i / 2] + 1;
        }
        
        for (int p = 1; p <= LOG; p++)
        {
            for (int i = 1; i + (1 << p) - 1 <= n; i++)
            {
                and_st[i][p] = and_st[i][p - 1] & and_st[i + (1 << (p - 1))][p - 1];
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
                    ll len = mid - l + 1;
                    ll sub_power = st_log[len];
                    ll and_sum = and_st[l][sub_power] & and_st[mid - (1 << sub_power) + 1][sub_power];

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