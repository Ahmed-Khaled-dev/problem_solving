/**
*    author:  Akayiz
*    created: 2023-05-08 15:13:42
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t;
    string s;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        bool all_chars_equal = 1;
        //cout << s.length() << endl;
        for (int i = 1; i < s.length(); i++)
        {
            if (s[0] != s[i])
            {
                all_chars_equal = 0;
                break;
            }
        }
        if (all_chars_equal)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << s.length() - 1 << endl;
        }
    }
    return 0;
}