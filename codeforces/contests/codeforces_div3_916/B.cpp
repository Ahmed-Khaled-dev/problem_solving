/**
*    author:  Akayiz
*    created: 2023-12-21 21:12:51
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

    int n, excite;

    while(t--){
        cin >> n >> excite;
        for(int i = 1; i <= excite; i++){
            cout << i << " ";
        }
        cout << n << " ";
        for(int i = n - 1; i > excite; i--){
            cout << i << " ";
        }
        cout << el;
    }

    return 0;
}