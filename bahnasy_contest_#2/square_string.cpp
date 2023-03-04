/**
*    author:  Akayiz
*    created: 2023-02-26 18:44:54
**/

#include <iostream>
#include <string>

using namespace std;

// void fast(void) {
//      ios::sync_with_stdio(0);
//      cin.tie(0);
//      cout.tie(0);
// }

int main() {
    //fast();

    int t;
    string word;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> word;
        bool square = 1;
        //cout << word.length() << endl;
        if (word.length() % 2 == 0)
        {
            //cout << word.length() / 2 << endl;
            for (int j = 0; j < word.length() / 2; j++)
            {
                if (word[j] != word[j + (word.length() / 2)])
                {
                    square = 0;
                    cout << "NO" << endl;
                    break;
                } 
            } 
            if (square)
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}