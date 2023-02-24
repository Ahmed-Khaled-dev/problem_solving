/**
*    author:  Akayiz
*    created: 2023-02-24 19:25:34
**/

#include <iostream>
#include <cmath>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t, x, y;
    //int original_x = 0, original_y = 0;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> x >> y;
        double distance = sqrt(x*x + y*y);
        //cout << distance << endl;
        if (x == 0 && y == 0)
        {
            cout << '0' << endl;
        }
        else if (distance == (int) distance)
        {
            cout << '1' << endl;
        }
        else
        {
            cout << '2' << endl;
        }
    }
    return 0;
}