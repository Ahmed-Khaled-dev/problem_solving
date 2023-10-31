/**
*    author:  Akayiz
*    created: 2023-10-30 16:47:13
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll arr[100005];

int main() {
    Akayiz

    ll t;
    cin >> t;

    ll n, q;
    while(t--){
        cin >> n >> q;

        map<int, vector<int>> div;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            for (int j = 1; j < 31; j++)
            {
                ll pow_2 = 1 << j;
                if(arr[i] % pow_2 == 0)
                    div[pow_2].push_back(i);
            }
        }

        int x, end = 31;
        for (int i = 0; i < q; i++)
        {
            cin >> x;
            if(x >= end)
                continue;

            for(auto idx : div[1 << x])
            {
                arr[idx] += 1 << (x - 1);
            }
            end = x;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << el;
    }

    return 0;
}