/**
*    author:  Akayiz
*    created: 2023-09-07 18:31:11
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    long long t, l, r;
    cin >> t;

    while(t--){
        cin >> l >> r;
        bool found = 0;
        for (int i = l; i <= r; i++)
        {
            for (int j = 2; j*j <= i; j++)
            {
                if(i % j == 0){
                    if(i - j != 0){
                        cout << j << " " << i - j << el;
                        found = 1;
                        break;
                    }
                }
            }
            if(found)
                break;  
        }
        if(!found)
            cout << -1 << el;
    }

    return 0;
}