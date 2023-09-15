/**
*    author:  Akayiz
*    created: 2023-09-15 15:39:17
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll movies[200005];

int main() {
    Akayiz

    ll t;
    cin >> t;

    ll days, max_movies, d;

    while(t--){
        cin >> days >> max_movies >> d;
        
        for (ll i = 0; i < days; i++)
        {
            cin >> movies[i];
        }

        ll ans = 0, sum = 0;
        multiset<ll> seen_movies = {};

        for (ll i = 0; i < days; i++)
        {   
            if(movies[i] > 0)
            {
                sum += movies[i];
                //cout << "sum = " << sum << endl;
                ans = max(ans, sum - ((i + 1) * d));
                //cout << "ans = " << ans << endl;

                seen_movies.insert(movies[i]);
                
                if(seen_movies.size() == max_movies){
                    //cout << "Set begin = " << *seen_movies.begin() << endl;
                    sum -= *seen_movies.begin();
                    seen_movies.erase(seen_movies.begin());
                }
            }
        }
        
        cout << ans << el;
    }

    return 0;
}