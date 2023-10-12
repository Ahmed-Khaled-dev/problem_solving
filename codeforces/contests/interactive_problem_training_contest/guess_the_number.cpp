/**
*    author:  Akayiz
*    created: 2023-07-29 14:28:09
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

    long long low = 1, high = 1000000, mid, ans = -1;
    string response;

    while (low <= high)
    {
        mid = (low + high) / 2;
        cout << mid << endl;
        cin >> response;

        if (response == "<")
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
            ans = max(ans, mid);
        }
    }

    cout << "! " << ans << endl;

    return 0;
}