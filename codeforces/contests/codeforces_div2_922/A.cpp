/**
*    author:  Akayiz
*    created: 2024-02-10 13:50:41
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

    int h, w;
    ll ans;
    while(t--){
        cin >> h >> w;
        ans = (w / 2) * h;

        cout << ans << el;    
    }

    return 0;
}