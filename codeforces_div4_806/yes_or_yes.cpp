/**
*    author:  Akayiz
*    created: 2023-06-26 01:25:36
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

    char a, b, c;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        if (tolower(a) == 'y' && tolower(b) == 'e' && tolower(c) == 's')
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