/**
*    author:  Akayiz
*    created: 2023-10-09 18:21:17
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

ll prefix[1000006] = {};

int main() {
    Akayiz

    ll t, pos;
    cin >> t;

    string s;
    while(t--){
        cin >> s;
        cin >> pos;

        prefix[0] = s.size();
        for (int i = 1; i < s.size(); i++)
        {
            prefix[i] = prefix[i - 1] + (s.size() - i);
        }
        
        ll word_number = 0;
        if(pos > s.size())
        {
            for (int i = 1; i < s.size(); i++)
            {
                if(pos <= prefix[i])
                {
                    word_number = i;
                    break;
                }
            }
        }
        
        ll removed_cnt = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if(removed_cnt == word_number)
                break;
            if(s[i] > s[i + 1])
            {
                s.erase(s.begin() + i);
                removed_cnt++;
            }
        }

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if(removed_cnt == word_number)
                break;
            s.erase(s.begin() + i);
            removed_cnt++;
        }
        
        //cout << pos << " " << word_number << " " << prefix[word_number - 1] << el;

        if(word_number == 0)
            cout << s[pos - 1];
        else
            cout << s[pos - prefix[word_number - 1] - 1];
    }

    return 0;
}