/**
*    author:  Akayiz
*    created: 2023-02-12 22:27:00
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int numbers[200005];

int main() {
    fast();

    int t, n;
    
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        bool found = 0;
        long long max = -1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = i; j >= 0; j--)
            {
                if (__gcd(numbers[i], numbers[j]) == 1)
                {
                    if (i + j + 2 > max)
                    {
                        max = i + j + 2;
                        found = 1;
                    }
                }  
            }
        }
        if (!found)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << max << endl;
        }
    }
    

    return 0;
}