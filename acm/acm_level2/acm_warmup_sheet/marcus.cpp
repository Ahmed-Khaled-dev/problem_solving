/**
*    author:  Akayiz
*    created: 2023-07-11 00:47:33
**/

#include <iostream>
#include <vector>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int rows, columns;

char valid_letters[] = {'I', 'E', 'H', 'O', 'V', 'A', '#'};

bool valid_grid_point(int x, int y){
    return x < rows && x > -1 && y < columns && y > -1;
}

int dx[] = {-1, 0, 0};
int dy[] = {0, 1, -1};

int main() {
    fast();

    int tests_count;
    cin >> tests_count;

    for (int i = 0; i < tests_count; i++)
    {
        cin >> rows >> columns;
        char cobblestone[10][10] = {};

        int start_x, start_y, end_x, end_y;
        
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                cin >> cobblestone[i][j];
                if (cobblestone[i][j] == '#')
                {
                    end_x = i;
                    end_y = j;
                }
                else if (cobblestone[i][j] == '@')
                {
                    start_x = i;
                    start_y = j;
                }
            }
        }

        int found_letters = 0;
        vector<string> movements;
        for (int i = 0; i < 7; i++)
        {
            for (int i = 0; i < 3; i++)
            {
                int new_x = start_x + dx[i];
                int new_y = start_y + dy[i];

                //cout << new_x << " " << new_y << endl;
                if (valid_grid_point(new_x, new_y) && cobblestone[new_x][new_y] == valid_letters[found_letters])
                {
                    if (i == 0)
                    {
                        movements.push_back("forth");
                    }
                    else if (i == 1)
                    {
                        movements.push_back("right");
                    }
                    else
                    {
                        movements.push_back("left");
                    }
                    found_letters++;
                    start_x = new_x;
                    start_y = new_y;  
                    break;
                }
            }
        }

        for (int i = 0; i < 7; i++)
        {
            if (i == 6)
            {
                cout << movements[i];
                break;
            }
            cout << movements[i] << " ";
        }
        cout << endl;
    }
    return 0;
}