/**
*    author:  Akayiz
*    created: 2023-02-12 18:01:43
**/

#include <iostream>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t;
    long long a, b;
    long long difference = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a == b || abs(a - b) == 1)
        {
            cout << "Ok" << endl;
        }
        else
        {
            difference = abs(a - b);
            cout << (min(a,b) + (difference/2)) << ' ' << (max(a, b) - (difference/2)) << endl;
        }
    }
    return 0;
}