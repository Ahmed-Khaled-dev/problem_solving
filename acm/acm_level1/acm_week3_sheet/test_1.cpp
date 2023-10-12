#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

unsigned long long arr[55][55];

int main() {
    fast();

    long long max = -1;
    long long sum = 0;
    int n, k;
    cin >> n >> k;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        // n = 4
        // k = 2
        if ((i + (k - 1)) > n - 1)
        {
            break;
        }
        for (int j = 0; j < n; j++)
        {
            if ((j + (k - 1)) > n - 1)
            {
                break;
            }
            for (int i2 = i; i2 < i + k; i2++)
            {
                for (int j2 = j; j2 < j + k; j2++)
                {
                    sum += arr[i2][j2];
                    //cout << sum << "\n";
                }
            }
            if (sum > max)
            {
                max = sum;
            }
            sum = 0;
        }
    }
    cout << max;
}