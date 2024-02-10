/**
*    author:  Akayiz
*    created: 2024-01-18 16:49:57
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// Value, Second city index
pair<int, int> cities[100005];
// 1-based
int dist_start[100005];
int dist_end[100005];

int main() {
    Akayiz

    int t, q;
    cin >> t;

    int cities_cnt, x, y;
    while(t--){
        cin >> cities_cnt;
        for (int i = 1; i <= cities_cnt; i++)
        {
            cin >> cities[i].first;
        }

        for (int i = 1; i <= cities_cnt; i++)
        {
            if(i == 1){
                cities[i].second = 2;
            }
            else if(i == cities_cnt){
                cities[cities_cnt].second = cities_cnt - 1;
            }
            else{
                if(abs(cities[i].first - cities[i - 1].first) < abs(cities[i].first - cities[i + 1].first)){
                    cities[i].second = i - 1;
                }
                else{
                    cities[i].second = i + 1;
                }
            }
        }

        dist_start[1] = 0;
        for (int i = 1; i < cities_cnt; i++)
        {
            //cout << cities[i].first << " " << cities[i].second << el;
            if(cities[i].second > i){
                if(abs(cities[i].first - cities[i + 1].first) >= 1){
                    dist_start[i + 1] = dist_start[i] + 1;
                }
                else{
                    dist_start[i + 1] = dist_start[i];
                }
            }
            else{
                dist_start[i + 1] = dist_start[i] + abs(cities[i].first - cities[i + 1].first);
            }
        }

        dist_end[cities_cnt] = 0;
        for (int i = cities_cnt; i > 1; i--)
        {
            //cout << cities[i].first << " " << cities[i].second << el;
            if(cities[i].second < i){
                if(abs(cities[i].first - cities[i - 1].first) >= 1){
                    dist_end[i - 1] = dist_end[i] + 1;
                }
                else{
                    dist_end[i - 1] = dist_end[i];
                }
            }
            else{
                dist_end[i - 1] = dist_end[i] + abs(cities[i].first - cities[i - 1].first);
            }
        }

        cin >> q;

        while(q--){
            cin >> x >> y;
            if(y > x){
                cout << dist_start[y] - dist_start[x] << el;
            }
            else{
                cout << dist_end[y] - dist_end[x] << el;
            }
        }
        
    }

    return 0;
}