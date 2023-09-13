/**
*    author:  Akayiz
*    created: 2023-08-01 18:02:11
**/

#include <bits/stdc++.h>

#define el '\n'
#define Akayiz ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;

using namespace std;

char s[200005];
map<char, bool> available_letters;

int main() {
    Akayiz

    int string_length, available_letters_count;
    cin >> string_length >> available_letters_count;

    for (int i = 0; i < string_length; i++)
        cin >> s[i];
    
    char letter;
    for (int i = 0; i < available_letters_count; i++)
    {
        cin >> letter;
        available_letters[letter] = 1;
    }

    ll substrings_count = 0, added_substrings = 0;
    for (int i = 0; i < string_length; i++)
    {
        if(available_letters[s[i]])
        {
            added_substrings++;
            substrings_count += added_substrings;
        }
        else
        {
            added_substrings = 0;
        }
    }
    
    cout << substrings_count << el;

    return 0;
}