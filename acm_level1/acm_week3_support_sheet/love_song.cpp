#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int n, q, arr[27][100005], l, r;
char letter;
int main() {
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
    {
        cin >> letter;
        for (int k = 1; k <= 26; k++)
        {
            arr[k][i] = arr[k][i - 1] + ((int) (letter - ('a' - 1)) == k);
        } 
    }

    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        int length = 0;
        for (int j = 1; j <= 26; j++)
        {
            length += (arr[j][r] - arr[j][l-1]) * j;
        }
        cout << length << "\n";
    }
}