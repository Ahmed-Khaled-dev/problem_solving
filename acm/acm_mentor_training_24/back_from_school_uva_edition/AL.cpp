/**
*    author:  Akayiz
*    created: 2024-01-28 16:12:08
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int tape_size, tracks_cnt;

int arr[25];
int max_sum = INT_MIN;
vector<int> ans;

void getBestTracks(int idx, vector<int> tracks, int sum){
    if(sum > max_sum){
        max_sum = sum;
        ans = tracks;
    }
    
    if(idx == tracks_cnt){
        return;
    }

    if(sum + arr[idx] <= tape_size){
        tracks.push_back(arr[idx]);
        getBestTracks(idx + 1, tracks, sum + arr[idx]);
        tracks.pop_back();
    }
    getBestTracks(idx + 1, tracks, sum);
}

int main() {
    Akayiz

    while(cin >> tape_size){
        cin >> tracks_cnt;

        for (int i = 0; i < tracks_cnt; i++)
        {
            cin >> arr[i];
        }

        max_sum = INT_MIN;

        getBestTracks(0, {}, 0);

        for(auto track : ans){
            cout << track << " ";
        }
        cout << "sum:" << max_sum << el;
    }

    return 0;
}