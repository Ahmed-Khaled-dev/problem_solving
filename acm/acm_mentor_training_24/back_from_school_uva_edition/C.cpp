/**
*    author:  Akayiz
*    created: 2024-01-05 05:07:36
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int prefix_sum[1000005];

int main() {
    Akayiz

    string s;
    int q, i, j;
    int cases_cnt = 1;
    while(cin >> s){
        memset(prefix_sum, 0, sizeof(prefix_sum));
        
        prefix_sum[0] = s[0] - '0';

        for(int i = 1; i < s.size(); i++){
            prefix_sum[i] = prefix_sum[i - 1] + (s[i] - '0');
        }

        cout << "Case " << cases_cnt << ":" << el;
        cin >> q;
        while(q--){
            cin >> i >> j;

            int diff = prefix_sum[max(i, j)] - prefix_sum[min(i, j) - 1];
            if(diff == 0 || diff == (max(i, j) - min(i, j) + 1)){
                cout << "Yes" << el; 
            }
            else
                cout << "No" << el;
        }
        cases_cnt++;
    }

    return 0;
}