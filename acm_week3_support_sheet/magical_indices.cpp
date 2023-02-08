#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int arr[1000005];
bool before[1000005];
bool after[1000005];

int main() {
    fast();

    int T, n;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int max = -1, min = 10000000;
        int magical = 0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
            if (j == n - 1)
            {
                after[j] = 1;
            }
            else if (j == 1)
            {
                if (arr[1] > arr[0])
                {
                    before[1] = 1;
                }
                else
                {
                    before[1] = 0;
                }
            }
        }

        for (int j = 2; j < n; j++)
        {
            if (arr[j] >= arr[j-1])
            {
                if (before[j - 1] == 1)
                {
                    before[j] = 1;
                }
                else
                {
                    if (arr[j] >= max)
                    {
                        before[j] = 1;
                        max = arr[j];
                    }
                    else
                    {
                        before[j] = 0;
                    }
                }
            }
            else
            {
                before[j] = 0;
            }
        }
        
        for (int j = n - 2; j >= 2; j--)
        {
            if (arr[j + 1] >= arr[j])
            {
                if (after[j + 1] == 1)
                {
                    after[j] = 1;
                }
                else
                {
                    if (arr[j] <= min)
                    {
                        after[j] = 1;
                        min = arr[j];
                    }
                    else
                    {
                        before[j] = 0;
                    }
                }
            }
            else
            {
                after[j] = 0;
            }
        }

        for (int j = 2; j < n - 1; j++)
        {
            //cout << before[j] << "\n" << after[j] << "\n";
            if (before[j] && after[j])
            {
                magical++;
            }
        }

        cout << magical << "\n";
    }
}