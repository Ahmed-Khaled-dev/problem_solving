#include <iostream>

using namespace std;

void fast(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

char doz_world[1005][1005];
char type_of_spot_in_each_row[1005];

int main() {
    fast();

    int rows, columns, spots_gravity_field_distance;
    cin >> rows >> columns >> spots_gravity_field_distance;

    bool there_are_doz_in_spots_range = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin >> doz_world[i][j];
            if (doz_world[i][j] == 'R')
            {
                type_of_spot_in_each_row[i] = 'R';
            }
            else if (doz_world[i][j] == 'L')
            {
                type_of_spot_in_each_row[i] = 'L';
            }
        }
    }

    while (there_are_doz_in_spots_range)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (doz_world[i][j] == 'D')
                {
                    if (type_of_spot_in_each_row[i] == 'L')
                    {
                        for (int k = j; k < spots_gravity_field_distance; k++)
                        {
                            if (doz_world[i][k] == 'L')
                            {
                                if (doz_world[i][j] == '.')
                                {

                                }      
                            }
                        }
                    }    
                }
            }
        }
    }

}