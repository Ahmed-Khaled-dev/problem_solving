/**
*    author:  Akayiz
*    created: 2023-11-17 16:38:52
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
        if(n % 3 == 0)
            cout << "Second" << el;
        else
            cout << "First" << el;
    }

    return 0;
}