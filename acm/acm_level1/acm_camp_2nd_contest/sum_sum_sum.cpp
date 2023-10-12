/**
*    author:  Akayiz
*    created: 2023-02-14 18:17:08
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int freq[1000005];

int main() {
    fast();

    int t;
    long long x;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x;
        
        bool found = 0;
        for (int j = 2; j*j <= x; j++)
        {
            while (x % i == 0)
            {
                x /= i;
                freq[i]++;
                if (freq[i] == 3)
                {
                    found = 1;
                }
            }
        }
        if (x != 1)
        {
            freq[x]++;
            if (freq[x] == 3)
            {
                found = 1;
            }
        }
        
        if (found || x == 2)
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
        
    }
    return 0;
}