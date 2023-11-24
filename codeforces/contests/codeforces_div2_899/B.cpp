/**
*    author:  Akayiz
*    created: 2023-11-24 22:41:34
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

    int k, si, n;
    while(t--){
        cin >> n;
        set<vector<int>> s = {};
        int freq[55] = {};
        while(n--){
            cin >> k;
            vector<int> v = {};
            for (int i = 0; i < k; i++)
            {
                cin >> si;
                v.push_back(si);
            }
            s.insert(v);
        }

        int unique_digits_count = 0;

        for (auto i : s)
        {
            for (auto j : i)
            {
                if(freq[j] == 0)
                    unique_digits_count++;
                freq[j]++;
            }
        }

        int ans = 0, temp_freq[55] = {};
        
        int digits_removed;
        for (int x = 1; x < 51; x++)
        {
            digits_removed = 0;
            for (int i = 0; i < 51; i++)
            {
                temp_freq[i] = freq[i];
            }
            for (auto i : s)
            {
                for (auto j : i)
                {
                    if(j == x){
                        for (auto k : i)
                        {
                            temp_freq[k]--;
                            digits_removed += !temp_freq[k];
                        }
                        break;
                    }
                }
            }
            if(digits_removed != 0)
                ans = max(ans, unique_digits_count - digits_removed);
        }

        cout << ans << el;
    }
    
    return 0;
}