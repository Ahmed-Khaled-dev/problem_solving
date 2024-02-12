/**
*    author:  Akayiz
*    created: 2024-02-11 11:26:43
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
    while(t--){
        cin >> h >> w;

        bool works = 0;
        if(h % 2 == 0){
            if(h / 2 != w)
                works = 1;
        }
        
        if(w % 2 == 0){
            if(w / 2 != h)
                works = 1;
        }

        if(works)
            cout << "Yes" << el;
        else
            cout << "No" << el;
    }

    return 0;
}