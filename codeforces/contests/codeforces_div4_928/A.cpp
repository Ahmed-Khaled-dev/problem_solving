/**
*    author:  Akayiz
*    created: 2024-02-19 16:22:24
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

    string s;
    while(t--){
        cin >> s;
        int cnt_a = 0, cnt_b = 0;
        for(auto c : s){
            if(c == 'A')
                cnt_a++;
            else if(c == 'B')
                cnt_b++;
        }

        if(cnt_a > cnt_b)
            cout << 'A' << el;
        else
            cout << 'B' << el;
    }

    return 0;
}