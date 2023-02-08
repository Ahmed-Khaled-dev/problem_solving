#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long freq[1005];

int main() {
    long long N, num;
    double R;
    bool found = 0;
    cin >> N >> R;

    for (long long i = 0; i < N; i++)
    {
        cin >> num;
        freq[num]++;
    }

    for (long long i = 0; i < 1005; i++)
    {
        if (freq[i] == 0)
        {
            continue;
        }
        for (long long j = 0; j < 1005; j++)
        {
            if (freq[j] == 0 || i == j)
            {
                continue;
            }
            if ((double) ((freq[i] + freq[j]) / 2.0) == R)
            {
                cout << "YES";
                found = 1;
                return 0;
            }
        }
    }

    if (!found)
    {
        cout << "NO";
    }
}