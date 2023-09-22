/**
*    author:  Akayiz
*    created: 2023-09-21 19:38:10
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

        bool found_b = 0, found_a = 0;
        ll coins = 0, ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'B'){
                found_b = 1;
            }
            else if(found_b){
                coins++;
            }
        }

        //cout << coins << el;
        ans = max(ans, coins);

        reverse(s.begin(), s.end());
        
        found_b = 0, found_a = 0;
        coins = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'B'){
                found_b = 1;
            }
            else if(found_b){
                coins++;
            }
        }

        //cout << coins << el;
        ans = max(ans, coins);

        found_b = 0, found_a = 0;
        coins = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'B'){
                found_b = 1;
                if(found_a)
                {
                    found_a = 0;
                    found_b = 0;
                    coins++;
                } 
            }
            else
            {
                found_a = 1;
                if(found_b)
                {
                    found_b = 0;
                    found_a = 0;
                    coins++;
                }
            }
        }

        //cout << coins << el;
        ans = max(ans, coins);

        cout << ans << el;
    }

    return 0;
}