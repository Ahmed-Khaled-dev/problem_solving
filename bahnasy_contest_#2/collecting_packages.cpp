/**
*    author:  Akayiz
*    created: 2023-02-26 20:15:23
**/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void fast(void) {
     ios::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
}

int main() {
    fast();

    int t, n, x, y;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<pair<int, int>> points = {};
        
        for (int j = 0; j < n; j++)
        {
            cin >> x >> y;
            points.push_back({x, y});
        }

        sort(points.begin(), points.end());

        // current x and y
        int c_x = 0, c_y = 0;
        bool impossible = 0;
        string answer = "";
        for (int j = 0; j < n; j++)
        {
            if (points[j].first > c_x || points[j].second > c_y)
            {
                // X-movement
                if (points[j].first > c_x)
                {
                    if (points[j].second >= c_y)
                    {
                        int movement_x = points[j].first - c_x;
                        c_x += movement_x;
                        //cout << c_x << endl;
                        for (int k = 0; k < movement_x; k++)
                        {
                            answer += 'R';
                        }
                    }
                    else
                    {
                        impossible = 1;
                        break;
                    }
                }
                // Y-movement
                if (points[j].second > c_y)
                {
                    if (points[j].first >= c_x)
                    {
                        int movement_y = points[j].second - c_y;
                        c_y += movement_y;
                        for (int k = 0; k < movement_y; k++)
                        {
                            answer += 'U';
                        }    
                    }
                    else
                    {
                        impossible = 1;
                        break;
                    }
                }
            }
            else
            {
                impossible = 1;
                break;
            }
        }

        if (!impossible)
        {
            cout << "YES" << endl;
            cout << answer << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}