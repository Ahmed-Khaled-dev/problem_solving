/**
*    author:  Crispy time limit
        Abraam Ahmed Rehab
**/

#include <bits/stdc++.h>

#define el '\n'
#define Crispy ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

map<char, vector<int>> letters_idx;
stack<int> current_idxs;

int main() {
    Crispy

    string s;
    cin >> s;

    ll queries;
    cin >> queries;

    string action;
    char letter;

    for (ll i = 0; i < s.length(); ++i) {
        letters_idx[s[i]].push_back(i + 1);
    }

    ll curr_idx = 0;
    ll wrong_count = 0;
    for (ll i = 0; i < queries; ++i) {
        cin >> action;
        if (action == "push")
        {
            cin >> letter;
            if (upper_bound(letters_idx[letter].begin(), letters_idx[letter].end(), curr_idx) == letters_idx[letter].end() 
            || wrong_count > 0)
            {
                cout << "NO" << el;
                wrong_count++;
            }
            else
            {
                //cout << "Current idx: " << curr_idx << el;
                curr_idx = letters_idx[letter][upper_bound(letters_idx[letter].begin(), letters_idx[letter].end(), curr_idx) - letters_idx[letter].begin()];
                current_idxs.push(curr_idx);
                cout << "YES" << el;
                //cout << "Updated current idx: " << curr_idx << el;
            }
            //cout << curr_idx << el;
        }
        else
        {
            if (wrong_count > 0)
            {
                wrong_count--;
                if (wrong_count <= 0)
                    cout << "YES" << el;
                else
                    cout << "NO" << el;
            }
            else
            {
                if (!current_idxs.empty())
                    current_idxs.pop();
                if (!current_idxs.empty())
                {
                    curr_idx = current_idxs.top();
                }
                else
                    curr_idx = 0;
                cout << "YES" << el;
            }
        }
    }
    return 0;
}