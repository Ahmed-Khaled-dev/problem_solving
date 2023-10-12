/**
*    author:  Akayiz
*    created: 2023-04-03 22:15:10
**/

#include <iostream>
#include <map>

using namespace std;

map<pair<int, int>, bool> coordinates;
 
void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int N;
    cin >> N;
    string moves;
    cin >> moves;

    int origin_x = 0, origin_y = 0;
    coordinates[{origin_x, origin_y}] = 1;

    for (int i = 0; i < N; i++)
    {
        switch (moves[i])
        {
        case 'R':
            if (coordinates[{origin_x + 1, origin_y}] == 1)
            {
                cout << "Yes";
                return 0;
            }  
            coordinates[{++origin_x, origin_y}] = 1;
            break;
        case 'L':
            if (coordinates[{origin_x - 1, origin_y}] == 1)
            {
                cout << "Yes";
                return 0;
            }  
            coordinates[{--origin_x, origin_y}] = 1;
            break;
        case 'U':
            if (coordinates[{origin_x, origin_y + 1}] == 1)
            {
                cout << "Yes";
                return 0;
            }  
            coordinates[{origin_x, ++origin_y}] = 1;
            break;
        case 'D':
            if (coordinates[{origin_x, origin_y - 1}] == 1)
            {
                cout << "Yes";
                return 0;
            }  
            coordinates[{origin_x, --origin_y}] = 1;
            break;
        }
    }

    cout << "No";
    
    return 0;
}