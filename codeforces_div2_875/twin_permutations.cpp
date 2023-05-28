/**
*    author:  Akayiz
*    created: 2023-05-28 17:46:20
**/

#include <iostream>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int perm_a[105];

int main() {
    fast();

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> perm_a[j];
            cout << (n + 1) - perm_a[j] << " ";
        }
        cout << endl;
    }
    return 0;
}