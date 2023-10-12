#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

const int ARR_SIZE = 100005;
int doz_power[ARR_SIZE], eaten[ARR_SIZE];

int main() {
    fast();

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> doz_power[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (doz_power[i] >= doz_power[i + 1])
        {
            if (eaten[i] > 0)
            {
                eaten[i + 1] = eaten[i] + 1;
            }
            else
            {
                eaten[i + 1] = 1;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << eaten[i] << " ";
    }
}