#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int freq[15][100005];

int main() {
    fast();

    int n, pillow_color;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> pillow_color;
        for (int j = 1; j < 11; j++)
        {
            freq[j][i] = freq[j][i - 1] + (j == pillow_color);
        }
    }

    int q, l, r, requested_color;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> l >> r >> requested_color;
        cout << freq[requested_color][r] - freq[requested_color][l - 1] << "\n";
    }
}