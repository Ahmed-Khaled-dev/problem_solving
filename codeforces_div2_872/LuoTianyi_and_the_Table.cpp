/**
*    author:  Akayiz
*    created: 2023-05-08 17:07:34
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t;
    int n, m, b;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int max1 = INT_MIN, max2 = INT_MIN, min1 = INT_MAX, min2 = INT_MAX;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < m; i++)
            {
                cin >> b;
                if (max1 < b)
                {
                    max2 = max1;
                    max1 = b;
                }
                else
                {
                    max2 = max(b, max2);
                }
                if (min1 > b)
                {
                    min2 = min1;
                    min1 = b;
                }
                else
                {
                    min2 = min(b, min2);
                }
            }
        }
        if (n > m)
        {
            //cout << max1 << " " << max2 << " " << min1 << endl;
            if ((max1 - min2) > (max2 - min1))
            {
                cout << (((max1 - min1) * (n*m - m)) + ((max1 - min2) * (m - 1))) << endl;
            }
            else
            {
                cout << (((max1 - min1) * (n*m - m)) + ((max2 - min1) * (m - 1))) << endl;
            }
        }
        else
        {
            if ((max1 - min2) > (max2 - min1))
            {
                cout << (((max1 - min1) * (n*m - n)) + ((max1 - min2) * (n - 1))) << endl;
            }
            else
            {
                cout << (((max1 - min1) * (n*m - n)) + ((max2 - min1) * (n - 1))) << endl;
            }
        }
    }

    return 0;
}