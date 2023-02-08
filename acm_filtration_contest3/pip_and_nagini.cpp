#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

long long grid[505][505];

int main() {
    fast();

    int x, y;
    long long int sum_nagini = 0;
    long long int sum_pip = 0;
    cin >> x >> y;
    
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> grid[i][j];
        }
    }

    int j = 0;

    for (int i = 0; i < x; i++)
    {
        sum_pip += grid[i][j];

        if (i % 2 != 0)
        {
            if (j == 0)
            {
                while (j < y - 1)
                {
                    sum_pip += grid[i][++j];
                    //cout << grid[i][j] << "\n";
                }
            }
            else if (j == y - 1)
            {
                while (j > 0)
                {
                    sum_pip += grid[i][--j];
                    //cout << grid[i][j] << "\n";
                }
            }         
        }
    }

    int j2 = y - 1;

    for (int i = x - 1; i >= 0; i--)
    {
        sum_nagini += grid[i][j2];

        if ((i % 2 == 0) && ((x-1) % 2 != 0) || ((i % 2 != 0) && ((x - 1) % 2 == 0)))
        {
            if (j2 == 0)
            {
                while (j2 < y - 1)
                {
                    sum_nagini += grid[i][++j2];
                    //cout << grid[i][j2] << "\n";
                }
            }
            else if (j2 == y - 1)
            {
                while (j2 > 0)
                {
                    sum_nagini += grid[i][--j2];
                    //cout << grid[i][j2] << "\n";
                }
            }
        }
    }

    if (sum_nagini > sum_pip)
    {
        cout << "Nagini";
    }
    else
    {
        cout << "Pip";
    }
}