/**
*    author:  Akayiz
*    created: 2023-07-25 12:13:04
**/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

// x, y, r
vector<pair<pair<int, int>, int>> circles = {};

int main() {
    fast();

    int queries_count;
    cin >> queries_count;

    char type;
    int x, y, r;
    for (int i = 0; i < queries_count; i++)
    {
        cin >> type;
        cin >> x >> y >> r;
        bool can_add = 1;
        bool can_remove = 0;

        if (type == 'A')
        {
            for (auto circle : circles)
            {
                // X1 + X2 Sqaured
                if (((sqrt(((x - circle.first.first) * (x - circle.first.first)) + 
                ((y - circle.first.second) * (y - circle.first.second)))) < (r + circle.second)))
                {
                    cout << circle.first.first << " " << circle.first.second << " " << circle.second << endl;
                    can_add = 0;
                    break;
                }
            }
            if (can_add)
            {
                circles.push_back(make_pair(make_pair(x, y), r));
                cout << "Ok" << endl;
            }
            else
                cout << "No" << endl;
        }
        else
        {
            for (auto circle : circles)
            {
                if (x == circle.first.first && y == circle.first.second && r == circle.second)
                {
                    cout << circle.first.first << " " << circle.first.second << " " << circle.second << endl;
                    circle.first.first = -10;
                    circle.first.second = -10;
                    circle.second = -10;
                    can_remove = 1;
                    cout << circle.first.first << " " << circle.first.second << " " << circle.second << endl;
                    break;
                }
            }
            if (can_remove)
            {
                cout << "Ok" << endl;
            }
            else
                cout << "No" << endl;
        }
        for (auto circle : circles)
        {
            cout << circle.first.first << " " << circle.first.second << " " << circle.second << endl;
        }
        
    }
    

    return 0;
}