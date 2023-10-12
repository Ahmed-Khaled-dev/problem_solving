#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int arr[100005];

int main() {
    fast();

    int t, n, sum;
    bool operation_performed;
    bool negative_one_found;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        operation_performed = 0;
        negative_one_found = 0;
        sum = 0;

        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            if (arr[j] == -1)
            {
                negative_one_found = 1;
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == -1 && arr[j + 1] == -1 && !operation_performed && j != n-1)
            {
                arr[j] = 1;
                arr[j + 1] = 1;
                operation_performed = 1;
            }
            //cout << sum << endl;
            sum += arr[j];
        }

        if (!negative_one_found)
        {
            sum -= 4;
        }

        cout << sum << endl;
    }
}