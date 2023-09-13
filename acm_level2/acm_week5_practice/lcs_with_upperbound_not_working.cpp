/**
*    author:  Akayiz
*    created: 2023-08-06 16:28:13
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// States : dp[idx]

// Definition : Returns the longest common subsequence ending with the character at t[idx]
//              while i can see from 0 -> idx
//              and the current index that i am standing on in string "s"

// Transition : dp[idx] = max_subsequence
//              for(i : idx - 1 -> 1) 
//                  if (can add char to subsequence)
//                      if (new subsequence.length() > max_subsequence.length())
//                          max_subsequence = new subsequence
//                  else
//                      if(new subsequence.length() > max_subsequence.length())
//                          max_subsequence = new subsequence

pair<string, int> dp[3005];
map<char, vector<int>> letter_occurences;

int main() {
    Akayiz
    
    string s, t;

    cin >> s >> t;

    for (int i = 0; i < s.length(); i++)
    {
        letter_occurences[s[i]].push_back(i + 1);
    }

    int curr_idx = 0;

    string max_subsequence;

    for (int i = 0; i < t.length(); i++)
    {
        if(upper_bound(letter_occurences[t[i]].begin(), letter_occurences[t[i]].end(), 0) != letter_occurences[t[i]].end())
        {
            max_subsequence = t[i];
            curr_idx = letter_occurences[t[i]][upper_bound(letter_occurences[t[i]].begin(), letter_occurences[t[i]].end(), 0) - letter_occurences[t[i]].begin()];
        }
        else
        {
            dp[i].second = -1;
            continue;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if(dp[j].second != -1 && upper_bound(letter_occurences[t[i]].begin(), letter_occurences[t[i]].end(), dp[j].second) != letter_occurences[t[i]].end())
            {
                int new_idx = letter_occurences[t[i]][upper_bound(letter_occurences[t[i]].begin(), letter_occurences[t[i]].end(), dp[j].second) - letter_occurences[t[i]].begin()];
                if((dp[j].first + t[i]).length() > max_subsequence.length())
                {
                    max_subsequence = dp[j].first + t[i];
                    curr_idx = new_idx;
                }
                // else if((dp[j].first + t[i]).length() == max_subsequence.length()){
                //     if(new_idx < dp[j].second){
                //         max_subsequence = dp[j].first + t[i];
                //         curr_idx = new_idx;
                //     }
                // }
            }
        }
        
        dp[i].first = max_subsequence;
        dp[i].second = curr_idx;
    }
    
    string ans = "";
    for (int i = 0; i <= 20; i++)
    {
        cout << t[i] << " " << dp[i].first << endl;
        if(dp[i].first.length() > ans.length())
            ans = dp[i].first;
    }

    cout << ans << endl;
    
    return 0;
}