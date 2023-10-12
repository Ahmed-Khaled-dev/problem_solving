#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

char movements[55];

int main() {
    fast();

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cin >> movements;

        int initial_x = 0, initial_y = 0;
        bool passed_candy = 0;

        for (int j = 0; j < n; j++)
        {
            switch (movements[j])
            {
            case 'U':
                initial_y++;
                break;
            case 'D':
                initial_y--;
                break;
            case 'R':
                initial_x++;
                break;
            case 'L':
                initial_x--;
                break;
            }
            if (initial_x == 1 && initial_y == 1)
            {
                passed_candy = 1;
                break;
            }
        }
        if (passed_candy)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

