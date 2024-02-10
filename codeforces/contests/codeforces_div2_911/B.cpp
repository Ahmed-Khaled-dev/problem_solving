/**
*    author:  Akayiz
*    created: 2023-11-26 16:59:29
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

    int a, b, c;
    bool ans[3];
    while(t--){
        cin >> a >> b >> c;
        //cout << (b + c) % 2 << el;
        ans[0] = !((b + c) % 2);
        ans[1] = !((a + c) % 2);
        ans[2] = !((a + b) % 2);

        cout << ans[0] << " " << ans[1] << " " << ans[2] << el;
    }

    return 0;
}