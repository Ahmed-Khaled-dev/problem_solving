/**
*    author:  Akayiz
*    created: 2023-05-12 17:46:17
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
    cin >> t;
    string palindrome;

    for (int i = 0; i < t; i++)
    {
        int freq[500] = {};
        int different_chars_count = 0;
        cin >> palindrome;
        for (int i = 0; i < (palindrome.length() / 2); i++)
        {
            if (freq[(int) palindrome[i]] == 0)
            {
                different_chars_count++;
                freq[(int) palindrome[i]] = 1;
            }
        }
        if (different_chars_count >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}