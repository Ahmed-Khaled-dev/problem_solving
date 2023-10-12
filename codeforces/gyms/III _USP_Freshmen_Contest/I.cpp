/**
*    author:  Akayiz
*    created: 2023-07-25 11:09:30
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
            //cout << (a + b) / 2.0 << endl;
            cout << (long long) floor((a + b) / 2.0) << " " << (long long) ceil((a + b) / 2.0) << endl;
        }
    }
    

    return 0;
}