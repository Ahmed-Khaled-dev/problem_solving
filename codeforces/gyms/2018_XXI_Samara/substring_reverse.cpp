/**
*    author:  Akayiz
*    created: 2023-08-04 22:26:28
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

int main() {
    Akayiz

    string s, t;
    cin >> s >> t;

    int first_diff_idx = 0, last_diff_idx = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] != t[i])
        {
            first_diff_idx = i;
            break;
        }
    }

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if(s[i] != t[i])
        {
            last_diff_idx = i;
            break;
        }
    }

    for (int i = first_diff_idx, j = last_diff_idx; i <= last_diff_idx; i++, j--)
    {   
        //cout << s[i] << " " << t[j] << el;
        if(s[i] != t[j])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}