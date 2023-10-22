/**
*    author:  Akayiz
*    created: 2023-10-22 14:09:57
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

    string pin;
    while(t--){
        int ans = 0, cur = 1;
        cin >> pin;
        ans += 4;

        for (int i = 0; i < 4; i++)
        {
            if(pin[i] != '0')
            {
                ans += abs(pin[i] - '0' - cur);
                cur = pin[i] - '0';
            }
            else
            {
                ans += abs(10 - cur);
                cur = 10;
            }
        }

        cout << ans << el;
    }   

    return 0;
}