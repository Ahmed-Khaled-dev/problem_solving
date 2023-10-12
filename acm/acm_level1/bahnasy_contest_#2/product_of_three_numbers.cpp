/**
*    author:  Akayiz
*    created: 2023-02-26 18:33:52
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

    long long t, n;
    cin >> t;

    for (long long i = 0; i < t; i++)
    {
        cin >> n;
        bool found = 0;
        for (long long j = 2; j <= 1000; j++)
        {
            for (long long k = j + 1; k <= 1000; k++)
            {
                double number3 = n / (j * k);
                if ((number3 == (long long) number3) && (number3 * k * j) == n && number3 != j && number3 != k && number3 >= 2)
                {
                    cout << "YES" << endl;
                    cout << j << " " << k << " " << (long long) number3 << endl;
                    found = 1;
                    break;
                }
            }
            if (found)
            {
                break;
            }
        }
        if (!found)
        {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}