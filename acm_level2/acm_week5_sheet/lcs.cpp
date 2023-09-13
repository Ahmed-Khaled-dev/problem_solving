/**
*    author:  Akayiz
*    created: 2023-08-06 19:51:25
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

// States : dp[idx1][idx2]

// Definition : It returns the length of the lcs while i can see from idx1 -> s.length(), idx2 -> t.length()

// Base cases : dp[s.length() + 1][idx2] = 0, dp[idx1][t.length() + 1] = 0

// Transition : if(s[i] == t[j]) dp[i][j] = dp[i + 1][j + 1] + 1
//              else dp[i][j] = max(dp[i + 1][j], dp[i][j + 1])

int dp[3005][3005];

string ans = "";

int main() {
    Akayiz

    string s, t;
    cin >> s >> t;

    int j = t.length() - 1;

    while (j >= 0)
    {
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if(s[i] == t[j])
            {
                dp[i][j] = dp[i + 1][j + 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
        j--;
    }

    //cout << dp[0][0] << endl;

    int i = 0;
    j = 0;

    while (j != t.length())
    {
        // if(i == s.length())
        // {
        //     i = 0;
        //     j++;
        // }
        // if(j == t.length())
        //     break;

        if(dp[i][j] == 0)
            break;
        
        if(dp[i][j] != max(dp[i + 1][j], dp[i][j + 1]))
        {
            ans += s[i];
            i++;
            j++;
        }
        else
        {
            if(dp[i][j] == dp[i + 1][j])
                i++;
            else
                j++;
        }
    }
    
    cout << ans << endl;

    return 0;
}