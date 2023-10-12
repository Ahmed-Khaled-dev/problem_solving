/**
*    author:  Akayiz
*    created: 2023-09-26 17:42:10
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

    int n;
    while(t--){
        cin >> n;
        ll cnt = 1;
        for (int i = 0; i < n; i++)
        {
            cout << cnt << " ";
            cnt += 2;
        }
        cout << el;
    }

    return 0;
}