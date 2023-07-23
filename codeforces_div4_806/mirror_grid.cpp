/**
*    author:  Akayiz
*    created: 2023-07-21 14:41:14
**/

#include <iostream>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int grid_size;
char grid[105][105];

int get_minimum_operations();

int main() {
    fast();

    int tests_count;
    cin >> tests_count;

    for (int t = 0; t < tests_count; t++)
    {
        cin >> grid_size;
        for (int i = 1; i <= grid_size; i++)
        {
            for (int j = 1; j <= grid_size; j++)
            {
                cin >> grid[i][j];
            }
        }

        cout << get_minimum_operations() << endl;
    }

    return 0;
}

int get_minimum_operations(){
    int operations_count = 0;
    
    int start_x = 0, start_y = 0;
    int max_bounds = grid_size;
    // While didn't reach the middle cell of the matrix
    while (start_x <= toupper(grid_size / 2.0))
    {
        // I am working 1-based
        int x = start_x + 1, y = start_y + 1;
        // Loop column by column
        while (x < max_bounds)
        {
            int bool_freq[2] = {};
            int first_equivelant_cell_x = y, first_equivelant_cell_y = grid_size - x + 1;
            int second_equivelant_cell_x = grid_size - x + 1;
            int second_equivelant_cell_y = grid_size - y + 1 ;
            int third_equivelant_cell_x = grid_size - y + 1 ;
            int third_equivelant_cell_y = x;
            
            // cout << grid[x][y] << " " << grid[first_equivelant_cell_x][first_equivelant_cell_y] << " " 
            // << grid[second_equivelant_cell_x][second_equivelant_cell_y] << " " 
            // << grid[third_equivelant_cell_x][third_equivelant_cell_y] << endl;
            
            // I subtract zero to convert char -> int
            bool_freq[grid[x][y] - '0']++;
            bool_freq[grid[first_equivelant_cell_x][first_equivelant_cell_y] - '0']++;
            bool_freq[grid[second_equivelant_cell_x][second_equivelant_cell_y] - '0']++;
            bool_freq[grid[third_equivelant_cell_x][third_equivelant_cell_y] - '0']++;
            
            //cout << bool_freq[1] << " " << bool_freq[0] << endl;
            
            operations_count += min(bool_freq[1], bool_freq[0]);

            x++;
        }
        //cout << "Finished first matrix!" << endl;
        // Go into the new smaller matrix
        start_x++;
        start_y++;
        max_bounds -= 1;
    }
    
    return operations_count;
}