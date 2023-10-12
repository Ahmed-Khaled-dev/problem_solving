/**
*    author:  Akayiz
*    created: 2023-07-21 17:51:13
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int tests;
    cin >> tests;

    char character;
    for (int t = 0; t < tests; t++)
    {     
        vector<char> word = {};
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> character;
                if (character != '.')
                {
                    word.push_back(character);
                }
            }
        }

        for (auto letter : word)
        {
            cout << letter;
        }
        cout << endl;
        
    }
    

    return 0;
}