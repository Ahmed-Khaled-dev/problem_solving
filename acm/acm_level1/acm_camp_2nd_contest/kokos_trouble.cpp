/**
*    author:  Akayiz
*    created: 2023-02-14 19:45:28
**/

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    long long t, n, num, mini = 10000000;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int>numbers = {};
        vector<long long>differences = {};
        for (int j = 0; j < n; j++)
        {
            cin >> num;
            numbers.push_back(num);
            mini = min(mini, num);
        }

        sort(numbers.begin(), numbers.end());
        reverse(numbers.begin(), numbers.end());

        for (int j = 0; j < n; j++)
        {
            if (numbers[j] == mini)
            {
                break;
            }
            differences.push_back(numbers[j] - mini);
        }
        
        long long gcd = differences[0];
        for (int i = 1; i < differences.size(); ++i) 
        {
            gcd = __gcd(gcd , differences[i]);
        }

        if (gcd > INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << gcd << endl;
        }
    }
    
    return 0;
}