#include <iostream>

using namespace std;

void fast() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long rows, columns, q, row_touched, column_touched;
bool grid[1005][1005];

int main() {
    fast();
    cin >> rows >> columns >> q;

    long long max_row = rows - 1;
    long long max_column = columns - 1;

    for (long long i = 0; i < q; i++)
    {
        cin >> row_touched >> column_touched;
        grid[row_touched - 1][column_touched - 1] = !grid[row_touched - 1][column_touched - 1];

        if (column_touched - 2 >= 0)
        {
            grid[row_touched - 1][column_touched - 2] = !grid[row_touched - 1][column_touched - 2];
        }
        if (column_touched <= max_column)
        {
            grid[row_touched - 1][column_touched] = !grid[row_touched - 1][column_touched];
        }
        if (row_touched - 2 >= 0)
        {
            grid[row_touched - 2][column_touched - 1] = !grid[row_touched - 2][column_touched - 1];
        }
        if (row_touched <= max_row)
        {
            grid[row_touched][column_touched - 1] = !grid[row_touched][column_touched - 1];
        }
    }

    for (long long i = 0; i < rows; i++)
    {
        for (long long j = 0; j < columns; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }
}