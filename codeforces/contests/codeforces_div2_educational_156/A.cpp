/**
*    author:  Akayiz
*    created: 2023-10-09 17:44:04
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

    ll n;
    while(t--){
        cin >> n;
        if(n < 6 || (n <= 9 && n % 3 == 0))
            cout << "NO" << el;
        else if(n % 3 != 0)
            cout << "YES" << el << 1 << " " << 2 << " " << n - 3 << el;
        else
            cout << "YES" << el << 1 << " " << 4 << " " << n - 5 << el;
    }

    return 0;
}