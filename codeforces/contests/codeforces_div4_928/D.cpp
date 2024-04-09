/**
*    author:  Akayiz
*    created: 2024-02-19 17:11:57
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int arr[200005];

int main() {
    Akayiz

    int t;
    cin >> t;

    int n;
    while(t--){
        cin >> n;
        map<long, long> freq = {};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        
        long groups_count = 0;
        for (int i = 0; i < n; i++)
        {
            int opposite_number = arr[i];
            for (int i = 0; i < 31; i++)
            {
                opposite_number = opposite_number ^ (1 << i);
            }
            //cout << arr[i] << " " << freq[arr[i]] << " " << opposite_number << " " << freq[opposite_number] << endl;
            if(freq[arr[i]] > 0){
                if(freq.count(opposite_number) > 0){
                    groups_count++;
                    freq[arr[i]]--;
                    freq[opposite_number]--;
                }
                else{
                    groups_count++;
                }
            }
        }

        cout << groups_count << el;
    }

    return 0;
}