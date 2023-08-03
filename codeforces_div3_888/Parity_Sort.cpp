/**
*    author:  Akayiz
*    created: 2023-07-25 18:04:49
**/

#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

long long elements[200005] = {}, elements2[200005] = {};

map<int, vector<int>> swaps_occured;

int main() {
    fast();

    long long t;
    cin >> t;

    long long elements_count;

    for (int i = 0; i < t; i++)
    {
        cin >> elements_count;
        for (int j = 0; j < elements_count; j++)
        {
            cin >> elements[j];
            elements2[j] = elements[j];
        }

        sort(elements2, elements2 + elements_count);

        bool wrong_swap = 0;
        for (int j = 0; j < elements_count; j++)
        {
            // if (elements[j] != elements2[j])
            // {
            //     swaps_occured[elements2[j]].push_back(elements[j]);
            // }
            
            if (((elements2[j] % 2 == 0) && (elements[j] % 2 != 0)) || ((elements2[j] % 2 != 0) && (elements[j] % 2 == 0)))
            {
                wrong_swap = 1;
                break;
                // for (auto element : swaps_occured[elements[j]])
                // {
                //     if(elements2[j] == element)
                //         wrong_swap = 1;
                //         break;   
                // } 
            }
        }

        if (wrong_swap)
        {
            cout << "NO" << endl;
        }
        else
            cout << "YES" << endl;
        
    }

    return 0;
}