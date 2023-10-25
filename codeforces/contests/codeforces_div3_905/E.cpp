/**
*    author:  Akayiz
*    created: 2023-10-24 22:30:12
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

long double num_log[200005];

int main() {
    Akayiz

    ll t;
    cin >> t;

    ll n;
    while(t--){
        cin >> n;

        ll num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            num_log[i] = log2(num);
            //cout << num_log[i] << " ";
        }
        //cout << el;

        ll steps = 0;
        for (int i = 1; i < n; i++)
        {
            int diff = num_log[i - 1] - num_log[i];
            if(num_log[i] < num_log[i - 1])
            {
                steps += diff;
                num_log[i] += diff;
                if(num_log[i] < num_log[i - 1])
                {
                    steps++;
                    num_log[i]++;
                }
            }
        }
        
        cout << steps << el;
    }

    return 0;
}