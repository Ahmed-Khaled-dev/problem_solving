/**
*    author:  Akayiz
*    created: 2024-04-08 16:37:02
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

    int n, a, b;
    while(t--){
        cin >> n >> a >> b;

        if(b <= a * 2){
            cout << (n / 2) * b + (n % 2) * a << el;
        }
        else{
            cout << a * n << el;
        }
    }

    return 0;
}