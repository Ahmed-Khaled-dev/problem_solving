/**
*    author:  Akayiz
*    created: 2023-02-26 18:05:45
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

    string word;
    cin >> word;

    int counter = 0, other_counter = 0;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == 'a')
        {
            counter++;
        }
        else
        {
            other_counter++;
        }
    }
    
    if (other_counter >= counter)
    {
        other_counter = counter - 1;
    }
    
    cout << other_counter + counter;

    return 0;
}