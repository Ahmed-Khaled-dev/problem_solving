/**
*    author:  Akayiz
*    created: 2023-09-07 17:25:13
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

    while(t--){
        double a, b, c;
        cin >> a >> b >> c;

        int ans = 0;

        while(true){
            if(a == b)
                break;
            else if(abs(a - b) / 2 <= c){
                ans++;
                break;
            }
            else{
                if(a > b){
                    a -= c;
                    b += c;
                }
                else{
                    a += c;
                    b -= c;
                }
                ans++;
            }
        }
        
        cout << ans << el;   
    }

    return 0;
}