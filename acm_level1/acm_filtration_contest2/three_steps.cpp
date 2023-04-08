#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int steps[100005];
long long lovely = 0;

int main() {
    fast();

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> steps[i];
    }

    for (int i = 0; i < n - 2; i++)
    {
        if ((abs(steps[i] - steps[i + 1]) == 1) && (abs(steps[i + 1] - steps[i + 2])) == 1)
        {
            if ((steps[i] > steps[i + 1] && steps[i + 1] > steps[i + 2]) || (steps[i] < steps[i + 1] && steps[i + 1] < steps[i + 2]))
            {
                lovely++;
            }
        }
    }

    cout << lovely;
}