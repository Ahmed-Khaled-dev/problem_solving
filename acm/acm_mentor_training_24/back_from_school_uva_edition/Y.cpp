/**
*    author:  Akayiz
*    created: 2024-01-27 00:51:51
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll n, mold_sum;
ll arr[25];

bool found;

bool canMoldSum(int sum, int idx){
    if(found){
        return 1;
    }
    
    if(sum == mold_sum){
        found = 1;
    }
    else if(idx == n){
        return 0;
    }

    return canMoldSum(sum + arr[idx], idx + 1) || canMoldSum(sum, idx + 1);
}

int main() {
    Akayiz

    int t;
    cin >> t;

    while(t--){
        cin >> mold_sum;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        found = 0;
        cout << (canMoldSum(0, 0) == 0 ? "NO" : "YES") << el;
    }

    return 0;
}