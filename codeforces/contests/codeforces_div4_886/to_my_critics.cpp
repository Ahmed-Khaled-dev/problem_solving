/**
*    author:  Akayiz
*    created: 2023-07-21 17:34:40
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

    int t;
    cin >> t;

    int a, b, c;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a + b >= 10)
        {
            cout << "YES" << endl;
        }
        else if (a + c >= 10)
        {
            cout << "YES" << endl;
        }
        else if (b + c >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}