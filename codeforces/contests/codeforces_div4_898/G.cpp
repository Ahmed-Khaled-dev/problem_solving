/**
*    author:  Akayiz
*    created: 2023-09-21 19:38:10
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

    string s;
    while(t--){
        cin >> s;
        map<char, int> freq = {};
        bool consequtive_bs = 0;
        int consequtive_as = 0, min_consequtive_as = 1e8;

        for (int i = 0; i < s.size(); i++)
        {
            freq[s[i]]++;
            if(s[i] == 'B')
            {
                if(s[i] == s[i + 1])
                    consequtive_bs = 1;
                
                min_consequtive_as = min(min_consequtive_as, consequtive_as);
                consequtive_as = 0;
            }
            else
                consequtive_as++;
        }
        min_consequtive_as = min(min_consequtive_as, consequtive_as);
        
        if(s[0] == 'B' || s[s.size() - 1] == 'B')
            cout << freq['A'] << el;
        else if(consequtive_bs)
            cout << freq['A'] << el;
        else
            cout << freq['A'] - min_consequtive_as << el;
    }

    return 0;
}