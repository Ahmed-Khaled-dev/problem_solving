#include <iostream>
#include <algorithm>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int t, n;

int main() {
    fast();

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int arr[105] = {};
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        sort(arr, arr + n);

        int maximum = -1;
        bool strict = 1;

        for (int k = 0; k < n; k++)
        {
            if (arr[k] > maximum)
            {
                maximum = arr[k];
            }
            else
            {
                strict = 0;
                break;
            }
        }

        if (strict)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
}