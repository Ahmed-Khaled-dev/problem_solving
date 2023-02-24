/**
*    author:  Akayiz
*    created: 2023-02-24 19:12:45
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

    int t, result;
    string word;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        result = 0;
        cin >> word;
        result += (word[0] - 'a')*25;
        result += word[1] - 'a';
        if (word[1] < word[0])
        {
            result++;
        }
        cout << result << endl;
    }
    

    return 0;
}