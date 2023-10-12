/**
*    author:  Akayiz
*    created: 2023-10-08 12:10:24
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    int t, n, e;
    cin >> t;

    while(t--){
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> e;
            sum += e;
            //cout << e << " " << sum << el;
        }
        
        cout << -1 * sum << el;
    }

    return 0;
}