/**
*    author:  Akayiz
*    created: 2023-04-03 22:48:41
**/

#include <iostream>
#include <vector>
using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

char maze[55][55] = {};
char directions[4] = {'U', 'D', 'R', 'L'};
bool visited_directions[4] = {};
char numbers_directions[4] = {};
int x, y;
string instructions;
int counter = 0;

void recu(int i, char numbers_directions[], int start_x, int start_y, int end_x, int end_y){

    if (i == 3)
    {
        for (int j = 0; j < instructions.length(); j++)
        {
            switch (numbers_directions[instructions[i]])
            {
            case 'U':
                start_y++;
                break;
            case 'D':
                start_y--;
                break;
            case 'R':
                start_x++;
                break;
            case 'L':
                start_x--;
                break;
            }
            if (start_x + 1 > x || start_y + 1 > y || maze[start_x][start_y] == '#')
            {
                return; 
            }
            else if (maze[start_x][start_y] == 'E')
            {
                counter++;
            }
        }
        return;
    }
    
    cout << i << endl;
    for (int j = 0; j < 3; j++)
    {
        numbers_directions[i] = directions[i];
        numbers_directions[i + 1] = directions[i + 1];
        recu(i + 1, numbers_directions, start_x, start_y, end_x, end_y);  
    }
    cout << numbers_directions[i];
    
}

int main() {
    fast();

    cin >> x >> y;
    cin >> instructions;

    int start_x, start_y, end_x, end_y;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> maze[i][j];
            if (maze[i][j] == 'S')
            {
                start_x = i;
                start_y = j;
            }
            else if (maze[i][j] == 'E')
            {
                end_x = i;
                end_y = j;
            }
        }
    }

    recu(0, {}, start_x, start_y, end_x, end_y);
    cout << counter;

    return 0;
}