/**
*    author:  Akayiz
*    created: 2023-09-19 17:55:56
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

const int MOD = 998244353;

ll fast_power(int a, int b){
    // Base case
    if(b == 0)
        return 1;
    
    ll half_power = fast_power(a, b / 2);
    ll ans = (half_power % MOD * half_power % MOD) % MOD;
    if(b % 2 != 0)
        ans = (ans % MOD * a % MOD) % MOD;
    return ans;
}

int main() {
    Akayiz

    int w, h;
    cin >> w >> h;
    
    cout << (4 % MOD * fast_power(2, (w - 1 + h - 1)) % MOD) % MOD << el;

    return 0;
}