/**
*    author:  Akayiz
*    created: 2023-02-14 19:24:41
**/

#include <iostream>
#include <set>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t, n, number;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        set<int> numbers = {};
        vector<int> dublicates = {};
        int freq[105] = {};
        for (int j = 0; j < n; j++)
        {
            cin >> number;
            if (freq[number] == 0)
            {
                numbers.insert(number);
                freq[number]++;
            }
            else
            {
                dublicates.push_back(number);
            }
        }

        set<int>::iterator it;
        for (it = numbers.begin(); it != numbers.end(); it++)
        {
            cout << *it << " ";
        }

        for (int j = 0; j < dublicates.size(); j++)
        {
            cout << dublicates[j] << " ";
        }
        cout << endl;
    }
    return 0;
}