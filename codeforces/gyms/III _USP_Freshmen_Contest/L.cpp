/**
*    author:  Akayiz
*    created: 2023-07-25 11:40:27
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

    long long catch_phrases_count;
    cin >> catch_phrases_count;

    long long sum = 0, catch_phrase, min_odd_catch_phrase = 1e9;
    for (int i = 0; i < catch_phrases_count; i++)
    {
        cin >> catch_phrase;
        sum += catch_phrase;
        if (catch_phrase % 2 != 0)
            min_odd_catch_phrase = min(min_odd_catch_phrase, catch_phrase);
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        sum -= min_odd_catch_phrase;
        if (sum <= 0 || min_odd_catch_phrase == 1e9)
            cout << 0 << endl;
        else
            cout << sum;
    }

    return 0;
}