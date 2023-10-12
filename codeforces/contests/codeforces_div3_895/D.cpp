/**
*    author:  Akayiz
*    created: 2023-09-07 19:33:26
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    int t;
    cin >> t;

    long long n, x, y;

    while(t--){
        cin >> n >> x >> y;
        long long y_idxs = n / y, x_idxs = n / x, lcm = (x * y) / __gcd(x, y), common_idxs = n / lcm;
        long long y_sum = 0, x_sum = 0;

        x_idxs -= common_idxs;
        
        y_sum = (y_idxs * (y_idxs + 1)) / 2;
        x_sum = ((n * (n + 1)) / 2) - (((n - x_idxs) * ((n - x_idxs) + 1)) / 2);

        x_sum += ((y_idxs * (y_idxs + 1)) / 2) - (((y_idxs - common_idxs) * ((y_idxs - common_idxs) + 1)) / 2);

        cout << x_sum - y_sum << el;
    }

    return 0;
}