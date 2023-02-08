#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

const int ARR_SIZE = 2005;

int arr[ARR_SIZE][ARR_SIZE];
int row_arr[ARR_SIZE][ARR_SIZE];
int column_arr[ARR_SIZE][ARR_SIZE];

int main() {
    fast();
    int n, q, x, y;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> arr[i][j];
            row_arr[i][j] = arr[i][j];
            column_arr[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) 
{
        sort(row_arr[i], row_arr[i] + n);
        reverse(row_arr[i], row_arr[i] + n);
        sort(column_arr[i], column_arr[i] + n);
        reverse(column_arr[i], column_arr[i] + n);
    }

    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        cout << row_arr[x - 1][(arr[x - 1][y - 1]) - 1] << " " << column_arr[y - 1][(arr[x - 1][y - 1]) - 1];
        cout << "\n";
    }
}