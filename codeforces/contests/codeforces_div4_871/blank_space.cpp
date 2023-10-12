/**
*    author:  Akayiz
*    created: 2023-05-11 21:58:07
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}
bool binary[105];

int main() {
    fast();

    int t, n;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int blank_space_count = 0, answer = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> binary[i];
            if (binary[i] == 1)
            {
                answer = max(blank_space_count, answer);
                blank_space_count = 0;
            }
            else
            {
                blank_space_count++;
            }
        }
        cout << max(answer, blank_space_count) << endl;
    }

    return 0;
}