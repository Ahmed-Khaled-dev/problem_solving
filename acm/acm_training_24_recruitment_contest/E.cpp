/**
*    author:  Akayiz
*    created: 2023-09-20 21:10:04
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

vector<pair<int, char>> bigger_chars[100];

int main() {
    Akayiz

    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 1; i < n; i++)
    {
        for (int j = s[i] - 1; j >= 'A'; j--)
        {
            bigger_chars[j].push_back({i, (char) s[i]});
        }
    }
    
    int k;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        int idx_first_bigger_char = upper_bound(bigger_chars[s[i]].begin(), bigger_chars[s[i]].end(), make_pair(i, 'A')) - bigger_chars[s[i]].begin();
        if(idx_first_bigger_char + k - 1 < bigger_chars[s[i]].size())
        {
            cout << bigger_chars[s[i]][idx_first_bigger_char + k - 1].first + 1
            << " " << bigger_chars[s[i]][idx_first_bigger_char + k - 1].second << el;
        }
        else{
            cout << -1 << el;
        }
    }
    

    return 0;
}