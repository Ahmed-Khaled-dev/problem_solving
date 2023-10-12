#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

char arr[305][305];

int main() {
    fast();

    int T, N;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int max = -1;
        cin >> N;
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < N * 3; k++)
            {
                cin >> arr[j][k];
            }
        }

        for (int j = 0; j < N * 3; j += 3)
        {
            int sum = 0;
            for (int k = 0; k < 3; k++)
            {
                for (int u = j; u < j + 3; u++)
                {
                    if (arr[k][u] == '*')
                    {
                        //cout << k << "\n" << u << "\n";
                        sum += 4;
                    }        
                }
            }
            if (sum > max)
            {
                max = sum;
            }
        }
        cout << max << "\n";
    }
}