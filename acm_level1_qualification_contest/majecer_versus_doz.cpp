/**
*    author:  Akayiz
*    created: 2023-02-21 18:07:54
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

    long long t, x, k;
    cin >> t;

    for (long long i = 0; i < t; i++)
    {
        cin >> x >> k;
        // while (k != 0 && x > 1)
        // {
        //     if (x % 2 == 0)
        //     {
        //         x /= 2;
        //         k--;
        //     }
        //     else
        //     {
        //         x = 3 * x + 1;
        //         k--;
        //     }
        // }
        cout << 1 << endl;
        //cout << k << endl;
    }

    return 0;
}