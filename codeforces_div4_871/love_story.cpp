/**
*    author:  Akayiz
*    created: 2023-05-11 21:55:07
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
    string s;
    string code = "codeforces";
    for (int i = 0; i < t; i++)
    {
        int sum = 0;
        cin >> s;
        for (int i  = 0; i < 10; i++)
        {
            if (s[i] != code[i])
            {
                sum++;
            }
        }
        cout << sum << endl;
    }
    

    return 0;
}