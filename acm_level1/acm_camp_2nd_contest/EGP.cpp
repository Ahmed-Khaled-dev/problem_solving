/**
*    author:  Akayiz
*    created: 2023-02-14 18:51:19
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
    double n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if ((long long) ceil(n/3) + ((long long) floor(n/3) * 2) == n)
        {
            cout << (long long) ceil(n/3) << " " << (long long) floor(n/3) << endl;
        }
        else
        {
            cout << (long long) floor(n/3) << " " << (long long) ceil(n/3) << endl;
        }
    }
    
    return 0;
}