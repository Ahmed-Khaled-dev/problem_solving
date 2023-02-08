#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long arr[200005];

int main() {
    fast();

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        long long int sum = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + n);

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] <= 0 && arr[j + 1] <= 0)
            {
                arr[j] = -arr[j];
                arr[j + 1] = -arr[j + 1];
            }
            else if (arr[j] <= 0 && arr[j + 1] >= 0)
            {
                if (abs(arr[j]) > arr[j + 1])
                {
                    arr[j] = -arr[j];
                    arr[j + 1] = -arr[j + 1];
                }
            }
            else if (arr[j] >= 0 && arr[j + 1] <= 0)
            {
                if (abs(arr[j + 1]) > arr[j])
                {
                    arr[j] = -arr[j];
                    arr[j + 1] = -arr[j + 1];
                }
            }
        }

        for (int j = 0; j < n; j++)
        {
            sum += arr[j];
        }

        cout << sum << endl;
    }
}