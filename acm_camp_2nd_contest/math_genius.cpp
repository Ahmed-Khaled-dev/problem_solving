/**
*    author:  Akayiz
*    created: 2023-02-14 18:02:38
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

    int t, a, b, c;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << "Yes" << endl;
            continue;
        }
        else if (b + c == a)
        {
            cout << "Yes" << endl;
            continue;
        }
        else if (a + c == b)
        {
            cout << "Yes" << endl;
            continue;
        }
        cout << "No" << endl;
    }
    

    return 0;
}
