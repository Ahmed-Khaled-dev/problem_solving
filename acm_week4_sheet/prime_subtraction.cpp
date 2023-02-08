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
    unsigned long long x, y;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        if (x - y == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}