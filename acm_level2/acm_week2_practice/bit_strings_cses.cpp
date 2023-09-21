/**
*    author:  Akayiz
*    created: 2023-09-19 21:25:11
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

const int MOD = 1e9 + 7;

ll fast_power_mod(int a, int b){
    if(b == 0)
        return 1;
    
    ll half_power = fast_power_mod(a, b / 2);
    ll ans = (half_power % MOD * half_power % MOD) % MOD;

    if(b % 2 != 0)
        ans = (ans % MOD * a % MOD) % MOD;
    
    return ans;
}

int main() {
    Akayiz

    int n;
    cin >> n;

    cout << fast_power_mod(2, n);

    return 0;
}